using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeadFollow : MonoBehaviour
{
    [SerializeField] private Transform rO, fO;
    [SerializeField] private Vector3 pOff, rOff;
    // Start is called before the first frame update
    public Vector3 HBO;
    public bool set=false;
    public void OnEQ()
    {
        HBO.y = rO.position.y- fO.position.y;
        set = true;
        
    }

    // Update is called once per frame
    void Update()
    {
        if (set == true)
        {

            //HBO.y = rO.position.y-fO.position.y;
            rO.position = transform.position + HBO;
            rO.forward = Vector3.ProjectOnPlane(fO.up, Vector3.up).normalized;

            transform.position = fO.TransformPoint(pOff);
            transform.rotation = fO.rotation* Quaternion.Euler(rOff);
        }
  
    }
}
