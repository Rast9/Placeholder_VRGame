using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class GoToScene1 : MonoBehaviour
{
    [SerializeField] private Button Butt;
    // Start is called before the first frame update
    void Start()
    {
        Butt.onClick.AddListener(() => ButtonClicked(42));

    }

    // Update is called once per frame
    void Update()
    {

    }
    void ButtonClicked(int buttonNo)
    {
        SceneManager.LoadScene("UN7", LoadSceneMode.Single);

    }
}

