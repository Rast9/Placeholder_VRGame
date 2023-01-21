using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.Interaction.Toolkit;
public class SmoothLocomotion : MonoBehaviour
{
    public XRNode inputSource;
    public XRNode inputSourceR;
    private Vector2 InputAxis;
    private Vector2 InputAxisR;
    private CharacterController character;
    private XRRig rig;
    public LayerMask groundLayer;
    public float HeightOffset = 0.2f;
    public float gravity = -9.81f;
    private float fallingSpeed;
    bool isJumping;

    // Start is called before the first frame update
    void Start()
    {
        character = GetComponent<CharacterController>();
        rig = GetComponent<XRRig>();
    }

    // Update is called once per frame
    void Update()
    {
        InputDevice device = InputDevices.GetDeviceAtXRNode(inputSource);
        device.TryGetFeatureValue(CommonUsages.primary2DAxis, out InputAxis);
        InputDevice deviceR = InputDevices.GetDeviceAtXRNode(inputSourceR);
        deviceR.TryGetFeatureValue(CommonUsages.primary2DAxis, out InputAxisR);
    }
    private void FixedUpdate()
    {
        CapsuleFollowHeadset();
        
        Quaternion headYaw = Quaternion.Euler(0, rig.cameraGameObject.transform.eulerAngles.y, 0);
        Vector3 direction = headYaw * new Vector3(InputAxis.x, 0, InputAxis.y);
        character.Move(direction* Time.fixedDeltaTime*3);
        bool isGrounded = CheckIfGrounded();
        isJumping = CheckifJumped();
        if (isJumping&&isGrounded)
        {
            fallingSpeed = 5;
            isGrounded = false;
        }
        if (isGrounded)
            fallingSpeed = 0;
        else
            fallingSpeed += gravity *Time.fixedDeltaTime;
        character.Move(Vector3.up * fallingSpeed * Time.fixedDeltaTime);
    }
    void CapsuleFollowHeadset()
    {
        character.height = rig.cameraInRigSpaceHeight+HeightOffset;
        Vector3 capsuleCenter = transform.InverseTransformPoint(rig.cameraGameObject.transform.position);
        character.center = new Vector3(capsuleCenter.x, character.height/2+character.skinWidth, capsuleCenter.z);
    }
    bool CheckIfGrounded()
    {
        Vector3 rayStart = transform.TransformPoint(character.center);
        float rayLength = character.center.y + 0.01f;
        bool hasHit = Physics.SphereCast(rayStart, character.radius, Vector3.down, out RaycastHit hitInfo, rayLength, groundLayer);
        return hasHit;
    }
    bool CheckifJumped()
    {
        if ((InputAxisR.y > 0.5) && !(isJumping))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
