using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.XR.WSA;

public class Player : MonoBehaviour
{
    public static Player Instance;

    [SerializeField]
    float fireRate;

    [SerializeField]
    float speed;

    [SerializeField]
    LayerMask killLayers;

    [SerializeField]
    GameObject spawnEffect;
    [SerializeField]
    GameObject deathEffect;

    internal void SetDebug(bool v)
    {
        if (v) {
            killLayers = 0;
        }
    }

    [SerializeField]
    Transform fireFromRight;
    [SerializeField]
    Transform fireFromLeft;

    internal void SetSpeed(float v)
    {
        speed = v;
    }

    [SerializeField]
    GameObject projectilePrefeb;

    [SerializeField]
    private float touchSensitivity;

    Animator animator;

    float invFireRate;

    float lastFire;
    bool lastFireWasRight = false;
    public bool dead = false;

    [SerializeField]
    ParticleSystem ripples;
    float speedRippleRateDist;
    float speedRippleRateTime;
    float ripplesStartSpeed;
    float ripplesLifetime;
   
    float minSpeedRippleRateDist;
    float minSpeedRippleRateTime;
    float minRipplesStartSpeed;
    float minRipplesLifetime;

    [SerializeField]
    Transform followTarget;


    // Start is called before the first frame update
    void Awake(){
        if (Player.Instance != null)
        {
            Destroy(this.gameObject);
            return;
        }
        else {
            Player.Instance = this;
        }
        animator = GetComponent<Animator>();
       
        speedRippleRateDist = ripples.emission.rateOverDistance.constant;
        speedRippleRateTime = ripples.emission.rateOverTime.constant;
        ripplesStartSpeed   = ripples.main.startSpeed.constant;
        ripplesLifetime     = ripples.main.startLifetime.constant;


        minSpeedRippleRateDist  =   speedRippleRateDist    / 4.0f;
        minSpeedRippleRateTime  =   speedRippleRateTime    / 3.0f;
        minRipplesStartSpeed    =   ripplesStartSpeed      / 3.0f;
        minRipplesLifetime      =   ripplesLifetime        / 2.0f;


    }
    void Start(){
        invFireRate = 1 / fireRate;
        lastFire = -invFireRate;

        lookTar = followTarget.position;
        moveTar = followTarget.position;

    }

    // Update is called once per frame
    void Update()
    {
        if (GameManager.Instance.playing){
            HandleInput();
            if (Time.time > invFireRate + lastFire)
            {
                Fire();
            }
        }

       
    }

    

    private void HandleInput() {
        if (dead) return;
        if (!GameManager.Instance.playing) return;

        if (Application.isMobilePlatform){
            HandleTouchInput();
        }
        else
        {
            HandleKeyboardInput();
            HandleMouseInput();
        }

    }
    Vector3 lookTar ;
    Vector3 moveTar ;


    void UpdatePositionAndRotation(bool interacting, float xPos) {
        lookTar = followTarget.position;
        moveTar.x = Mathf.Lerp(moveTar.x, 1.1f * lookTar.x, Time.deltaTime * touchSensitivity);

        if (interacting)
            lookTar.x = xPos;

        followTarget.position = lookTar;
        moveTar.y = transform.position.y;
        moveTar.z = transform.position.z;


        Vector3 dirToTar = (lookTar - transform.position).normalized;

        Quaternion tarRot = Quaternion.LookRotation(dirToTar, -Vector3.forward);



        transform.rotation = Quaternion.RotateTowards(transform.rotation, tarRot, Time.deltaTime * speed * touchSensitivity);
        transform.position = Vector3.Lerp(transform.position, moveTar, Time.deltaTime * speed * touchSensitivity*100.0f);


        if (transform.position.x > GameManager.screenEdges.maxX)
            transform.position = new Vector3(GameManager.screenEdges.maxX, transform.position.y, transform.position.z);
        if (transform.position.x < GameManager.screenEdges.minX)
            transform.position = new Vector3(GameManager.screenEdges.minX, transform.position.y, transform.position.z);
    }


