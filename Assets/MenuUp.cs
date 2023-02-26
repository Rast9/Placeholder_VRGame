using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class MenuUp : MonoBehaviour
{
    public InputActionProperty ButtonPress;
    public InputActionProperty ButtonRes;
    //public bool MBPressed;
    [SerializeField] private GameObject MenuOb;
    [SerializeField] private GameObject GControllerL;
    [SerializeField] private GameObject GControllerR;
    [SerializeField] private GameObject MenuControllerL;
    [SerializeField] private GameObject MenuControllerR;
    [SerializeField] private HeadFollow Fol;
    //private bool toggle = false;
    // Start is called before the first frame update
    void Start()
    {
        ButtonPress.action.started += toggle;
        ButtonRes.action.started += togg;
        MenuOb.SetActive(false);
        MenuControllerL.SetActive(false);
        MenuControllerR.SetActive(false);

    }

    // Update is called once per frame
    void Update()
    {
    }
    void toggle(InputAction.CallbackContext context)
    {
        bool isactive = !MenuOb.activeSelf;
        MenuOb.SetActive(isactive);
        MenuControllerL.SetActive(isactive);
        MenuControllerR.SetActive(isactive);
        GControllerL.SetActive(!isactive);
        GControllerR.SetActive(!isactive);

    }
    void togg(InputAction.CallbackContext context)
    {
        Fol.OnEQ();

    }
    private void OnDestroy()
    {
        ButtonPress.action.started -= toggle;
        ButtonRes.action.started -= togg;

    }
}
