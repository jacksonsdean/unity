using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.GameFoundation;
using UnityEngine.Purchasing;

public class StoreManager : MonoBehaviour
{

    
    public void OnTransactionSucceed(BaseTransaction t) {

        if (t.HasTag("boat")){
            var definition = GameFoundation.catalogs.storeCatalog.FindItem(t.key);
            PlayerPrefabManager.SetCurrent(t.rewards.GetItemExchange(0).item.key);
            VirtualTransaction vt = (VirtualTransaction)t;
            AnalyticsManager.LogResourceFlow(
                GameAnalyticsSDK.GAResourceFlowType.Source,
                vt.costs.GetCurrencyExchange(0).currency.displayName,
                0,
                vt.rewards.GetItemExchange(0).item.displayName,
                vt.rewards.GetItemExchange(0).item.key
                );
        }

        else if (t.HasTag("iap"))
        {
            GameFoundationManager.Instance.OnIAPPurchaseComplete((IAPTransaction)t);
        }
        else if (t.HasTag("coins")) {
            GameFoundationManager.Instance.OnCoinPurchaseComplete(t);
            VirtualTransaction vt = (VirtualTransaction)t;
            AnalyticsManager.LogResourceFlow(
                GameAnalyticsSDK.GAResourceFlowType.Source,
                vt.costs.GetCurrencyExchange(0).currency.displayName,
                0,
                vt.displayName,
                vt.key
                );
        }

        GameFoundationManager.UpdateBoatDatabase();


    }

  
    public void OnTransactionFail(BaseTransaction t, Exception e)
    {
        if(t.HasTag("iap"))
            GameFoundationManager.Instance.OnIAPPurchaseFailed(t, e);

        AnalyticsManager.LogErrorEvent(e);

    }


}
