using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class DamageReceiver : MonoBehaviour
{
    public int Health = 100;
    public GameObject Healthy;
    public GameObject texter;
    public GameObject legacy_success;
    Text legacy_success_text;
    void Start()
    {
        legacy_success_text = legacy_success.GetComponent<Text>();
        legacy_success_text.text = "Health: " + Health.ToString();
    }
    void Update()
    {
        
    }
    public void OnHit()
    {
        legacy_success_text.text = "Health: " + Health.ToString();
        if (Health <= 0)
        {
            SceneManager.LoadScene("GameOver", LoadSceneMode.Single);
            //EditorSceneManager.OpenScene("Assets/GameOver.unity");
        }

    }
}
