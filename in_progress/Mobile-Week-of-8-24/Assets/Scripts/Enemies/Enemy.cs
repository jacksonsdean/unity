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

    Light mLight;

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

        mLight = GetComponentInChildren<Light>();
        if(mLight)
            lightMaxInt = mLight.intensity;
       
        maxHealth = health;


        speed = GameManager.gameSpeed;


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
        // Add score?
        health -= damage;
        Instantiate(hurtEffect, hitPoint,Quaternion.identity, null);
        if (health <= 0) Die(giveScore);

        for (int i = 0; i < theseMats.Length; i++)
        {
            Color col = new Color((health) / maxHealth, theseMats[i].color.g, theseMats[i].color.b, (health) / maxHealth);
            theseMats[i].SetColor("_EmissionColor" ,col);

        }
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
    protected virtual void FixedUpdate(){
        MoveDown();
        CheckEdges();
    }

    void Die(bool giveScore = true) {
        Instantiate(deathEffect, transform.position, Quaternion.identity, null);
        // Add score?
        Destroy(this.gameObject);
    }

   
    private void UpdateSpeed() {
        speed = GameManager.gameSpeed;
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.magenta;
        const float width = 80;
        const float height = 30;
        const float depth = 60;

        Gizmos.DrawWireCube(transform.position, new Vector3(width, height, depth));

        Gizmos.color =new Color(0,0,0,.5f);

        Gizmos.DrawCube(transform.position + Vector3.forward*2f, new Vector3(width, height, 1));


    }

    private void OnEnable()
    {
        GameManager.OnUpdateGameSpeed += UpdateSpeed;
    }
    private void OnDisable()
    {
        GameManager.OnUpdateGameSpeed -= UpdateSpeed;

    }
}

