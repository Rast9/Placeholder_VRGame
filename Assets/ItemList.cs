using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.XR.Interaction.Toolkit;
public class ItemList : MonoBehaviour
{
    public List<string> ItemL;
    public List<XRBaseInteractable> ItemO;
    public Button ButtonPrefab;
    public float XStartPosition;
    public float YStartPosition;
    public float YSpaceBetweenRows;
    public Canvas Canv;
    public List<UnityEngine.UI.Button> presentedButtons;
    public XRSocketInteractor socket;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void onCall()
    {
        presentedButtons = new List<UnityEngine.UI.Button>();

        for (int i = 0; i < ItemL.Count; i++)
        {
            int i2 = i;
            presentedButtons.Add(Instantiate(ButtonPrefab, new Vector3(XStartPosition, YStartPosition - (i2 * YSpaceBetweenRows), 0), Quaternion.identity));
            presentedButtons[i2].transform.SetParent(Canv.transform, false);
            TMP_Text txt = presentedButtons[i2].GetComponentInChildren<TMP_Text>();
            txt.text = ItemL[i2];// + " (" + inventoryToDisplay.Container.ItemLines[i2].amount + ")";

            presentedButtons[i2].onClick.AddListener(()=> { OnClick(i2); });//() => {
                //_spawner.testButtonPress(ItemL[i2]);
        }
    }
    void OnClick(int Butt)
    {
        Debug.Log(Butt);
        //ItemO[Butt].gameObject.transform.position = (new Vector3(2, 2, 2));
        socket.StartManualInteraction(ItemO[Butt]);
    }
}
