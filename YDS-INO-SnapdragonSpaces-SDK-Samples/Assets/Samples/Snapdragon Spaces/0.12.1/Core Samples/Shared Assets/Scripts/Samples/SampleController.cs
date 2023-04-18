/******************************************************************************
 * File: SampleController.cs
 * Copyright (c) 2021-2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *
 ******************************************************************************/

using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Interactions;
using UnityEngine.XR;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.OpenXR;
using InputDevice = UnityEngine.XR.InputDevice;

namespace Qualcomm.Snapdragon.Spaces.Samples
{
    public enum PointerType {
        GazePointer = 0,
        ControllerPointer = 1
    }

    public enum XRControllerProfile {
        HostController = 0,
        XRControllers = 1
    }

    public class SampleController : MonoBehaviour
    {
        public GameObject GazePointer;
        public GameObject DevicePointer;
        public InputActionReference SwitchInputAction;
        public InputActionReference LeftControllerPrimary;
        public InputActionReference RightControllerPrimary;
        public bool RunSubsystemChecks = true;
        public List<GameObject> ContentOnPassed;
        public List<GameObject> ContentOnFailed;
        public delegate void PrimaryButtonPressed();

        protected static PrimaryButtonPressed _primaryButtonPressed;
        protected Transform ARCameraTransform { get; private set; }
        protected virtual bool ResetSessionOriginOnStart => true;
        protected bool SubsystemChecksPassed;
        protected BaseRuntimeFeature _baseRuntimeFeature { get; private set; }
        protected bool _isPassthroughOn{ get; private set; }

        private ARSessionOrigin _arSessionOrigin;
        private XRControllerProfile _xrControllerProfile;
        private XRControllerManager _xrControllerManager;
        private bool _isSessionOriginMoved = false;
        private const string _controllerTypePrefsKey = "Qualcomm.Snapdragon.Spaces.Samples.Prefs.ControllerType";

        public virtual void Start() {
            Screen.sleepTimeout = SleepTimeout.NeverSleep;
            _arSessionOrigin ??= FindObjectOfType<ARSessionOrigin>();
            ARCameraTransform = _arSessionOrigin.camera.transform;

            int controllerType = PlayerPrefs.GetInt(_controllerTypePrefsKey, 0);
            GazePointer.SetActive(controllerType == (int) PointerType.GazePointer);
            DevicePointer.SetActive(controllerType == (int) PointerType.ControllerPointer);
            
            RegisterXRProfiles();
            _xrControllerManager = FindObjectOfType<XRControllerManager>(true);
            SendControllerProfileToManager(_xrControllerManager);
            _baseRuntimeFeature = OpenXRSettings.Instance.GetFeature<BaseRuntimeFeature>();

            SubsystemChecksPassed = GetSubsystemCheck();
            
            foreach (var content in ContentOnPassed) {
                content.SetActive(SubsystemChecksPassed);
            }
            foreach (var content in ContentOnFailed) {
                content.SetActive(!SubsystemChecksPassed);
            }

            if (!SubsystemChecksPassed) {
                Debug.LogWarning("Subsystem checks failed. Some features may be unavailable.");
            }
            if (!_baseRuntimeFeature) {
                Debug.LogWarning("Base Runtime Feature isn't available.");
                return;
            }
            if (!_baseRuntimeFeature.IsPassthroughSupported()) {
                return;
            }
            _isPassthroughOn = _baseRuntimeFeature.GetPassthroughEnabled();
            _baseRuntimeFeature.SetPassthroughEnabled(_isPassthroughOn);
        }

        public virtual void Update() {
            if (ResetSessionOriginOnStart && !_isSessionOriginMoved && ARCameraTransform.position != Vector3.zero) {
                OffsetSessionOrigin();
                _isSessionOriginMoved = true;
            }
        }

        public void Quit() {
            SendHapticImpulse();
            Application.Quit();
        }

