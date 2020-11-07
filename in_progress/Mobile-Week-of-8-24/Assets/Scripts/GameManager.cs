using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using Cinemachine;
using UnityEngine.SceneManagement;
using UnityEngine.GameFoundation.Data;
using UnityEngine.GameFoundation;
using UnityEngine.GameFoundation.UI;
using System.Linq;
using DG.Tweening;
using UnityEngine.UI;
using Random = UnityEngine.Random;
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

    public delegate void GameStartAction();
    public static event GameStartAction OnStartGame;

    public delegate void GameEndAction();
    public static event GameEndAction OnEndGame;

    public bool playing = false;


    public static int score;

    // Game speed
    [SerializeField]
    float maxGameSpeed;
    private static float _maxGameSpeed;

    [SerializeField]
    float gameSpeedIncreasePerSecond = 0;
    private static float _gameSpeedIncreasePerSecond;

    internal static float baseGameSpeed;
    internal static float gameSpeedBoost = 3.75f;

    [SerializeField]
    float maxSpawnRate = 0;
    private static float _maxSpawnRate;

    [SerializeField]
    float spawnRateIncreasePerSecond = 0;
    private static float _spawnRateIncreasePerSecond;
    internal static float baseSpawnRate;

    internal static float lastTouchTime = 0.0f;
    public static int storedScore = 0;
    public static long storedMeters = 0;


    [SerializeField]
    private GameObject playerPrefab = null;


    [SerializeField]
    private int scoreAnimThreshold;


    static GameObject _mainMenu;

    private Transform playerSpawn = null;

    GameObject backToMenuButton = null;
    public RectTransform backButtonTransform = null;
    GameObject losePanel = null;
    GameObject continuePanel = null;
    RewardedAd continueRewardedAd = null;


    private PhaseManager phaseManager;
    private CinemachineImpulseSource impulseSource;


    public ScreenFadeController screenFadeController;
    internal static float meters;
    internal static int coinsThisRun;

    private float currentWaterSpeed = 1.0f;
    private float maxWaterSpeed = 2.0f;

    private float waterOffset = 0;
    private bool usedContinue = false;

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
      
        UpdateScreenEdges();

        impulseSource = GetComponent<CinemachineImpulseSource>();
        phaseManager = GetComponent<PhaseManager>();

        screenFadeController = GetComponentInChildren<ScreenFadeController>();
       


    }



    private void Start(){
        currentWaterSpeed = WATER_BASE_SPEED;
        Shader.SetGlobalFloat("_WaterOffsetY", waterOffset);


        CheckForPreRegGift();
      
    }

    static void Confirm(GameObject popup){
        AnalyticsManager.LogUI("confirmPreRegGift", DesignEventType.Clicked);

    }
    static void Decline(GameObject popup){
        AnalyticsManager.LogUI("declinePreRegGift", DesignEventType.Clicked);

    }

    static public void CheckForPreRegGift() {
        var preRegDef = GameFoundation.catalogs.inventoryCatalog.FindItem("preregistrationGift");

        if (TransactionManager.IsIapProductOwned("preregistration_gift"))
        {
            if (PlayerPrefs.GetInt("pre-reg-notified", 0) == 0) // Hasn't been notified
            {
                PopupBuilder builder = new PopupBuilder();
                builder.title = "Thank you!";
                builder.text = "Thank you for preregistering!\n\nHere's your banana boat";
                builder.showConfirmButton = true;
                builder.showDeclineButton = false;
                builder.confirmCallback = Confirm;
                builder.declineCallback = Decline;
                builder.graphic = Resources.Load<Sprite>("Store/promotion/banana_badge");
                PopupManager.Instance.Show(builder);

              
                PlayerPrefs.SetInt("pre-reg-notified", 1);
                PlayerPrefs.Save();
            }

            if (!GameFoundationManager.IsItemOwned(GameFoundation.catalogs.inventoryCatalog.FindItem("banana"))) {
                var trans = TransactionManager.BeginTransaction(GameFoundation.catalogs.transactionCatalog.FindItem("banana-pre-reg"));
            }
        }
    }

    public int GetScore() {
        return score;
    }
    void ShowMainMenu() {
        _mainMenu.SetActive(true);

        backButtonTransform.DOScale(0.0f, 0.0f).OnComplete(() =>{
            backToMenuButton.SetActive(false);
        });

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

    public void DeclineRewardContinue(GameObject popup) {
        GameOver();
        continuePanel.GetComponent<CanvasGroup>().DOFade(0, .4f).OnComplete(() => { continuePanel.SetActive(false); });
        AnalyticsManager.LogUI("declineContinueReward", DesignEventType.Clicked);

    }

    public void RewardCompleteContinue(GameObject popup){
        ClearCloseEnemies();

        BannerAd.HideBannerAd();
        StartGame();
        usedContinue = true;
    }

    private void GameOver() {
        //Gameplay UI Meter Panel
        MeterCounter.Instance.FadeOut();

        CalculateScore();
        storedScore = score;
        storedMeters = (long)meters;

        LeaderboardManager.ReportDistance(meters);
        LeaderboardManager.ReportScore(score);

        AnalyticsManager.LogProgression(GameAnalyticsSDK.GAProgressionStatus.Complete, "Main", score);

        losePanel.SetActive(true);
        RectTransform[] rts = losePanel.GetComponentsInChildren<RectTransform>();
        for (int i = 0; i < rts.Length; i++)
        {
            if (i == 0)
            {
                Color startColor = rts[i].GetComponent<Image>().color;
                rts[i].GetComponent<Image>().DOFade(1.0f, 1)
                    .SetEase(Ease.InOutCubic)
                    .ChangeStartValue(new Color(startColor.r,startColor.g,startColor.b, 0.0f))
                    .OnComplete(()=> { ScorePanel.DoAnimation(); });
            }
            else if (i == 1 || i == 2 || i == 3)
            {
                rts[i].DOScale(Vector3.one, 1.12f).SetEase(Ease.OutBounce).ChangeStartValue(Vector3.zero);
            }
            else
            {
                rts[i].DOScale(Vector3.one, 1.24f).SetEase(Ease.OutBounce).SetDelay(.85f).ChangeStartValue(Vector3.zero);
            }

        }

        // Reset temporary upgrades
        UpgradeManager.ResetUpgrades();

    }
    public void Lose() {
        playing = false;
        OnEndGame?.Invoke();


        // Show meters and currency:
        if (Options.zenMode)
        {
            FindObjectsOfType<CurrencyHudView>().ToList().ForEach((item) =>
            {
                item.gameObject.SetActive(true);
                item.GetComponent<RectTransform>().DOScaleY(1, 1.0f).SetEase(Ease.OutBounce).ChangeStartValue(0);
            });
            backButtonTransform.DOAnchorPos(new Vector3(100, -320), .5f).SetEase(Ease.OutBounce).SetDelay(.4f);
            backButtonTransform.GetComponent<Image>().DOFade(1.0f, .6f).SetDelay(.3f);
            MeterCounter.Instance.FadeIn();
        }

        if (usedContinue)
        {
            GameOver();
        }
        else {
            // Ask to continue
            BannerAd.ShowBannerAd();
            continuePanel.SetActive(true);
            continuePanel.GetComponent<CanvasGroup>().DOFade(1, .35f).ChangeStartValue(0);
            continueRewardedAd.ShowContinuePopup(RewardCompleteContinue, DeclineRewardContinue, .1f);
        
        }

    }

    private void SpawnPlayer() {
        if (!playerSpawn)
        {
            Instantiate(playerPrefab, new Vector3( 0,-20.0f,0), Quaternion.Euler(-90.0f,0,0), null);

        }
        else
        {
            Instantiate(playerPrefab, playerSpawn.position, playerSpawn.rotation, null);
        }
    }

  
    // Called from gameover panel button
    public void ResetGame() {
        usedContinue = false;
        BannerAd.HideBannerAd();
        ResetScore();
        ClearCloseEnemies();
        StartGame();

    }


    public void ReturnToMenu() {
        UIAudioManager.PlayClickSound();
        AnalyticsManager.LogUI("returnToMenu", DesignEventType.Clicked);

        if (playing)
        {
            LeaderboardManager.ReportDistance(meters);
            LeaderboardManager.ReportScore(score);
        }
        playing = false;
        OnEndGame?.Invoke();
        LoadMenu();
        BannerAd.HideBannerAd();
    }

    public void LoadMenu() {
        LoadLevel(SceneManager.GetActiveScene().buildIndex);
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
        if (touchingScreen || Options.zenMode)
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


    public void FirstStart() {

        backToMenuButton.SetActive(true);
        backButtonTransform.DOScale(1.0f,1.0f).ChangeStartValue(Vector3.zero).SetEase(Ease.OutBounce);

        ResetScore();

        StartGame();

       
    }


    public void StartGame() {
        //ui
        if (Options.zenMode)
        {
            FindObjectsOfType<CurrencyHudView>().ToList().ForEach(item => item.GetComponent<RectTransform>().DOScaleY(0, .4f).SetEase(Ease.InBounce));
            backButtonTransform.DOAnchorPos(new Vector3(100, -100), .5f).SetEase(Ease.OutBounce).SetDelay(.4f);
            backButtonTransform.GetComponent<Image>().DOFade(.7f, .6f).SetDelay(.3f);
            MeterCounter.Instance.FadeOut();
        }
        else
        {
            MeterCounter.Instance.FadeIn();
        }

        DoubleCoinsReward.Instance.Hide();

        SpawnPlayer();
        playing = true;
        lastTouchTime = Time.time;

        if (continuePanel && continuePanel.activeSelf) {
            CanvasGroup group = continuePanel.GetComponent<CanvasGroup>();
            group.DOFade(0,.5f).OnComplete(()=>{ continuePanel.SetActive(false); });
        }

        if (losePanel&& losePanel.activeSelf) {
            RectTransform[] rts = losePanel.GetComponentsInChildren<RectTransform>();
            for (int i = 0; i < rts.Length; i++)
            {

                if (i == 0)
                {
                    rts[i].GetComponent<Image>().DOFade(0, .78f).SetEase(Ease.InOutCubic);
                }
                else if (i == 1 || i == 2 || i == 3)
                {
                    rts[i].DOScale(Vector3.zero, .43f).SetEase(Ease.InBounce);
                }
                else
                {
                    rts[i].DOScale(Vector3.zero, .63f).SetEase(Ease.InBounce).OnComplete(() => { losePanel.SetActive(false); }); ;
                }
            }
                
        }


        OnStartGame?.Invoke();

        AnalyticsManager.LogProgression(GameAnalyticsSDK.GAProgressionStatus.Start, "Main", 0);
    }

    private void ClearCloseEnemies() {
        GameObject[] gos = GameObject.FindGameObjectsWithTag("Enemy");
        for (int i = 0; i < gos.Length; i++){
            if (i >= gos.Length) continue;
            GameObject go = gos[i];
            if (go.transform.position.y < 40.0f)
            {
                go.transform.DOMoveZ(20,.5f);
                go.transform.DOScaleZ(0, .5f).OnComplete(() =>
                {
                    Destroy(go);
                });
            }
        }
    }

    public void NotifyEnemyDefeated() {
        phaseManager.EnemyDefeated();
    }

    private void ResetScore() {
        score = 0;
        coinsThisRun = 0;
        phaseManager.Restart();
        meters = 0;
    }

    private void CalculateScore() {
        score = Mathf.FloorToInt(meters) + Mathf.FloorToInt(coinsThisRun*UpgradeManager.CoinScoreMultiplier);
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
        _mainMenu = GameObject.FindGameObjectWithTag("MainMenu");
        losePanel = GameObject.FindGameObjectWithTag("LosePanel");
        continuePanel = GameObject.FindGameObjectWithTag("ContinuePanel");
        backToMenuButton = GameObject.FindGameObjectWithTag("BackToMenuButton");
        continueRewardedAd = GameObject.FindGameObjectWithTag("RewardedAd").GetComponent<RewardedAd>();
        playerSpawn = GameObject.FindGameObjectWithTag("PlayerSpawn").transform;
        backButtonTransform = backToMenuButton.GetComponent<RectTransform>();

        ShowMainMenu();
        losePanel.SetActive(false);
        continuePanel.SetActive(false);

    }


    public void LoadLevel(int level)
    {
        ScreenFadeController.Instance.FadeOutTween().OnComplete(() => SceneManager.LoadScene(level));
    }
    public void LoadLevel(string level)
    {
        SceneUtility.GetBuildIndexByScenePath(level);
        int level_index = SceneUtility.GetBuildIndexByScenePath(level);
        if (level_index >= 0) {
            ScreenFadeController.Instance.FadeOutTween().OnComplete(()=> SceneManager.LoadScene(level));

            //ScreenFadeController.Instance.FadeInTween();
            
        }
    }
    IEnumerator LoadLevelEnum(int level)
    {
        yield return screenFadeController.FadeOut();
        SceneManager.LoadScene(level);
        yield return screenFadeController.FadeIn();
    }

}
