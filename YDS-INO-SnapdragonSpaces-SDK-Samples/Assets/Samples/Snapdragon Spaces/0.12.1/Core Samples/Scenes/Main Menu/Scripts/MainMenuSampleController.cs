/******************************************************************************
 * File: MainMenuSampleController.cs
 * Copyright (c) 2022 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *
 ******************************************************************************/

using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;
using UnityEngine.XR.OpenXR;

namespace Qualcomm.Snapdragon.Spaces.Samples
{
    public class MainMenuSampleController : SampleController
    {
        public GameObject ContentGameObject;
        public GameObject ComponentVersionsGameObject;
        public Transform ComponentVersionContent;
        public GameObject ComponentVersionPrefab;

        public ScrollRect ScrollRect;
        public Scrollbar VerticalScrollbar;
        public GameObject GazeScrollButtons;
        public InputActionReference TouchpadInputAction;

        public GameObject ExtendedContext;
        public Toggle PassthroughToggle;

        private bool _instantiatedComponentVersions = false;

        public override void Start() {
            base.Start();
            OnInputSwitch(new InputAction.CallbackContext());
            if (!_baseRuntimeFeature) {
                Debug.LogWarning("Base Runtime Feature isn't available.");
                return;
            }
            if (!_baseRuntimeFeature.IsPassthroughSupported()) {
                return;
            }
            ExtendedContext.SetActive(_baseRuntimeFeature.IsPassthroughSupported());
            PassthroughToggle.SetIsOnWithoutNotify(_isPassthroughOn);
        }

        public override void OnEnable() {
            base.OnEnable();
            SwitchInputAction.action.performed += OnInputSwitch;
            TouchpadInputAction.action.performed += OnTouchpadInput;
            _primaryButtonPressed += TogglePassthroughCheckbox;
        }

        public override void OnDisable() {
            base.OnDisable();
            SwitchInputAction.action.performed -= OnInputSwitch;
            TouchpadInputAction.action.performed -= OnTouchpadInput;
            _primaryButtonPressed -= TogglePassthroughCheckbox;
        }

        private void OnTouchpadInput(InputAction.CallbackContext context) {
            var touchpadValue = context.ReadValue<Vector2>();

            if (touchpadValue.y > 0f) {
                OnVerticalScrollViewChanged(0.44f);
            }
            else {
                OnVerticalScrollViewChanged(-0.44f);
            }
        }

        public void OnInfoButtonPress() {
            SendHapticImpulse();
            ContentGameObject.SetActive(!ContentGameObject.activeSelf);
            ComponentVersionsGameObject.SetActive(!ComponentVersionsGameObject.activeSelf);

            if (!_instantiatedComponentVersions) {
                var componentVersions = _baseRuntimeFeature.ComponentVersions;
                for (int i = 0; i < componentVersions.Count; i++) {
                    var componentVersionObject = Instantiate(ComponentVersionPrefab, ComponentVersionContent);

                    var componentVersionDisplay = componentVersionObject.GetComponent<ComponentVersionDisplay>();
                    componentVersionDisplay.ComponentNameText = componentVersions[i].ComponentName;
                    componentVersionDisplay.BuildIdentifierText = componentVersions[i].BuildIdentifier;
                    componentVersionDisplay.VersionIdentifierText = componentVersions[i].VersionIdentifier;
                    componentVersionDisplay.BuildDateTimeText = componentVersions[i].BuildDateTime;
                }

                _instantiatedComponentVersions = true;
            }
        }

        public void OnVerticalScrollViewChanged(float value) {
            SendHapticImpulse(frequency: 10f, duration:0.1f);
            ScrollRect.verticalNormalizedPosition = Mathf.Clamp01(ScrollRect.verticalNormalizedPosition + value * Time.deltaTime);
            VerticalScrollbar.value = ScrollRect.verticalNormalizedPosition;
        }

        private void OnInputSwitch(InputAction.CallbackContext ctx) {
            if (GazePointer.activeSelf) {
                ScrollRect.verticalScrollbar = null;
                VerticalScrollbar.gameObject.SetActive(false);

                GazeScrollButtons.SetActive(true);
            }
            else if (DevicePointer.activeSelf) {
                ScrollRect.verticalScrollbar = VerticalScrollbar;
                VerticalScrollbar.gameObject.SetActive(true);

                GazeScrollButtons.SetActive(false);
            }
        }

        private void TogglePassthroughCheckbox() {
            PassthroughToggle.SetIsOnWithoutNotify(_isPassthroughOn);
        }
    }
}