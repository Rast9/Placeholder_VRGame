using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponStats : MonoBehaviour
{
    public float rarity;
    public string WType;
    public float damage;
    public int cooldown;
    public string ID;
    public bool WasGrabbed = false;
    // Start is called before the first frame update
    void Start()
    {
        if (WType == "Iron Sword")
        {
            damage = 2*rarity;
            cooldown = 1;
            ID = WType + rarity.ToString();
        }
        else if (WType == "Torch")
        {
            rarity = 1;
            damage = 2;
            cooldown = 1;
            ID = WType + rarity.ToString();
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
