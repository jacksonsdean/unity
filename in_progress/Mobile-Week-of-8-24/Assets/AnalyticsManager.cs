#define AUTO_FACEBOOK

using Facebook.Unity;
using GameAnalyticsSDK;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.GameFoundation;

public enum DesignEventType {
    Clicked, Spun, Closed, Opened, Choice
}

public class AnalyticsManager : MonoBehaviour
{
    public static AnalyticsManager Instance;
    // Start is called before the first frame update
    void Awake()
    {
        if (Instance)
        {
            Destroy(this.gameObject);

        }
        else {
            Instance = this;
        }

        // Initialize GameAnalytics
        //TODO: for TapNation, delete this line of code
        GameAnalyticsSDK.GameAnalytics.Initialize();

        if (FB.IsInitialized)
        {
            FB.ActivateApp();
        }
        else
        {
            //Handle FB.Init
            FB.Init(() => {
                FB.ActivateApp();
            });
        }


    }


    public static void LogProgression(string name, string level, int score, string additionalData = "") {
        // Game Analytics (Downbeat)
        GAProgressionStatus status = GAProgressionStatus.Undefined;
        switch (name){
            case "Start":
                status = GAProgressionStatus.Start;
                break;
            case "Fail":
                status = GAProgressionStatus.Fail;
                break;
            case "Complete":
                status = GAProgressionStatus.Complete;
                break;
            default:
                break;
        }

        GameAnalytics.NewProgressionEvent(status, level, additionalData, score);

        //Game Analytics (TapNation) 
        //TODO, delete  GameAnalytics prefab, line of code above


    }

    public static void LogProgression(GAProgressionStatus status, string level, int score, string additionalData = "")
    {
        // Game Analytics (Downbeat)
        GameAnalytics.NewProgressionEvent(status, level, additionalData, score);
    }

    public static void LogResourceFlow(GAResourceFlowType type, string currency, float amount, string itemType="", string itemId="")
    {
        // Game Analytics (Downbeat)
        GameAnalytics.NewResourceEvent(type,currency,amount,itemType, itemId);
    }


    public static void LogUI(string name, DesignEventType type){
        GameAnalytics.NewDesignEvent(name, (float) type);
    }
    public static void LogDesign(string name, DesignEventType type) {
        GameAnalytics.NewDesignEvent(name, (float) type);
    }

    public static void LogBusinessEvent(UnityEngine.GameFoundation.IAPTransaction transaction) {
        try
        {
            var info = TransactionManager.GetLocalizedIAPProductInfo(transaction.productId);
            int price = (int)((float)transaction.product.metadata.localizedPrice * 100.0f);


#if UNITY_ANDROID
            GameAnalytics.NewBusinessEventGooglePlay(transaction.product.metadata.isoCurrencyCode, price, transaction.displayName, transaction.productId, "", transaction.product.receipt, "");
#elif UNITY_IOS
        GameAnalytics.NewBusinessEvent(currency, amount, itemType, itemId, cartType);
#endif

#if AUTO_FACEBOOK
            // Facebook (Done automatically)
#else
            var iapParameters = new Dictionary<string, object>();
            iapParameters["dandydrift_packagename"] = transaction.productId;
            FB.LogPurchase(
              (float)transaction.product.metadata.localizedPrice,
              transaction.product.metadata.isoCurrencyCode,
              iapParameters
            );
#endif
            var unityEvent = AnalyticsEvent.IAPTransaction("IAP Store", (float)transaction.product.metadata.localizedPrice, transaction.productId);


        }
        catch (System.Exception e) {
            LogErrorEvent(e);
        }

    }

    public static void LogErrorEvent(System.Exception e) {

        GameAnalytics.NewErrorEvent(GAErrorSeverity.Error, e.StackTrace);
    }

    void OnWalletChange(UnityEngine.GameFoundation.BalanceChangedEventArgs args) {
        float delta = args.newBalance - args.oldBalance;
        GAResourceFlowType type = delta <= 0 ? GAResourceFlowType.Sink : GAResourceFlowType.Source;
        LogResourceFlow(type, args.currency.displayName, delta, "Currency", args.currency.key);
    }

    private void OnEnable()
    {
        UnityEngine.GameFoundation.WalletManager.balanceChanged += OnWalletChange;
    }

    private void OnDisable()
    {
        UnityEngine.GameFoundation.WalletManager.balanceChanged -= OnWalletChange;
        
    }

    private void OnApplicationQuit()
    {
        GameAnalytics.NewDesignEvent("closedApp", Sun.TimeOfDay);
    }
    private void OnApplicationPause(bool pause)
    {
        // Check the pauseStatus to see if we are in the foreground
        // or background
        if (!pause)
        {
            //app resume
            if (FB.IsInitialized)
            {
                FB.ActivateApp();
            }
            else
            {
                //Handle FB.Init
                FB.Init(() => {
                    FB.ActivateApp();
                });
            }
        }
    }
}
