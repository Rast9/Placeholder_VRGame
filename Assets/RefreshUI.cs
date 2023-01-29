using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RefreshUI : MonoBehaviour
{
    public GameObject Healthy;
    public GameObject texter;
    public GameObject legacy_success;
    Text legacy_success_text;
    void Start()
    {
        legacy_success_text = legacy_success.GetComponent<Text>();
    }
    void Update()
    {

    }
}
