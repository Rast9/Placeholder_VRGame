using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.Management;
public class DynamicTimestep : MonoBehaviour
{
    XRDisplaySubsystem xrDisplay;
    bool deviceChecked = false;
    float timeStep;
    private void Start()
    {
        xrDisplay = XRGeneralSettings.Instance.Manager.activeLoader.GetLoadedSubsystem<XRDisplaySubsystem>();
        Debug.Log(xrDisplay);
    }
    private void Update()
    {
        if (xrDisplay != null && !deviceChecked)
        {
            Debug.Log(xrDisplay.TryGetDisplayRefreshRate(out float refresh));
            if (xrDisplay.TryGetDisplayRefreshRate(out float refreshRate))
            {
                if (refreshRate == 0f)
                {
                    Debug.LogWarning("Refresh Rate is apparrently 0, defaulting to 60hz! Is the XR display connected and active?");
                    timeStep = 0.1666f;
                }
                else
                {
                    timeStep = 1f / refreshRate;
                    Debug.Log("Device Refresh Rate is " + refreshRate + "hz, Setting timestep to " + timeStep);
                }
                Time.fixedDeltaTime = timeStep;
            }
            deviceChecked = true;
        }
    }
}
