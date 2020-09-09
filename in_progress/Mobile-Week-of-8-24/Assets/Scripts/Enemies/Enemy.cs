using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public float health;
    public bool moves = false;

    public static int difficulty;


    [SerializeField]
    public float speed;

    [SerializeField]
    float maxRotationalSpeed;

    [SerializeField]
    GameObject hurtEffect;

    [SerializeField]
    GameObject deathEffect;

    [SerializeField]
    AudioClip[] clips;


    Material[] theseMats;

    Rigidbody rb;

    Light light;

    private float rotX, rotY, rotZ;

    float startX, startZ;

    float maxHealth;
    float lightMaxInt;

    AudioSource audioSource;

    private void Awake()
    {
        audioSource = GetComponent<AudioSource>();
    }
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        
        rotX = UnityEngine.Random.Range(-maxRotationalSpeed,maxRotationalSpeed);
        rotY = UnityEngine.Random.Range(-maxRotationalSpeed,maxRotationalSpeed);
        rotZ = UnityEngine.Random.Range(-maxRotationalSpeed,maxRotationalSpeed);
        rb.AddRelativeTorque(new Vector3(0, rotY, rotZ));
       
        startZ = transform.position.z;
        startX = transform.position.x;

        MeshRenderer[] mr = GetComponentsInChildren<MeshRenderer>();
        Array.Resize(ref theseMats, mr.Length);

        for (int i = 0; i < mr.Length; i++){
            theseMats[i] = mr[i].material;
        }

        light = GetComponentInChildren<Light>();
        if(light)
            lightMaxInt = light.intensity;
       
        maxHealth = health;


        speed = PhaseManager.info.enemySpeed;
        if (UnityEngine.Random.Range(0, 1.0f) < PhaseManager.info.moveChance) {
            moves = true;
        }
        if (UnityEngine.Random.Range(0, 1.0f) < PhaseManager.info.moveChance)
        {
            maxRotationalSpeed = .1f;
        }


        }

        internal void hurt(float damage, Vector3 hitPoint, bool giveScore =true)
    {
       if(giveScore)GameManager.Instance.addScore((int)damage);

        health -= damage;
        Instantiate(hurtEffect, hitPoint,Quaternion.identity, null);
        if (health <= 0) Die(giveScore);

        for (int i = 0; i < theseMats.Length; i++)
        {
            Color col = new Color((health) / maxHealth, theseMats[i].color.g, theseMats[i].color.b, (health) / maxHealth);
            theseMats[i].SetColor("_EmissionColor" ,col);

        }
        //thisMat.SetColor("_Color" ,col);


    }

    protected virtual void MoveDown() {
        transform.Translate(Vector3.down * speed * Time.deltaTime, Space.World);

    }

    protected void CheckEdges() {


        if (transform.position.x > GameManager.screenEdges.maxX - GameManager.screenEdges.maxX / 7.0f)
        {
            transform.position = new Vector3(
                GameManager.screenEdges.maxX - GameManager.screenEdges.maxX / 7.0f,
                transform.position.y, startZ
                );
        }
        if (transform.position.x < GameManager.screenEdges.minX - GameManager.screenEdges.minX / 7.0f)
        {
            transform.position = new Vector3(
                GameManager.screenEdges.minX - GameManager.screenEdges.minX / 7.0f,
                transform.position.y, startZ
                );
        }

        if ((transform.position.y < GameManager.screenEdges.minY - 25.0f))
        {
            Destroy(this.gameObject);
        }
    }


    // Update is called once per frame
    protected virtual void Update(){
      

        MoveDown();
        CheckEdges();

        //transform.position = new Vector3(transform.position.x, transform.position.y, startZ);
        
        //transform.RotateAroundLocal(Vector3.forward, rotZ*Time.deltaTime);
        //transform.RotateAroundLocal(Vector3.right, rotX*Time.deltaTime);
        //transform.RotateAroundLocal(Vector3.up, rotY*Time.deltaTime);

        //if(light)
        //    light.intensity = (health / maxHealth) * lightMaxInt;


    }

    void Die(bool giveScore = true) {
        Instantiate(deathEffect, transform.position, Quaternion.identity, null);
        if (giveScore){
            GameManager.Instance.addScore((int)maxHealth);
            GameManager.Instance.NotifyEnemyDefeated();
        }

        Destroy(this.gameObject);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player")) {
            if (!other.GetComponent<Player>().dead) {
                //GameManager.Instance.addScore(1);
                //audioSource.PlayOneShot(clips[UnityEngine.Random.Range(0, clips.Length-1)]);
            }
        }
    }


}
