using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.GameFoundation;
using UnityEngine.GameFoundation.UI;
using UnityEngine.UI;



public class UpgradeButton : MonoBehaviour
{
    string m_TransactionKey;

    //[SerializeField]
    //Image costImage;
    //[SerializeField]
    //Text costText;

    VirtualTransaction transaction;

    //private long cost;
    //private Currency currency;

    Button button;

    PurchaseButton purchaseButton;
    public void Awake()
    {
        purchaseButton = GetComponent<PurchaseButton>();
        //SetTransactionKey(m_TransactionKey);
        button = GetComponent<Button>();
    }
    private void Start()
    {
        //UpdateInteractable();
    }

    public void SetTransactionKey(string key)
    {
        purchaseButton.SetTransactionKey(key);
        transaction = (VirtualTransaction)purchaseButton.GetTransaction();
        //currency = transaction.costs.GetCurrencyExchange(0).currency;
        //cost = transaction.costs.GetCurrencyExchange(0).amount;

        //UpdateInteractable();
    }

    public void OnClick()
    {
        // Check if currency available
        StartCoroutine(InitiateTransaction(transaction));
        AnalyticsManager.LogUI("upgradePurchaseButton_"+transaction.displayName, DesignEventType.Clicked);


    }

    IEnumerator InitiateTransaction(BaseTransaction transaction)
    {
        // Gets the handle of the transaction.
        var deferredResult = TransactionManager.BeginTransaction(transaction);

        try
        {
            // Waits for the process to finish
            while (!deferredResult.isDone)
            {
                yield return null;
            }

            // The process failed
            if (!deferredResult.isFulfilled)
            {
                Debug.LogException(deferredResult.error);
            }

            // The process succeeded
            else
            {
                var result = deferredResult.result;
            }
        }
        finally
        {
            // A process handle can be released.
            deferredResult.Release();
        }
    }

    public void EnableButton()
    {
        button.interactable = true;
    }

    public void DisableButton()
    {
        button.interactable = false;
    }

    private void WalletBalanceChanges(BalanceChangedEventArgs args)
    {
        //UpdateInteractable();  
    }


    //private void UpdateInteractable() {
    //    if (currency == null) return;
    //    if (cost < WalletManager.GetBalance(currency))
    //    {
    //        EnableButton();
    //    }
    //    else
    //    {
    //        DisableButton();
    //    }
    //}


    private void OnUpdateUpgrades(){

    }

  

}
