using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.GameFoundation;

using UnityEngine.GameFoundation.DefaultLayers;
using UnityEngine.GameFoundation.DefaultLayers.Persistence;
using System;
using UnityEngine.GameFoundation.UI;
using System.IO;

public class GameFoundationManager : MonoBehaviour
{
    public static GameFoundationManager Instance;
    static IDataPersistence localPersistence;
    public static PersistenceDataLayer dataLayer;

    public static bool isInit = false;
    public static Dictionary<string, bool> ownedItems;


    public delegate void UpdateBoatDatabaseAction();
    public static event UpdateBoatDatabaseAction OnUpdateBoatDatabase;

    public delegate void LoadedDataFromDiskAction();
    public static event LoadedDataFromDiskAction OnLoadedDataFromDisk;

    // Start is called before the first frame update
    void Awake()
    {
        if (Instance)
        {
            Destroy(this.gameObject);
            return;
        }
        else
        {
            Instance = this;
        }



        Initialize();
        DontDestroyOnLoad(this.gameObject);

#if UNITY_EDITOR
        //GenerateDataBaseCSV();
#endif

    }

    private void Start() {
        UpdateBoatDatabase();
    }

    private static void GenerateDataBaseCSV() {
        List<VirtualTransaction> transactions = new List<VirtualTransaction>();
        GameFoundation.catalogs.transactionCatalog.GetTransactions<VirtualTransaction>(transactions);
        string output = "Name,Price,Type\n";
        foreach (var virtualTransaction in transactions)
        {
            output += virtualTransaction.displayName + ",";
            try
            {
                output += virtualTransaction.costs.GetCurrencyExchange(0).amount + ",";
                output += virtualTransaction.costs.GetCurrencyExchange(0).currency.displayName + ",";
            }
            catch (IndexOutOfRangeException ie)
            {
                Debug.LogError(ie);
                output += ",,";
            }
            output += "\n";
        }

        string directory = Application.dataPath + "/CSV";
        string filePath = directory + "/Transactions.csv";

        System.IO.StreamWriter outStream;

        if (!System.IO.Directory.Exists(directory))
            System.IO.Directory.CreateDirectory(directory);

        System.IO.File.Delete(filePath);
        outStream = System.IO.File.CreateText(filePath);

        outStream.Write(output);
        outStream.Close();
    }

    public static void UpdateBoatDatabase()
    {
        if (!GameFoundation.IsInitialized)
            Initialize();
        OnUpdateBoatDatabase?.Invoke();
    }

    public static bool IsItemOwned(InventoryItemDefinition item) {
        if (item == null) return false;
        return IsItemOwned(item.key);
    }

