using GameAnalyticsSDK;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public enum UIEventType {
    Clicked, Spun, Closed, Opened
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
        GameAnalytics.NewResourceEvent(type, currency,amount,itemType, itemId);
    }


    public static void LogUI(string name, UIEventType type){
        GameAnalytics.NewDesignEvent(name, (float) type);

    }

    public static void LogBusinessEvent(string currency, int amount, string itemType, string itemId, string cartType, string receipt, string signature) {
#if UNITY_ANDROID
        GameAnalytics.NewBusinessEventGooglePlay(currency, amount, itemType, itemId, cartType, receipt, signature);
#elif UNITY_IOS
        GameAnalytics.NewBusinessEvent(currency, amount, itemType, itemId, cartType);
#endif

    }

}
