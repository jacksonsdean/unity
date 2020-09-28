using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using Cinemachine;
using UnityEngine.SceneManagement;
using UnityEngine.GameFoundation.Data;
using UnityEngine.GameFoundation;
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

    private static readonly float METER_MODIFIER = .15f;
    private static readonly float WATER_BASE_SPEED = .5f;

 

    public static float gameSpeed = 1;
    public static float spawnRate = 1;

    public static ScreenEdges screenEdges;



    public delegate void UpdateGameSpeedAction();
    public static event UpdateGameSpeedAction OnUpdateGameSpeed;

   

    public bool playing = false;


    public int score;

    // Game speed
    [SerializeField]
    float maxGameSpeed;
    private static float _maxGameSpeed;

    [SerializeField]
    float gameSpeedIncreasePerSecond;
    private static float _gameSpeedIncreasePerSecond;

    internal static float baseGameSpeed;
    internal static float gameSpeedBoost = 3.75f;

    [SerializeField]
    float maxSpawnRate;
    private static float _maxSpawnRate;

    [SerializeField]
    float spawnRateIncreasePerSecond;
    private static float _spawnRateIncreasePerSecond;
    internal static float baseSpawnRate;

    internal static float lastTouchTime = 0.0f;



    [SerializeField]
    private GameObject mainMenu;
    static GameObject _mainMenu;

    [SerializeField]
    private GameObject playerPrefab;

    [SerializeField]
    private Transform playerSpawn;

    [SerializeField]
    private int scoreAnimThreshold;

    [SerializeField]
    GameObject backToMenuButton;
    [SerializeField]
    GameObject losePanel;

    private PhaseManager phaseManager;
    private CinemachineImpulseSource impulseSource;


    public ScreenFadeController screenFadeController;
    internal static float meters;

    private float currentWaterSpeed = 1.0f;
    private float maxWaterSpeed = 2.0f;

    private float waterOffset = 0;

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
        //SpawnPlayer();
        screenFadeController = GetComponentInChildren<ScreenFadeController>();
    }

   

    private void Start(){
        currentWaterSpeed = WATER_BASE_SPEED;
        //Shader.SetGlobalFloat("_WaterScrollSpeed", currentWaterSpeed);
        Shader.SetGlobalFloat("_WaterOffsetY", waterOffset);
        CheckForPreRegGift();
      
    }

    void Confirm()
    {
        Debug.Log("Popup confirmed");
    }
    void Decline()
    {
        Debug.Log("Popup declined");
    }
    private void CheckForPreRegGift() {

        
        //TODO REMOVE!
        //TransactionManager.BeginTransaction(GameFoundation.catalogs.transactionCatalog.FindItem("preregistrationGiftT"));

        var preRegDef = GameFoundation.catalogs.inventoryCatalog.FindItem("preregistrationGift");

        if (TransactionManager.IsIapProductOwned("preregistration_gift"))
            //if (GameFoundationManager.IsItemOwned(preRegDef))
        {
            if (PlayerPrefs.GetInt("pre-reg-notified", 0) == 0) // Hasn't been notified
            {
                PopupBuilder builder = new PopupBuilder();
                builder.title = "Test Title";
                builder.text = "Lorem ipsum";
                builder.showConfirmButton = true;
                builder.showDeclineButton = true;
                builder.confirmCallback = Confirm;
                builder.declineCallback = Decline;
                builder.graphic = Resources.Load<Sprite>("Store/promotion/banana_badge");
                PopupManager.Instance.Show(builder);
            }
        }
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
        float waterNormalizedSpeed = GetNormalizedSpeed()/1.5f;
        float waterScrollSpeed = WATER_BASE_SPEED + waterNormalizedSpeed;
        
        waterNormalizedSpeed = Mathf.Clamp(waterNormalizedSpeed, 0,1.0f);

        float waterDelta = waterScrollSpeed - currentWaterSpeed;
        waterDelta *= Time.deltaTime*8.0f;
        currentWaterSpeed += waterDelta;
        currentWaterSpeed = Mathf.Clamp(currentWaterSpeed, 0, maxWaterSpeed);
        //Shader.SetGlobalFloat("_WaterScrollSpeed", currentWaterSpeed);

        waterOffset += currentWaterSpeed * Time.deltaTime;

        Shader.SetGlobalFloat("_WaterOffsetY",waterOffset);




        if (!playing)
            return;
        meters += (Time.deltaTime * gameSpeed) * METER_MODIFIER;

        if (_gameSpeedIncreasePerSecond != gameSpeedIncreasePerSecond) {
            _gameSpeedIncreasePerSecond = gameSpeedIncreasePerSecond;
        }

        if (_maxGameSpeed != maxGameSpeed)
        {
            _maxGameSpeed = maxGameSpeed;
        }

        if (_spawnRateIncreasePerSecond != spawnRateIncreasePerSecond)
        {
            _spawnRateIncreasePerSecond = spawnRateIncreasePerSecond;
        }

        if (_maxSpawnRate != maxSpawnRate)
        {
            _maxSpawnRate = maxSpawnRate;
        }

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
        playing = false;
        LoadLevel(SceneManager.GetActiveScene().buildIndex);
        //mainMenu.SetActive(true);
        ////mainMenu.GetComponent<Animator>().SetTrigger("show");

    }
    internal static float GetMaxSpeed()
    {
        return _maxGameSpeed;
    }
    internal static void UpdateBaseGameSpeed(float enemySpeed, float spawnRate){
        baseGameSpeed = enemySpeed;
        baseSpawnRate = spawnRate;
        OnUpdateGameSpeed?.Invoke();
    }

    internal static float GetNormalizedSpeed()
    {
        if (!Instance.playing) return 0;
        return
            (GameManager.gameSpeed - GameManager.baseGameSpeed) /
            (GameManager.GetMaxSpeed() - GameManager.baseGameSpeed);
    }
    internal static void UpdateGameSpeed(bool touchingScreen)
    {
        if (touchingScreen)
        {
            lastTouchTime = Time.time;

            float deltaSpeed = baseGameSpeed - gameSpeed;
            deltaSpeed *= Time.deltaTime * 2.0f;

            float deltaRate = baseSpawnRate - spawnRate;
            deltaRate *= Time.deltaTime * 2.0f;

            gameSpeed += deltaSpeed;
            spawnRate += deltaRate;
        }
        else {
            gameSpeed = gameSpeedBoost + baseGameSpeed + (Time.time - lastTouchTime) * _gameSpeedIncreasePerSecond;
            if (gameSpeed > _maxGameSpeed) {
                gameSpeed = _maxGameSpeed;
            }

            spawnRate = baseSpawnRate + (Time.time - lastTouchTime) * _spawnRateIncreasePerSecond;
            if (spawnRate > _maxSpawnRate)
            {
                spawnRate = _maxSpawnRate;
            }
        }

        GameManager.OnUpdateGameSpeed?.Invoke();
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
        lastTouchTime = Time.time;
        meters = 0;
        MeterCounter.Instance.FadeIn();
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
        
    }

  
    public void NotifyEnemyDefeated() {
        phaseManager.EnemyDefeated();
    }

    private void ResetScore() {
        score = 0;
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
