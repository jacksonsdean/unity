using DG.Tweening;
using EasyMobile;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;

public class ScorePanel : MonoBehaviour
{
    public static ScorePanel Instance;

    [SerializeField]
    TextMeshProUGUI coinText = null;
    [SerializeField]
    TextMeshProUGUI meterText = null;
    [SerializeField]
    TextMeshProUGUI scoreText = null;
    [SerializeField]
    TextMeshProUGUI coinScoreMultiplierText = null;

    [SerializeField]
    RectTransform plusRT = null;
    [SerializeField]
    RectTransform equalsRT = null;
    [SerializeField]
    RectTransform starRT = null;
    [SerializeField]
    RectTransform titlePanel = null;

    [SerializeField]
    AudioClip coinClip = null;
    [SerializeField]
    AudioClip metersClip = null;
    [SerializeField]
    AudioClip scoreClip = null;
    [SerializeField]
    AudioClip starClip = null;
    [SerializeField]
    RectTransform leaderboardRT=null;

    private bool showInterstitial = false;
    const float INTERSTITIAL_CHANCE = .6f;


    private void Awake()
    {
        if (Instance)
            Destroy(this.gameObject);
        else
        {
            Instance = this;
        }

        if (UnityEngine.Random.Range(0, 1.0f) < INTERSTITIAL_CHANCE)
        {
            showInterstitial = true;
            Advertising.LoadInterstitialAd();
            Advertising.InterstitialAdCompleted += InterstitialComplete;

        }
    }

    public static void DoAnimation() {
        Instance.DoAnimationInternal();
    }

    public void DoAnimationInternal ()
    {
      
        scoreText.text  = "0";
        coinText.text   = "0";
        meterText.text  = "0";
        coinScoreMultiplierText.text = "x" + UpgradeManager.CoinScoreMultiplier.ToString();
        StartCoroutine("DoAnimationEnum");
    }


