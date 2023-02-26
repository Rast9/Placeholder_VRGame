using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemTypes : MonoBehaviour
{
    public string EType;
    public string Name;
    public int Level;
    public int Health;
    public int Damage;
    // Start is called before the first frame update
    void Start()
    {
        if (EType == "Skeleton01")
        {
            Name = "Skeleton";
            Level = 1;
            Health = 30;
            Damage = 2;
        }
        else
        {
            Name = "Abortion";
            Level = 1;
            Health = 1;
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
