using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.GameFoundation;
using UnityEngine.GameFoundation.DataAccessLayers;
using UnityEngine.GameFoundation.Data;
using UnityEngine.Events;

using UnityEngine.GameFoundation.DefaultCatalog;
using UnityEngine.GameFoundation.DefaultLayers;
using UnityEngine.GameFoundation.DefaultLayers.Persistence;
using TMPro;
using System.Runtime.CompilerServices;
using System;

public class GameFoundationManager : MonoBehaviour
{
    static IDataPersistence localPersistence;
    static PersistenceDataLayer dataLayer;

    public static bool isInit = false;
    public static Dictionary<string, bool> ownedItems;


    public delegate void UpdateBoatDatabaseAction();
    public static event UpdateBoatDatabaseAction OnUpdateBoatDatabase;

            
    // Start is called before the first frame update
    void Awake()
    {
        Initialize();
    }

    private void Start(){
        UpdateBoatDatabase();
    }

    public static void UpdateBoatDatabase()
    {
        if (!GameFoundation.IsInitialized)
            Initialize();
        OnUpdateBoatDatabase?.Invoke();
    }

    public static bool IsItemOwned(InventoryItemDefinition item) {
           return InventoryManager.FindItemsByDefinition(item.key).Length > 0;
    }

    public static void Initialize() {
        if (GameFoundation.IsInitialized) return;
        JsonDataSerializer dataSerializer = new JsonDataSerializer();
        // choose where and how the data is stored
        localPersistence = new LocalPersistence("game-foundataion-data", dataSerializer);
        dataLayer = new PersistenceDataLayer(localPersistence);
        if (dataLayer != null)
        {
            try
            {
                GameFoundation.Initialize(dataLayer);
                isInit = true;
            }
            catch (NullReferenceException e)
            {
                Debug.LogError("Error Initializing Game Foundation: " + e.ToString());
            }
            finally {
               
                if(GameFoundation.IsInitialized)
                    UpdateBoatDatabase();

            }
        }
        else {
            Debug.LogError("Data layer was null");
        }
        // tell Game Foundation to initialize using this
        // persistence system. Only call Initialize once per session.
    }

    static void Save()
    {
        dataLayer.Save();
    }

    private static void UpdateOwnedItems()
    {
        ownedItems = new Dictionary<string, bool>();
        var definitions = GameFoundation.catalogs.inventoryCatalog.FindItemsByTag("boat");

        foreach (var item in definitions)
        {
            ownedItems.Add(item.key, InventoryManager.FindItemsByDefinition(item.key).Length > 0);
        }
    }


    private void Update()
    {
        if (Debug.isDebugBuild) {
            if (Input.GetKeyDown(KeyCode.F1)) {
                WalletManager.AddBalance(GameFoundation.catalogs.currencyCatalog.FindItem("coins"), 100);
                OnUpdateBoatDatabase();
            }
            if (Input.GetKeyDown(KeyCode.F2))
            {
                WalletManager.AddBalance(GameFoundation.catalogs.currencyCatalog.FindItem("gems"), 100);
                OnUpdateBoatDatabase();
            }
        }
    }


    private void OnEnable()
    {
        OnUpdateBoatDatabase += Save;
        OnUpdateBoatDatabase += UpdateOwnedItems;
    }

    private void OnDisable()
    {
        OnUpdateBoatDatabase -= Save;
        OnUpdateBoatDatabase -= UpdateOwnedItems;

    }

}
