using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.Interaction.Toolkit;

public class Grabbing_isos : MonoBehaviour
{
    [SerializeField] private ItemList InvOrigin;
    [SerializeField] private XRBaseInteractable BP_T;
    [SerializeField] private GameObject HideShow;
    private XRDirectInteractor interactor = null;
    public bool IsGrabbing;
    public WeaponStats grabbedI;
    public GameObject buttonPrefab;
    public GameObject panelToAttachButtonsTo;
    private int i=0;
    private void Awake()
    {

        interactor = GetComponent<XRDirectInteractor>();
        IsGrabbing = false;

    }

    private void OnEnable()
    {

        interactor.onSelectEntered.AddListener(TakeInput);
        interactor.onSelectExited.AddListener(StopInput);

    }

    private void OnDisable()
    {

        interactor.onSelectEntered.RemoveListener(TakeInput);
        interactor.onSelectExited.RemoveListener(StopInput);

    }

    private void TakeInput(XRBaseInteractable interactable)
    {

        IsGrabbing = true;
        grabbedI = interactable.GetComponent<WeaponStats>();
        if (grabbedI.WasGrabbed == false)
        {
            InvOrigin.ItemL.Add(grabbedI.ID);
            InvOrigin.ItemO.Add(interactable);
            grabbedI.WasGrabbed = true;
            //Debug.Log(grabbedI.ID);
            InvOrigin.onCall();
            
        }
        else if(interactable == BP_T)
        {
            HideShow.SetActive(true);

        }
        //Debug.Log(grabbedI.rarity);

    }
    

    private void StopInput(XRBaseInteractable interactable)
    {

        IsGrabbing = false;
        if (interactable == BP_T)
        { HideShow.SetActive(true); }
        // Debug.Log("is releasing");

    }
}


