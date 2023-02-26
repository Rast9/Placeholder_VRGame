using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyNav : MonoBehaviour


{
    [SerializeField] private GameObject GVisualCone = null;
    [SerializeField] private AudioSource Stab;
    [SerializeField] private GameObject GPlayer = null;
    [SerializeField] private GameObject DeathInd;
    [SerializeField] private GameObject GAttackCone = null;
    
    [SerializeField] private Transform IdleTransform = null;
    [SerializeField] private Animator AnimControll;
    [SerializeField] private GameObject UIObject = null;
    [SerializeField] private EnemTypes EnType;
    private NavMeshAgent GNavMeshAgent;
    [SerializeField] private DamageReceiver damageReceiver;
    // Start is called before the first frame update
    private bool spotted = false;
    private bool attacking = false;
    private float currentCooldown = 0;
    private bool walking;
    public float Health;
    private bool animCD = false;
    private bool dead = false;
    private bool destiny = false;
    private bool checkedt = false;
    private
    void Start()
    {
        GNavMeshAgent = GetComponent<NavMeshAgent>();
        AnimControll = GetComponent<Animator>();
        //EnType = GetComponent<EnemTypes>();
        Health = EnType.Health;
    }

    // Update is called once per frame
    void Update()
    {
        if (!dead)
        {
            if ((Vector3.Distance(GVisualCone.transform.position, GPlayer.transform.position) < 5 | (spotted == true)))
            {
                GNavMeshAgent.destination = GPlayer.transform.position;
               

                
                
                    if (Vector3.Distance(GVisualCone.transform.position, GPlayer.transform.position) < 2)
                    {
                        attacking = true;
                        if (!checkedt)
                        {
                            GNavMeshAgent.Stop();
                            checkedt = true;
                        }


                    }
                    else
                    {
                        currentCooldown = 0;
                        GNavMeshAgent.Resume();
                        attacking = false;
                        checkedt = false;
                    }


                    if (spotted == false && attacking == false)
                    {
                        if (walking == false)
                        {
                            AnimControll.SetTrigger("TrWalking");
                            walking = true;
                            UIObject.SetActive(true);
                        }
                        spotted = true;


                    }
                    else if (attacking == true)
                    {
                        if (currentCooldown > 0) // If shoot not in cooldown
                        {
                            currentCooldown -= Time.deltaTime;
                        }
                        else
                        {
                            AnimControll.SetTrigger("TrAttacking");

                            currentCooldown = 2;
                        }



                    }
                    else
                    {
                        if (walking == false)
                        {
                            AnimControll.SetTrigger("TrWalking");
                            walking = true;
                        }
                    
                }
            }






        }


    }
    public void DealDamage()
    {
        Stab.Play();
        damageReceiver.Health -= EnType.Damage;
        damageReceiver.OnHit();
        walking = false;
        attacking = false;

    }
    public void DoTheDead()
    {
        if (Health <= 0)
        {
            dead = true;
            DeathInd.SetActive(true);
            if (!animCD)
            {
                AnimControll.SetTrigger("TrDying");
                animCD = true;
                UIObject.SetActive(false);



            }

        }
    }
    public void contwalk()
    {
        walking = false;
    }

}
