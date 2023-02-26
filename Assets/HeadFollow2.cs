using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class HeadFollow2 : MonoBehaviour
{
    //[SerializeField] private GameObject Headset;
    [SerializeField] private GameObject Controller;
    [SerializeField] private GameObject target;
    //private Vector3 HMDPos;
    //private Quaternion HMDRot;
    private Vector3 ContPos;
    private Quaternion ContRot;
    // Start is called before the first frame update
    void Start()
    {
        //HMDPos = Headset.transform.position;
        //HMDRot = Headset.transform.rotation;


    }

    // Update is called once per frame
    void Update()
    {
        ContPos = Controller.transform.position;
        ContRot = Controller.transform.rotation;
        target.transform.position = ContPos;
        target.transform.eulerAngles = new Vector3(ContRot.x, 0, 0);
        //target.transform.rotation.eulerAngles = new Vector3(ContRot.x,0,0);

    }
}
