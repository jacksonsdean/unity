using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.GameFoundation;

public enum RewardedCurrencyType {Coins,Gems }
public class RewardedCurrency : MonoBehaviour
{
    [SerializeField]
    RewardedCurrencyType type = RewardedCurrencyType.Coins;
    [SerializeField]
    TextMeshProUGUI amtText = null;

    void Start()
    {
        switch (type)
        {
            case RewardedCurrencyType.Coins:
                amtText.text = RewardedAd.GetRewardedCoinsAmount().ToString();
                break;
            case RewardedCurrencyType.Gems:
                amtText.text = RewardedAd.GetRewardedGemsAmount().ToString();
                break;
            default:
                break;
        }
    }

  public void OnClick()
    {
        switch (type)
        {
            case RewardedCurrencyType.Coins:
                RewardedAd.ShowRewardedCoinsAd(); 
                AnalyticsManager.LogUI("storeRewardWithCoinsAd", DesignEventType.Clicked);
                break;
            case RewardedCurrencyType.Gems:
                RewardedAd.ShowRewardedGemsAd();
                AnalyticsManager.LogUI("storeRewardWithGemsAd", DesignEventType.Clicked);
                break;
            default:
                break;
        }

    }
}
