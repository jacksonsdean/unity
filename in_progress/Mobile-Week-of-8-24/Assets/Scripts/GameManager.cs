﻿using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using Cinemachine;
using UnityEngine.SceneManagement;
//using Jackson;

public struct ScreenEdges{
    public float maxY;
    public float minY;
    public float maxX;
    public float minX;
}
[RequireComponent(typeof(PhaseManager))]
public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    public bool playing = false;

    public static ScreenEdges screenEdges;
    
    public int score;

    [SerializeField]
    private GameObject mainMenu;
    static GameObject _mainMenu;

    [SerializeField]
    private GameObject playerPrefab;

    [SerializeField]
    private Transform playerSpawn;

    [SerializeField]
    TextMeshProUGUI scoreText;

    [SerializeField]
    Animator scoreAnim;

    [SerializeField]
    private int scoreAnimThreshold;

    [SerializeField]
    GameObject backToMenuButton;
    [SerializeField]
    GameObject losePanel;

    private PhaseManager phaseManager;
    private CinemachineImpulseSource impulseSource;



    ScreenFadeController screenFadeController;

    // Start is called before the first frame update
    void Awake()
    {
        if (GameManager.Instance) {
            Destroy(this.gameObject);
            return;
        }
        else{
            GameManager.Instance = this;
        }
        _mainMenu = mainMenu;
      
        UpdateScreenEdges();

        ShowMainMenu();
        impulseSource = GetComponent<CinemachineImpulseSource>();
        phaseManager = GetComponent<PhaseManager>();
        scoreAnim.gameObject.SetActive(false);
        //SpawnPlayer();
        screenFadeController = GetComponentInChildren<ScreenFadeController>();

    }



    private void Start(){
      
    }


    public int GetScore() {
        return score;
    }
    void ShowMainMenu() {
        _mainMenu.SetActive(true);
        backToMenuButton.SetActive(false);

    }

    Vector2 ViewportToPlanePoint(Vector3 point) {

        Transform cameraTransform = Camera.main.transform;
        Vector3 heading = point - cameraTransform.position;

        Vector3 planePos = point;
        planePos.z = Vector3.Dot(heading, cameraTransform.forward);
        return Camera.main.ViewportToWorldPoint(planePos);

    }

    void UpdateScreenEdges() {
        GameManager.screenEdges = new ScreenEdges();

        if (Camera.main.orthographic)
        {
           
        screenEdges.maxX = Camera.main.ViewportToWorldPoint(new Vector3(1, 0, 0)).x;
        screenEdges.minX = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, 0)).x;
        screenEdges.maxY = Camera.main.ViewportToWorldPoint(new Vector3(0, 1, 0)).y;
        screenEdges.minY = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, 0)).y;

        }
        else {
            screenEdges.maxX = ViewportToPlanePoint(new Vector3(1, 0, 0)).x;
            screenEdges.minX = ViewportToPlanePoint(new Vector3(0, 0, 0)).x;
            screenEdges.maxY = ViewportToPlanePoint(new Vector3(0, 1, 0)).y + 10.0f;
            screenEdges.minY = ViewportToPlanePoint(new Vector3(0, 0, 0)).y - 10.0f;
        }

    }


    // Update is called once per frame
    void Update(){
        
    }

    public void Lose() {
        playing = false;
        losePanel.SetActive(true);
        losePanel.GetComponent<Animator>().SetTrigger("Show");

        //backToMenuButton.SetActive(false);

    }

    private void SpawnPlayer() {
        Instantiate(playerPrefab, playerSpawn.position, playerSpawn.rotation, null);
    }

    public void ResetGame() {
        losePanel.GetComponent<Animator>().SetTrigger("Hide");
        RemoveAllEnemies();
        StartGame();
    }


    public void ReturnToMenu() {
        LoadLevel(SceneManager.GetActiveScene().buildIndex);
        //playing = false;
        //mainMenu.SetActive(true);
        ////mainMenu.GetComponent<Animator>().SetTrigger("show");

    }


    public void StartGame() {
        if (!MainMenu.Ready) return;
        //MainMenu.Ready = false;

        backToMenuButton.SetActive(true);

        SpawnPlayer();

        _mainMenu.SetActive(false);
        ResetScore();
        playing = true;
        //scoreAnim.gameObject.SetActive(true);
        phaseManager.Restart();
    }

    private void RemoveAllEnemies() {
        GameObject[] gos = GameObject.FindGameObjectsWithTag("Enemy");
        for (int i = 0; i < gos.Length; i++){
            Destroy(gos[i]);
        }
    }

    public void addScore(int amt) {
        score += amt;

#if true
        float force = 1.0f;
        //if (score % 10 == 0)
        //    force *= 7.5f;

        impulseSource.GenerateImpulse(force);
#endif

        NotifyEnemyDefeated();
        
        if(amt>=scoreAnimThreshold)
            scoreAnim.SetTrigger("AddScore");
    }

  
    public void NotifyEnemyDefeated() {
        phaseManager.EnemyDefeated();
    }

    private void ResetScore() {
        score = 0;
        scoreText.text = score.ToString();

    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.magenta;

        Gizmos.DrawLine(new Vector3(screenEdges.minX, screenEdges.maxY,0), new Vector3(screenEdges.maxX, screenEdges.maxY,  0));
        Gizmos.DrawLine(new Vector3(screenEdges.minX, screenEdges.maxY,0), new Vector3(screenEdges.minX, screenEdges.minY,  0));
        Gizmos.DrawLine(new Vector3(screenEdges.minX, screenEdges.minY,0), new Vector3(screenEdges.maxX, screenEdges.minY,  0));
        Gizmos.DrawLine(new Vector3(screenEdges.maxX, screenEdges.minY,0), new Vector3(screenEdges.maxX, screenEdges.maxY,  0));
    }


    void OnEnable()
    {
        //Tell our 'OnLevelFinishedLoading' function to start listening for a scene change as soon as this script is enabled.
        SceneManager.sceneLoaded += OnLevelFinishedLoading;
    }

    void OnDisable()
    {
        //Tell our 'OnLevelFinishedLoading' function to stop listening for a scene change as soon as this script is disabled. Remember to always have an unsubscription for every delegate you subscribe to!
        SceneManager.sceneLoaded -= OnLevelFinishedLoading;
    }

    void OnLevelFinishedLoading(Scene scene, LoadSceneMode mode)
    {
        screenFadeController.FadeIn();
    }


    public void LoadLevel(int level)
    {
        StartCoroutine(LoadLevelEnum(level));
    }

    IEnumerator LoadLevelEnum(int level)
    {
        yield return screenFadeController.FadeOut();
        SceneManager.LoadScene(level);
        yield return screenFadeController.FadeIn();
    }

}
