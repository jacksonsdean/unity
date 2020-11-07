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

    protected override void Awake()
    {
        if (Random.Range(0.0f, 1.0f) < gemChance) {
            SwapForGem();
        } 
    }

    protected override void Collect(){
        int amt = 1;
        if (currency == "coins")
        {
            amt = UpgradeManager.CoinsPerPickup;
        }
        else if (currency == "gems")
            amt = UpgradeManager.GemsPerPickup;

        GameManager.coinsThisRun+=amt;

        var definition = GameFoundation.catalogs.currencyCatalog.FindItem(currency);
        WalletManager.AddBalance(definition, amt);
        GameFoundationManager.UpdateBoatDatabase();
        base.Collect(); 
    }

    private void SwapForGem() {
        GameObject go = Instantiate(gemSwap, transform.position, transform.rotation, transform.parent);
        go.GetComponent<MoveAlongPath>().path = GetComponent<MoveAlongPath>().path;
        Destroy(this.gameObject);
    }
}
