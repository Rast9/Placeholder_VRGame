using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;
public class CVelocity : MonoBehaviour
{
    public InputActionProperty velocityP;
    public Vector3 Velocity { get; private set; } = Vector3.zero;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Velocity = velocityP.action.ReadValue<Vector3>();
    }
}