    IEnumerator DoAnimationEnum()
    {


        yield return new WaitForEndOfFrame();

        if(GameManager.coinsThisRun>0)
            DoubleCoinsReward.Instance.Show();

        //Title Panel
        titlePanel.DOKill();
        titlePanel.DOAnchorPosX(356.0f, 0);
        titlePanel.DOScale(0.0f, 0);
        leaderboardRT.DOKill();

        leaderboardRT.DOAnchorPosX(55.0f , 0);
        leaderboardRT.DOScale(0.0f, 0);


        titlePanel.DOAnchorPosX(217.0f, 1.0f).SetEase(Ease.OutBounce).SetDelay(2.0f);
        titlePanel.DOScale(1.0f,.5f).SetDelay(1.7f);

        leaderboardRT.DOAnchorPosX(-152.0f, 1.0f).SetEase(Ease.OutBounce).SetDelay(2.3f);
        leaderboardRT.DOScale(1.0f, .5f).SetDelay(2.0f);

        const float rotTime = .45f;

        const float startDelay = 1.2f;
        //Punch in
        plusRT.DOPunchRotation(new Vector3(0, 0, -25.0f), rotTime).SetEase(Ease.OutBounce).SetDelay(startDelay-rotTime);
        starRT.DOPunchRotation(new Vector3(0, 0, -15.0f), rotTime+.1f).SetEase(Ease.OutBounce).SetDelay(startDelay-rotTime+.1f);
        scoreText.GetComponent<RectTransform>().DOPunchRotation(new Vector3(0, 0, 15.0f), rotTime-.1f).SetEase(Ease.OutBounce).SetDelay(startDelay-rotTime+.1f);
        coinText.GetComponent<RectTransform>().DOPunchRotation(new Vector3(0,0,10.0f), rotTime-.1f).SetEase(Ease.OutBounce).SetDelay(startDelay-rotTime+.1f);
        meterText.GetComponent<RectTransform>().DOPunchRotation(new Vector3(0,0,-10.0f), rotTime-.15f).SetEase(Ease.OutBounce).SetDelay(startDelay-rotTime-.15f);

        //Delay
        yield return new WaitForSeconds(startDelay);


        //Coins
        const float coinsTime = .85f;
        coinText.GetComponent<CurrencyText>().UpdateQuantity(0, GameManager.coinsThisRun, coinsTime, true, "","", coinClip,2);
        yield return new WaitForSeconds(coinsTime);

        //Plus
        const float plusTime =.35f;
        plusRT.DOScale(1.3f, plusTime).SetEase(Ease.OutElastic);
        plusRT.DOScale(1.0f, plusTime).SetDelay(plusTime+.1f);
        yield return new WaitForSeconds(2.1f*plusTime);

        //Meters
        const float metersTime = .85f;
        meterText.GetComponent<CurrencyText>().UpdateQuantity(0, (long)GameManager.meters, metersTime, true, "","m", metersClip);
        yield return new WaitForSeconds(metersTime);

        //Equals
        const float equalsTime = .2f;
        equalsRT.DOScale(1.3f, equalsTime).SetEase(Ease.OutElastic);
        equalsRT.DOScale(1.0f, equalsTime).SetDelay(equalsTime+.1f);
        yield return new WaitForSeconds(2.1f*equalsTime);

        //Score
        const float scoreUpdateTime = 1.1f;
        const float scoreEndTime= 1.0f;
        const float starTime= .85f;
        scoreText.GetComponent<CurrencyText>().UpdateQuantity(0, GameManager.score, 1.1f, true, "","",scoreClip, 3);
        yield return new WaitForSeconds(scoreUpdateTime);
        scoreText.GetComponent<RectTransform>().DOScale(1.30f, scoreEndTime/2.0f).SetEase(Ease.OutBounce);
        scoreText.GetComponent<RectTransform>().DOScale(1.0f, scoreEndTime/2.0f).SetDelay(scoreEndTime/2.0f).SetEase(Ease.OutElastic);
        yield return new WaitForSeconds(scoreEndTime/2.0f);
        starRT.DOScale(1.30f, starTime / 2.0f).SetEase(Ease.OutElastic);
        starRT.DOScale(1.0f, starTime / 2.0f).SetDelay(starTime / 2.0f).SetEase(Ease.OutElastic);
        yield return new WaitForSeconds(starTime/2.1f);
        coinText.GetComponent<AudioSource>().PlayOneShot(starClip);

        // Highlight back button
        GameManager.Instance.backButtonTransform.DOScale(1.14f, .85f).SetDelay(starTime/1.9f).SetEase(Ease.OutBounce);
        GameManager.Instance.backButtonTransform.DOScale(1.0f, .85f).SetDelay(starTime/1.9f + .85f);
    }

    private void ReturnAfterTime() {
        CancelInvoke("ReturnAfterTime");
        if (Advertising.IsInterstitialAdReady())
        {
            Time.timeScale = 0.0f;
            Advertising.ShowInterstitialAd();
        }
        else
        {
            GameManager.Instance.LoadMenu();
        }
    }

    private void InterstitialComplete(InterstitialAdNetwork net, AdPlacement place) {
        Time.timeScale = 1.0f;
        GameManager.Instance.LoadMenu();
        try
        {
            this?.CancelInvoke("ReturnAfterTime");
        }
        catch (MissingReferenceException e) {
            Debug.LogWarning(e);
        }
    }
    public void OnClickReturnToMenu() {
        AnalyticsManager.LogUI("returnToMenuFromGameOver", DesignEventType.Clicked);
        BannerAd.HideBannerAd();
        if (showInterstitial)
        {
            if (Advertising.IsInterstitialAdReady())
            {
                Time.timeScale = 0.0f;
                Advertising.ShowInterstitialAd();
                this?.CancelInvoke("ReturnAfterTime");
            }
            else {
                ScreenFadeController.Instance.FadeOutTween();
                CancelInvoke("ReturnAfterTime");
                this?.CancelInvoke("ReturnAfterTime");
            }
        }
        else
        {
            this?.CancelInvoke("ReturnAfterTime");
            GameManager.Instance.LoadMenu();
        }
    }
}
