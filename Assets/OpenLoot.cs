using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem;
//using UnityEngine.SceneManagement;

public class OpenLoot : MonoBehaviour
{
    [SerializeField] private GameObject ContPos;
    [SerializeField] private GameObject Canvaz;
    [SerializeField] private Text txt;
    [SerializeField] private Collider Hans;
    public InputActionProperty ButtonPress;
    private bool HoverDis = false;
    public string ShopVar;

    // Start is called before the first frame update
    void Start()
    {
        ButtonPress.action.started += toggle;
        Canvaz.SetActive(false);
        

    }

    // Update is called once per frame
    void Update()
    {

    }
    void toggle(InputAction.CallbackContext context)
    {
        if (HoverDis == true)
        {

        }
    }
    private void OnDestroy()
    {
        ButtonPress.action.started -= toggle;

    }
    void OnTriggerEnter(Collider Hans)
    {
        HoverDis = true;
        Canvaz.SetActive(true);
        txt.text = "Loot(Grip)";

    }
    void OnTriggerExit(Collider Hans)
    {
        Canvaz.SetActive(false);
        HoverDis = false;

    }
}

