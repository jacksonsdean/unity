using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
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

    [SerializeField]
    Transform fireFromRight;
    [SerializeField]
    Transform fireFromLeft;

    [SerializeField]
    GameObject projectilePrefeb;

    [SerializeField]
    private float touchSensitivity;

    Animator animator;

    float invFireRate;

    float lastFire;
    bool lastFireWasRight = false;
    public bool dead = false;


    float smoothInputHorizontal = 0;
    Quaternion rPreTurn;
    Quaternion originalRot;
    Vector3 posPreTouch;

    float maxRot = 65.0f;

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

       
    }
    void Start(){
        invFireRate = 1 / fireRate;
        lastFire = -invFireRate;
        //rPreTurn = Quaternion.Euler(transform.localRotation.eulerAngles.x, 0, 0);
        rPreTurn = transform.rotation;
        originalRot = transform.rotation;
        posPreTouch = transform.position;
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
        if (Application.isMobilePlatform){
            HandleTouchInput();
        }
        else
        {
            HandleKeyboardInput();
        }
    }



   void HandleKeyboardInput() {

        float moveX = Input.GetAxis("Horizontal");
        this.transform.Translate(speed * moveX * Time.deltaTime, 0, 0, Space.World);

        if (transform.position.x > GameManager.screenEdges.maxX)
            transform.position = new Vector3(GameManager.screenEdges.maxX, transform.position.y, transform.position.z);
        if (transform.position.x < GameManager.screenEdges.minX)
            transform.position = new Vector3(GameManager.screenEdges.minX, transform.position.y, transform.position.z);

        animator.SetFloat("VelX", moveX);

        Quaternion rPreTurn = transform.localRotation;
        //transform.Rotate(0, 0, moveX * speed * Time.deltaTime *2.0f, Space.World);
        Quaternion desiredRot = Quaternion.Euler(transform.localRotation.eulerAngles.x, moveX * 80.0f, 0);


        if (Mathf.Abs(moveX) < 0.01f)
        {
            transform.localRotation = Quaternion.Lerp(rPreTurn, desiredRot, Time.deltaTime);
        }
        else
            transform.localRotation = Quaternion.Lerp(rPreTurn, desiredRot, Time.deltaTime * speed);

        //if (transform.rotation.eulerAngles.y > 75.0f) {
        //transform.rotation = Quaternion.Euler(new Vector3(transform.rotation.eulerAngles.x, 75.0f, transform.rotation.eulerAngles.z));

        //}
    }


    private void HandleTouchInput()
    {
        rPreTurn = transform.localRotation;
        Quaternion desiredRot  = Quaternion.Euler(transform.localRotation.eulerAngles.x, 0, 0);
        float rotSpeedScalar = 2.0f;

        float moveX = 0.0f;
        if (Input.touchCount >= 1)
        {
            Touch touch = Input.GetTouch(0);
            Vector3 target = GetTargetPos(touch);
            if (touch.phase == TouchPhase.Began)
            {
                rPreTurn = transform.localRotation;
                posPreTouch = transform.position;
            }
            else if (touch.phase == TouchPhase.Ended)
            {
                rPreTurn = transform.localRotation;
                posPreTouch = transform.position;

            }
            else if (touch.phase == TouchPhase.Moved)
            {
                
                moveX = Mathf.Clamp(10.0f * (target.x - transform.position.x), -1, 1);
                transform.position = Vector3.MoveTowards(transform.position, target, Time.deltaTime * speed * touchSensitivity);
                rotSpeedScalar *= (1.0f+Mathf.Abs(target.x - transform.position.x));

                desiredRot = Quaternion.Euler(transform.localRotation.eulerAngles.x, moveX * maxRot, 0);

            }
            else if (touch.phase == TouchPhase.Stationary) {
                moveX = Mathf.Clamp(10.0f * (target.x - transform.position.x), -1, 1);
                transform.position = Vector3.MoveTowards(transform.position, target, Time.deltaTime * speed * touchSensitivity);
                //rotSpeedScalar = 10.0f * Mathf.Abs(target.x - transform.position.x);
            }

            if (Mathf.Abs(target.x - transform.position.x)<0.01f) {
                desiredRot  = Quaternion.Euler(transform.localRotation.eulerAngles.x, 0, 0);

            }
        }
            

            transform.localRotation = Quaternion.RotateTowards(rPreTurn, desiredRot, rotSpeedScalar*Time.deltaTime * speed * touchSensitivity);
   


        /*
        Quaternion desiredRot = Quaternion.Euler(transform.localRotation.eulerAngles.x, moveX * 80.0f, 0);


        if (Mathf.Abs(moveX) < 0.01f)
        {
            transform.localRotation = Quaternion.Lerp(rPreTurn, desiredRot, Time.deltaTime/2.0f);
        }
        else
            transform.localRotation = Quaternion.Lerp(rPreTurn, desiredRot, Time.deltaTime * speed * .1f);
            */

    }

    private Vector3 GetTargetPos(Touch touch) {
        Transform cameraTransform = Camera.main.transform;
        Vector3 heading = transform.position - cameraTransform.position;

        Vector3 touchPosition = touch.position;
        touchPosition.z = Vector3.Dot(heading, cameraTransform.forward);

        Vector3 target = transform.position;
        target.x = Camera.main.ScreenToWorldPoint(touchPosition).x;
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
