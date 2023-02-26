using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ShowHealthEnemPro : MonoBehaviour
{
    public GameObject legacy_success;
    [SerializeField] private EnemyNav ENAV;
    Slider legacy_success_text;
    // Start is called before the first frame update
    void Start()
    {
        legacy_success_text = legacy_success.GetComponent<Slider>();
        legacy_success_text.maxValue = ENAV.Health;
        legacy_success_text.value = ENAV.Health;

    }

    // Update is called once per frame
    void Update()
    {
        legacy_success_text.value = ENAV.Health;

    }
}
