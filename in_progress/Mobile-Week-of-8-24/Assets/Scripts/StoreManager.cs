using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.GameFoundation;
using UnityEngine.GameFoundation.DefaultCatalog;
using UnityEngine.GameFoundation.UI;

public class StoreManager : MonoBehaviour
{

    
    public void OnTransactionSuceed(BaseTransaction t) {
        if (t.HasTag("boat"))
        {
            var definition = GameFoundation.catalogs.storeCatalog.FindItem(t.key);

            GameFoundationManager.UpdateBoatDatabase();
            PlayerPrefabManager.SetCurrent(t.rewards.GetItemExchange(0).item.key);
        }
    
    }
   
}