    public static bool IsItemOwned(string itemKey)
    {
        return InventoryManager.FindItemsByDefinition(itemKey).Length > 0;
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
                /* TransactionManager.SetIAPValidator(new CrossPlatformValidator(
                      GooglePlayTangle.Data(), AppleTangle.Data(), Application.identifier));*/

                isInit = true;

            }
            catch (NullReferenceException e)
            {
                Debug.LogError("Error Initializing Game Foundation: " + e.ToString());
            }
            finally {

                if (GameFoundation.IsInitialized)
                    UpdateBoatDatabase();

            }
        }
        else {
            Debug.LogError("Data layer was null");
        }

    }

    static bool isSaving = false;
    public static void Save(){
        if (isSaving) return;
        Instance.StartCoroutine("SaveEnum");

    }

    public static void LoadFromDisk() {
        GameFoundation.Uninitialize();
        GameFoundation.Initialize(dataLayer);
        UpdateBoatDatabase();
        OnLoadedDataFromDisk?.Invoke();
        UpgradeManager.ResetUpgrades();

    }

    private IEnumerator SaveEnum() {
        isSaving = true;
        // Gets the handle of the transaction.
        var deferredResult = dataLayer.Save();
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
            else{
                SavedGameManager.SaveToOnlineDatabase();
            }
        }
        finally
        {
            // A process handle can be released.
            deferredResult.Release();
            isSaving = false;

        }
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
                UpdateBoatDatabase();
            }
            if (Input.GetKeyDown(KeyCode.F2))
            {
                WalletManager.AddBalance(GameFoundation.catalogs.currencyCatalog.FindItem("gems"), 100);
                UpdateBoatDatabase();

            }
        }
    }

    private void UpdateStoreUI() {
        foreach (StoreView item in Resources.FindObjectsOfTypeAll<StoreView>())
        {
            foreach (TransactionItemView transaction in item.GetComponentsInChildren<TransactionItemView>())
            {
                transaction.SetNoPriceString(transaction.noPriceString=="FREE"? "FREE!" : "FREE");
            }
        }
    }

    void WalletBalanceChanged(BalanceChangedEventArgs args) {
        Save();
    }

    private void OnLevelWasLoaded(int level)
    {
        OnUpdateBoatDatabase -= Save;
        OnUpdateBoatDatabase -= UpdateOwnedItems;
        OnUpdateBoatDatabase -= UpdateStoreUI;
        WalletManager.balanceChanged -= WalletBalanceChanged;

        OnUpdateBoatDatabase += Save;
        OnUpdateBoatDatabase += UpdateOwnedItems;
        OnUpdateBoatDatabase += UpdateStoreUI;
        OnUpdateBoatDatabase += UpdateStoreUI;
        WalletManager.balanceChanged += WalletBalanceChanged;
    }

    private void OnEnable(){
        OnUpdateBoatDatabase += Save;
        OnUpdateBoatDatabase += UpdateOwnedItems;
        OnUpdateBoatDatabase += UpdateStoreUI;
        WalletManager.balanceChanged += WalletBalanceChanged;

    }

    private void OnDisable(){
        OnUpdateBoatDatabase -= Save;
        OnUpdateBoatDatabase -= UpdateOwnedItems;
        OnUpdateBoatDatabase -= UpdateStoreUI;
        WalletManager.balanceChanged -= WalletBalanceChanged;

    }

    public void OnIAPPurchaseComplete(IAPTransaction transaction) {
        //popup thanks
        Sprite sprite = null;
        if (transaction != null) {
            if(transaction.GetDetail<AssetsDetail>()!=null)
                sprite = transaction.GetDetail<AssetsDetail>().GetAsset<Sprite>("icon");
        }

        PopupBuilder builder = new PopupBuilder();
        builder.title = "Thanks!";
        builder.text = "Thank you for your purchase of " + transaction.product.metadata.localizedTitle;
        builder.showConfirmButton = true;
        builder.showDeclineButton = false;
        if(sprite)
            builder.graphic = sprite;

        PopupManager.Instance.Show(builder);


     

        AnalyticsManager.LogBusinessEvent(transaction);


    }

    public void OnCoinPurchaseComplete(BaseTransaction transaction)
    {
        //popup thanks
        Sprite sprite = null;
        if (transaction != null)
        {
            if (transaction.GetDetail<AssetsDetail>() != null)
                sprite = transaction.GetDetail<AssetsDetail>().GetAsset<Sprite>("icon");
        }

        PopupBuilder builder = new PopupBuilder();
        builder.title = "Thanks!";
        builder.text = "Thank you for your purchase of " + transaction.displayName;
        builder.showConfirmButton = true;
        builder.showDeclineButton = false;
        if (sprite)
            builder.graphic = sprite;

        PopupManager.Instance.Show(builder);
    }


    public void OnIAPPurchaseFailed(BaseTransaction t, Exception e) {
        // Popup failed
        PopupBuilder b = new PopupBuilder();
        if (!e.Message.Contains("UserCancelled"))
        {
            b.title = "Transaction Cancelled";
            b.text = "You were not charged";
        }
        else
        {
            b.title = "Transaction failed";

            b.text = "Something unexpectedly went wrong, sorry! \n\nError:\n";
            b.text += e.Message;
        }

        b.Show();

        Debug.LogError(e);
    }


    IEnumerator InitiateIAPTransaction(BaseTransaction transaction)
    {
        // Gets the handle of the transaction.
        var deferredResult = TransactionManager.BeginTransaction(transaction);

        try{
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
                Debug.LogFormat("IAP transaction complete, {0}", deferredResult.result);

                // TODO: display the result
            }
        }
        finally{
            // A process handle can be released.
            deferredResult.Release();
          
        }
    }


}
