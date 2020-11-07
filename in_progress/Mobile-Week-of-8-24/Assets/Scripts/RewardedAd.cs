using DG.Tweening;
using EasyMobile;
using System.CodeDom;
using UnityEngine;
using UnityEngine.GameFoundation;
using UnityEngine.UI;

public class RewardedAd : MonoBehaviour
{
    public static RewardedAd Instance;

    public static bool showingAd = false;
    [SerializeField]
    string title = "";
    [SerializeField]
    string text = "";
    [SerializeField]
    Sprite graphic = null;

    [SerializeField]
    int coinRewardAmount = 0;
    [SerializeField]
    int gemRewardAmount = 0;

    [SerializeField]
    Color graphicTint = Color.white;

    PopupCallback acceptRewardCallback;
    PopupCallback declineRewardCallback;

   static AdPlacement continueAd = AdPlacement.PlacementWithName("Continue");

    static AdPlacement beforeLevelCoinsAd = AdPlacement.PlacementWithName("Before Level Coins");
    static AdPlacement rewardedCoinsAd = AdPlacement.PlacementWithName("Rewarded Coins");
    static AdPlacement rewardedGemsAd = AdPlacement.PlacementWithName("Rewarded Gems");
    
    static Button coinsBeforeLevelButton = null;
    
    public static int GetRewardedCoinsAmount() {
        return Instance.coinRewardAmount;
    } 
    public static int GetRewardedGemsAmount() {
        return Instance.gemRewardAmount;
    }

    private void Awake()
    {
        if (Instance)
            Destroy(this.gameObject);
        else
            Instance = this;

        DontDestroyOnLoad(this.gameObject);

        try
        {
            Advertising.LoadRewardedAd(continueAd);
            Advertising.LoadRewardedAd(beforeLevelCoinsAd);
            Advertising.LoadRewardedAd(rewardedCoinsAd);
            Advertising.LoadRewardedAd(rewardedGemsAd);
        }
        catch (System.Exception e) {
            Debug.LogError(e);
        }
    }


    void OnEnable()
    {
        Advertising.RewardedAdCompleted += RewardedAdCompletedHandler;
        Advertising.RewardedAdSkipped += RewardedAdSkippedHandler;
    }

    // Unsubscribe events
    void OnDisable()
    {
        Advertising.RewardedAdCompleted -= RewardedAdCompletedHandler;
        Advertising.RewardedAdSkipped -= RewardedAdSkippedHandler;
    }

    // Event handler called when a rewarded ad has completed
    void RewardedAdCompletedHandler(RewardedAdNetwork network, AdPlacement location)
    {
        Debug.Log("Rewarded ad has completed. The user should be rewarded now.");

        if (location.Equals(continueAd))
        {
            acceptRewardCallback?.Invoke();
            showingAd = false;
        }
        else if (location.Equals(rewardedCoinsAd))
        {
            RewardWithCoins();
        }
        else if (location.Equals(rewardedGemsAd)){
            RewardWithGems();
        }
        else if (location.Equals(beforeLevelCoinsAd))
        {
            RewardWithBeforeLevelCoins();
        }
        else { }
       
    }

    // Event handler called when a rewarded ad has been skipped
    void RewardedAdSkippedHandler(RewardedAdNetwork network, AdPlacement location)
    {
        Debug.Log("Rewarded ad was skipped. The user should NOT be rewarded.");
        showingAd = false;
        PopupBuilder b = new PopupBuilder();

        b.title = "Ad Skipped";
        b.text = "You must watch the entire ad to receive the reward.";
        b.Show();
    }


    public void OnConfirmContinue(GameObject popup) {
        showingAd = false;
        AnalyticsManager.LogUI("acceptContinueReward", DesignEventType.Clicked);

        // Show it if it's ready
        if (Advertising.IsRewardedAdReady(continueAd))
        {
            Advertising.ShowRewardedAd(continueAd); ;
        }
    }

    public void OnDeclineContinue(GameObject popup) {
        declineRewardCallback?.Invoke(popup);
        showingAd = false;
    }


    public void ShowContinuePopup(PopupCallback acceptReward, PopupCallback declineRewardContinue, float delay = 0.0f) {
        if (showingAd) return;
        acceptRewardCallback = acceptReward;
        declineRewardCallback = declineRewardContinue;
        
        PopupBuilder b = new PopupBuilder();
        b.title = title;
        b.text = text;
        b.showConfirmButton = true;
        b.showDeclineButton = true;

        b.confirmCallback = OnConfirmContinue;
        b.declineCallback = OnDeclineContinue;
        b.delay = delay;
        b.graphic = graphic;
        b.graphicTint = graphicTint;
        b.blockBackgroundRaycasts = false;
        b.Show();

    }


    public static void ShowCoinsBeforeLevelAd(UnityEngine.UI.Button button) {
        coinsBeforeLevelButton = button;
        // Show it if it's ready

        if (Advertising.IsRewardedAdReady(beforeLevelCoinsAd))
        {
            Advertising.ShowRewardedAd(beforeLevelCoinsAd);
        }
    }
    public static void ShowRewardedCoinsAd() {
        // Show it if it's ready
        if (Advertising.IsRewardedAdReady(rewardedCoinsAd))
        {
            Advertising.ShowRewardedAd(rewardedCoinsAd); ;
        }
    }    
    
    public static void ShowRewardedGemsAd() {
        // Show it if it's ready
        if (Advertising.IsRewardedAdReady(rewardedGemsAd))
        {
            Advertising.ShowRewardedAd(rewardedGemsAd); ;
        }
    }

    private static void RewardWithCoins() {
        Currency currency = GameFoundation.catalogs.currencyCatalog.FindItem("coins");
        int amt = 0;
        if (GameManager.coinsThisRun > 0)
            amt = GameManager.coinsThisRun;
        else
            amt = GetRewardedCoinsAmount();

        WalletManager.AddBalance(currency, amt);
    }

    private static void RewardWithGems()
    {
        Currency currency = GameFoundation.catalogs.currencyCatalog.FindItem("gems");
        WalletManager.AddBalance(currency, GetRewardedGemsAmount());
    }

    private static void RewardWithBeforeLevelCoins() {
        float time = 5.0f * 60.0f;
        UpgradeManager.BeginTemporary(
            UpgradeManager.GetCoinsPerPickupMultiplier,
            UpgradeManager.SetCoinsPerPickupMultiplier,
            1.0f,        // Add 1 to multiplier
            time);

        // Renable button 
        float t = 1.0f;
        DOTween.To(() => t, (float x) => { t = x; }, 0.0f, time).OnComplete(() => coinsBeforeLevelButton.enabled = true);
    }

}