        public void SendHapticImpulse(float amplitude = 0.5f, float frequency = 60f, float duration = 0.1f) {
            _xrControllerManager.SendHapticImpulse(amplitude, frequency, duration);
        }

        protected void OffsetSessionOrigin() {
             ARSessionOrigin sessionOrigin = FindObjectOfType<ARSessionOrigin>();
             sessionOrigin.transform.Rotate(0.0f, -ARCameraTransform.rotation.eulerAngles.y, 0.0f, Space.World);
             sessionOrigin.transform.position = -ARCameraTransform.position;
            /* Also rotate the device pointers parent so that it has the same origin as the AR Camera. */
            if (_xrControllerManager != null) {
                _xrControllerManager.ResetPositionAndRotation(sessionOrigin.transform);
            }
        }
        
        protected bool GetSubsystemCheck() {
            return !RunSubsystemChecks || CheckSubsystem();
        }
        
        protected virtual bool CheckSubsystem(){
            Debug.LogWarning("No subsystem check was performed. Derived classes from SampleController must implement their own check.");
            return false;
        }

        public virtual void OnEnable() {
            SwitchInputAction.action.performed += OnSwitchInput;
            LeftControllerPrimary.action.performed += OnPrimaryButtonPressed;
            RightControllerPrimary.action.performed += OnPrimaryButtonPressed;
            InputDevices.deviceConnected += RegisterConnectedDevice;
            RegisterXRProfiles();
        }

        public virtual void OnDisable() {
            SwitchInputAction.action.performed -= OnSwitchInput;
            InputDevices.deviceDisconnected -= RegisterConnectedDevice;
            LeftControllerPrimary.action.performed -= OnPrimaryButtonPressed;
            RightControllerPrimary.action.performed -= OnPrimaryButtonPressed;
        }

        private void OnSwitchInput(InputAction.CallbackContext ctx) {
            if (ctx.interaction is TapInteraction) {
                if (GazePointer.activeSelf) {
                    var baseRuntimeFeature = OpenXRSettings.Instance.GetFeature<BaseRuntimeFeature>();
                    if (baseRuntimeFeature) {
                        baseRuntimeFeature.TryResetPose();
                    }
                }
                GazePointer.SetActive(!GazePointer.activeSelf);
                DevicePointer.SetActive(!DevicePointer.activeSelf);
            }

            if (ctx.interaction is HoldInteraction) {
                Quit();
            }

            int controllerType = GazePointer.activeSelf ? (int) PointerType.GazePointer :
                                 DevicePointer.activeSelf ? (int) PointerType.ControllerPointer : 0;

            PlayerPrefs.SetInt(_controllerTypePrefsKey, controllerType);
        }
        
        private void OnPrimaryButtonPressed(InputAction.CallbackContext ctx) {
            if (!_baseRuntimeFeature.IsPassthroughSupported()) {
                return;
            }
            TogglePassthrough();
            _primaryButtonPressed?.Invoke();
        }

        public void TogglePassthroughWithCheckbox() {
            TogglePassthrough();
        }

        private void TogglePassthrough() {
            _isPassthroughOn = !_isPassthroughOn;
            _baseRuntimeFeature.SetPassthroughEnabled(_isPassthroughOn);
        }

        private void RegisterXRProfiles() {
            List<InputDevice> inputDevices = new List<InputDevice>();
            InputDevices.GetDevices(inputDevices);
            foreach (var inputDevice in inputDevices) {
                RegisterConnectedDevice(inputDevice);
            }
        }

        private void RegisterConnectedDevice(InputDevice inputDevice) {
            if (inputDevice.name.Contains("Oculus")) {
                _xrControllerProfile = XRControllerProfile.XRControllers;
            }
            else {
                _xrControllerProfile = XRControllerProfile.HostController;
            }
        }

        private void SendControllerProfileToManager(XRControllerManager xrControllerManager) {
            if (xrControllerManager != null) {
                xrControllerManager.ActivateController(_xrControllerProfile);
            }
        }
    }
}