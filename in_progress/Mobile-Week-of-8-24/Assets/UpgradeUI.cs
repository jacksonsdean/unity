using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.GameFoundation;
using UnityEngine.GameFoundation.UI;

public class UpgradeUI : MonoBehaviour
{
    [SerializeField]
    UpgradeType upgradeType = UpgradeType.CoinsPerPickup;

    [SerializeField]
    Transform fullBar = null;
    [SerializeField]
    TextMeshProUGUI levelLabel = null;

    int level = 0;

    TransactionItemView transactionItemView;
    private void Awake()
    {

        // Set all bars to empty
        EmptyBars();
        transactionItemView = GetComponent<TransactionItemView>();


    }

    private void EmptyBars()
    {
        foreach (Transform item in fullBar.transform)
        {
            if (item.CompareTag("UpgradeLevelUI"))
            {
                CanvasGroup group = item.GetComponent<CanvasGroup>();
                group.DOFade(0, 0);

            }
        }
    }

    private void OnUpdateUpgrades() {
        UpdateWithNextUpgrade();
    }

    public void UpdateWithNextUpgrade()
    {
        int nextUpgrade = 0;
        int maxLevel = 0;
        string transKey = "";
        // Coins
        if (upgradeType.Equals(UpgradeType.CoinsPerPickup))
        {
            level = UpgradeManager.LevelCoinsPerPickup;
            maxLevel = UpgradeManager.NUM_PICKUP_COIN_UPGRADES;
            transKey = UpgradeManager.UPGRADE_NAME_PICKUP_COINS_TRANSACTION;
            levelLabel.text = "+"+UpgradeManager.BaseCoinsPerPickup.ToString();

        }
        // Gems 
        else if (upgradeType.Equals(UpgradeType.GemsPerPickup))
        {
            level = UpgradeManager.LevelGemsPerPickup;
            maxLevel = UpgradeManager.NUM_PICKUP_GEM_UPGRADES;
            transKey = UpgradeManager.UPGRADE_NAME_PICKUP_GEMS_TRANSACTION;
            levelLabel.text = "+" + UpgradeManager.GemsPerPickup.ToString();
        }

        //Current level
        int count = 0;
        
        foreach (RectTransform item in fullBar.transform){
            if (item.CompareTag("UpgradeLevelUI")){
                CanvasGroup group = item.GetComponent<CanvasGroup>();
                if (count < level){
                    group.DOFade(1.0f, .6f); // Has unlocked this level
                }
                else {
                    group.DOFade(0.0f,0.0f); // Hasn't unlocked this level
                }
                count++;
            }
        }

        // Next
        nextUpgrade = level + 1;

        if (nextUpgrade > maxLevel){
            transactionItemView.purchaseButton.gameObject.SetActive(false);
        }
        else{
            transactionItemView.SetTransactionKey(transKey + nextUpgrade.ToString());
        }

        

        
    }

    private void OnTransactionSucceeded(BaseTransaction transaction, TransactionResult result)
    {
        UpgradeManager.ResetUpgrades();
    }


    private void OnEnable()
    {
        //WalletManager.balanceChanged += WalletBalanceChanges;
        TransactionManager.transactionSucceeded += OnTransactionSucceeded;
        UpgradeManager.OnUpdateUpgrades += OnUpdateUpgrades;

    }

    private void OnDisable()
    {
        //WalletManager.balanceChanged -= WalletBalanceChanges;
        TransactionManager.transactionSucceeded -= OnTransactionSucceeded;
        UpgradeManager.OnUpdateUpgrades -= OnUpdateUpgrades;


    }

}
