using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.GameFoundation;


public class PickupCoin : Pickup
{
    [SerializeField]
    string currency = "coins";

    [SerializeField]
    float gemChance = 0.01f;

    [SerializeField]
    GameObject gemSwap;

    private void Awake()
    {
        if (Random.Range(0.0f, 1.0f) < gemChance) {
            SwapForGem();
        } 
    }

    protected override void Collect(){
        var definition = GameFoundation.catalogs.currencyCatalog.FindItem(currency);
        WalletManager.AddBalance(definition, 1);
        GameFoundationManager.UpdateBoatDatabase();
        //GameManager.Instance.addScore(1);
        base.Collect(); 
    }

    private void SwapForGem() {
        Instantiate(gemSwap, transform.position, transform.rotation, transform.parent);
        Destroy(this.gameObject);
    }
}