    private void HandleMouseInput()
    {
        if (Input.GetMouseButton(0)) { 
            DecreaseSpeed();
            MinRipples();
        }
        else
            IncreaseSpeed();

        UpdatePositionAndRotation(Input.GetMouseButton(0), ScreenToWorld(Input.mousePosition).x);
    }
    void HandleKeyboardInput() {

        float moveX = Input.GetAxis("Horizontal");
        animator.SetFloat("VelX", moveX);

        if (Math.Abs(moveX) >0.01)
        {
            lookTar.x += moveX*Time.deltaTime*speed * touchSensitivity; // touch
        }

        UpdatePositionAndRotation(Math.Abs(moveX) > 0.01, lookTar.x);
    }

    private void HandleTouchInput()
    {
        float xPos = 0;
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            xPos = ScreenToWorld(touch.position).x; // touch

            //Speed
            DecreaseSpeed();

            //if (touch.phase == TouchPhase.Began)
                MinRipples();

            GameManager.lastTouchTime = Time.time;

        }
        else {
            // not touching screen
            IncreaseSpeed();
        }

        UpdatePositionAndRotation(Input.touchCount>0, xPos);



    }

    private void IncreaseSpeed(){
        GameManager.UpdateGameSpeed(false);


        // TODO could be made more performant 
        float normalizedSpeed = GameManager.GetNormalizedSpeed();

        var emission = ripples.emission;
        var main = ripples.main;
        emission.rateOverDistance =     minSpeedRippleRateDist + normalizedSpeed * speedRippleRateDist;
        emission.rateOverTime =         minSpeedRippleRateTime + normalizedSpeed * speedRippleRateTime;
        main.startSpeed =               minRipplesStartSpeed + normalizedSpeed * ripplesStartSpeed;
        main.startLifetime =            minRipplesLifetime + normalizedSpeed * ripplesLifetime;
    }

    private void DecreaseSpeed() {
        GameManager.UpdateGameSpeed(true);
      

    }

    public void MinRipples() {
        var emission = ripples.emission;
        var main = ripples.main;
        emission.rateOverDistance = minSpeedRippleRateDist;
        emission.rateOverTime = minSpeedRippleRateTime;
        main.startSpeed = minRipplesStartSpeed;
        main.startLifetime = minRipplesLifetime;
    }
    private Vector3 ScreenToWorld(Vector2 pos) {
        Transform cameraTransform = Camera.main.transform;
        Vector3 heading = transform.position - cameraTransform.position;

        Vector3 outPos = pos;
        outPos.z = Vector3.Dot(heading, cameraTransform.forward);

        Vector3 target = transform.position;
        target.x = Camera.main.ScreenToWorldPoint(outPos).x;
        return target;

    }

    private void OnTriggerEnter(Collider other){
        if (dead || !GameManager.Instance.playing) return;
       
        if (other.CompareTag("PlayerSpawnDeath")) Destroy(this.gameObject);

        if (((1 << other.gameObject.layer) & killLayers) != 0){
            Die();
            //Destroy(other.gameObject);
        
        }
    }

    private void Fire() {
        if (dead) return;
        lastFire = Time.time;
        lastFireWasRight = !lastFireWasRight;
        Vector3 pos = Vector3.zero;
        if (lastFireWasRight) {
            pos = fireFromLeft.position;
        }
        else {
            pos = fireFromRight.position;
        }
        Instantiate(projectilePrefeb, pos, Quaternion.identity, null);
    }

    private void Die() {
        if (dead) return;
        dead = true;
        animator.SetTrigger("Die");
        Player.Instance = null;
        GameManager.Instance.Lose();
        Instantiate(deathEffect, transform.position, Quaternion.identity, null);
    }

    public void OnFinishDeathAnim() {
        Destroy(transform.parent.gameObject);

    }
}
