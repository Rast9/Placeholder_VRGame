using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyNav : MonoBehaviour

    
{
    [SerializeField] private GameObject GVisualCone = null;

    [SerializeField] private GameObject GPlayer = null;

    [SerializeField] private GameObject GAttackCone = null;

    [SerializeField] private Transform IdleTransform = null;
    [SerializeField] private Animator AnimControll;
    [SerializeField] private GameObject UIObject=null;
    private NavMeshAgent GNavMeshAgent;
    [SerializeField] private DamageReceiver damageReceiver;
    // Start is called before the first frame update
    private bool spotted=false;
    private bool attacking = false;
    private float currentCooldown = 0;
    private bool walking;
    private
    void Start()
    {
        GNavMeshAgent = GetComponent<NavMeshAgent>();
        AnimControll = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        if ((Vector3.Distance(GVisualCone.transform.position, GPlayer.transform.position) < 5 | (spotted == true)))
        {
            GNavMeshAgent.destination = GPlayer.transform.position;
            if (Vector3.Distance(GVisualCone.transform.position, GPlayer.transform.position) < 2)
            {
                attacking = true;
                GNavMeshAgent.Stop();


            }
            else
            {
                currentCooldown = 0;
                GNavMeshAgent.Resume();
                attacking = false;
            }


            if (spotted == false && attacking == false)
            {
                if (walking == false)
                {
                    AnimControll.SetTrigger("TrWalking");
                    walking = true;
                }
                spotted = true;
                UIObject.SetActive(true);

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
    public void DealDamage()
    {
        damageReceiver.Health -= 4;
        walking = false;
        attacking = false;

    }
    public void contwalk()
    {
        walking = false;
    }
}
