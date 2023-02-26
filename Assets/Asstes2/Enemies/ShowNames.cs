using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShowNames : MonoBehaviour
{
    public GameObject legacy_success;
    [SerializeField] private EnemTypes EnType;
    Text legacy_success_text;
    void Start()
    {
        EnType = GetComponent<EnemTypes>();
        legacy_success_text = legacy_success.GetComponent<Text>();
    }
    void Update()
    {
        legacy_success_text.text = EnType.Name;
        // Start is called before the first frame update
    }
}

