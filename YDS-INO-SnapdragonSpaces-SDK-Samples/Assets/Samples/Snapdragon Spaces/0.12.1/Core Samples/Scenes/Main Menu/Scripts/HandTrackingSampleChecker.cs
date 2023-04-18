// /******************************************************************************
//  * File: HandTrackingSampleChecker.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  * Confidential and Proprietary - Qualcomm Technologies, Inc.
//  *
//  ******************************************************************************/

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.OpenXR;
using UnityEngine.XR.OpenXR.Features;
#if UNITY_ANDROID && !UNITY_EDITOR
using System.Linq;
using UnityEngine.Android;
using UnityEngine.XR.OpenXR;
#endif

namespace Qualcomm.Snapdragon.Spaces.Samples
{
    [RequireComponent(typeof(Button))]
    public class HandTrackingSampleChecker : MonoBehaviour
    {
        [SerializeField] private Button _button;

        private void OnValidate() => _button = _button ? _button : GetComponent<Button>();

        private void OnEnable() {
            _button.interactable = CheckRuntimeCameraPermissions();
        }

        private bool CheckRuntimeCameraPermissions() {
#if UNITY_ANDROID && !UNITY_EDITOR
            var activity = new AndroidJavaClass("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject>("currentActivity");
            var runtimeChecker = new AndroidJavaClass("com.qualcomm.snapdragon.spaces.unityserviceshelper.RuntimeChecker");

            if ( !runtimeChecker.CallStatic<bool>("CheckCameraPermissions", new object[] { activity }) ) {
                Debug.LogError("Snapdragon Spaces Services has no camera permissions! Hand Tracking feature disabled.");
                return false;
            }
#endif
            return true;
        }
    }
}