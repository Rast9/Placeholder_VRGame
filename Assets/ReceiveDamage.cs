using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class ReceiveDamage : MonoBehaviour
{
    [SerializeField] private EnemyNav ENav;
    //[SerializeField] private Rigidbody PLeft;
    //[SerializeField] private Rigidbody PRight;
    [SerializeField] private CVelocity velo;
    [SerializeField] private AudioSource Stab;
    [SerializeField] private Grabbing_isos Grabber;
    public float CD = 0;
    bool attack;
    //[SerializeField] private WeaponType Wep;
    //public float cVel;
    // Start is called before the first frame update
    void Start()
    {
        attack = true;

    }

    // Update is called once per frame
    void Update()
    {
        if (!attack) atkcheck();
        

        //cVel = velo.Velocity.magnitude;



    }
    void OnTriggerExit(Collider Sword)
    {
        if ((velo.Velocity.magnitude > 2)&&(attack))
        {
            ENav.Health -= Grabber.grabbedI.damage;
            ENav.DoTheDead();
            Stab.Play();
            attack = false;
            CD = 0.25f;

        }
        


    }
    void atkcheck()
    {
        if (CD > 0)
        {
            CD -= Time.deltaTime;
        }
        else attack = true;

    }
}
