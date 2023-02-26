using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class grabbedreturn : MonoBehaviour
{
    public List<GameObject> kids;
    [SerializeField] private XRBaseInteractable interactable;
    public XRSocketInteractor socket;
    private bool sel=true;
    // Start is called before the first frame update
    void Start()
    {
        //interactable.onSelectEntered.AddListener(TakeInput);
        //interactable.onSelectExited.AddListener(StopInput);
        for (int i = 0; i < kids.Count; i++)
        {
            
            kids[i].SetActive(false);

        }
    }

    // Update is called once per frame
    void Update()
    {
        if (interactable.isSelected == true&&sel==true)
        {
            for (int i = 0; i < kids.Count; i++)
            {
                kids[i].SetActive(sel);

                sel = false;
            }

        }
        else if(interactable.isSelected == false&&sel == false)
        {
            socket.StartManualInteraction(interactable);
            sel = true;
            for (int i = 0; i < kids.Count; i++)
            {
                kids[i].SetActive(false);
                sel = true;
            }
        }


    }
    //void TakeInput(XRBaseInteractable interactabl)
    //{
    //    for (int i = 0; i < kids.Count; i++)
    //    {
    //        kids[i].SetActive(true);

    //    }



    //}
    //void StopInput(XRBaseInteractable interactabl)
    //{
    //    for (int i = 0; i < kids.Count; i++)
    //    {
    //        kids[i].SetActive(false);

    //    }
    //    socket.StartManualInteraction(interactable);



    //}
}
