using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[System.Serializable]
public class bodySocket
{
    public GameObject gameObject;
    [Range(0.01f, 1f)]
    public float heightR;
}

public class FollowP : MonoBehaviour
{
    [SerializeField] private GameObject Headset;
    public bodySocket[] bodySockets;
    private Vector3 HMDPos;
    private Quaternion HMDRot;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        HMDPos = Headset.transform.position;
        HMDRot = Headset.transform.rotation;
        foreach (var bodySocket in bodySockets)
        {
            UpdateBodySocketHeight(bodySocket);
        }
        UpdateSocketPos();
    }
    private void UpdateBodySocketHeight(bodySocket bodySocket)
    {
        bodySocket.gameObject.transform.position = new Vector3(bodySocket.gameObject.transform.position.x, HMDPos.y* bodySocket.heightR, bodySocket.gameObject.transform.position.z);
    }
    private void UpdateSocketPos()
    {
        transform.position = new Vector3(HMDPos.x, 0, HMDPos.z);
        transform.rotation = new Quaternion(transform.rotation.x, HMDRot.y, transform.rotation.z, HMDRot.w);
    }
}
