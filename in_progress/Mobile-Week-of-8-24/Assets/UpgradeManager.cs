using DG.Tweening;
using DG.Tweening.Core;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public enum UpgradeType
{
    CoinsPerPickup, GemsPerPickup
}
public class UpgradeManager : MonoBehaviour
{
    public static UpgradeManager Instance;


    public static readonly string UPGRADE_NAME_PICKUP_COINS_INVENTORY = "coinPickup";
    public static readonly string UPGRADE_NAME_PICKUP_COINS_TRANSACTION = "coinsPerPickupLevel";
    public static readonly int NUM_PICKUP_COIN_UPGRADES = 6;

    public static readonly string UPGRADE_NAME_PICKUP_GEMS_INVENTORY = "gemPickup";
    public static readonly string UPGRADE_NAME_PICKUP_GEMS_TRANSACTION = "gemsPerPickupLevel";
    public static readonly int NUM_PICKUP_GEM_UPGRADES = 6;

    // Levels
    //Coins
    public static readonly int[] COIN_LEVELS = { 1, 2, 3, 4, 5, 6, 7 };
    public static int LevelCoinsPerPickup = 0;

    //Gems
    public static readonly int[] GEM_LEVELS = { 1, 2, 3, 4, 5, 6, 7 };
    public static int LevelGemsPerPickup = 0;

    // Upgrades:
    public static int CoinsPerPickup = 1;
    public static int GemsPerPickup = 1;
    public static int BaseCoinsPerPickup = 1;
    private static float CoinsPerPickupMultiplier = 1.0f;

    public static float CoinScoreMultiplier = 2.0f;

    public delegate void UpdateUpgradesAction();
    public static event UpdateUpgradesAction OnUpdateUpgrades;

    public delegate void UpdateTempUpgradesAction(DOGetter<float>getter, DOSetter<float> setter, float boost, float time);
    public static event UpdateTempUpgradesAction OnUpdateTempUpgrades;
    
    public delegate void ChangePickupUpgradeAction();
    public static event ChangePickupUpgradeAction OnChangePickupUpgrade;

   public static Dictionary<DOGetter<float>, Vector2> upgradeTimeLeft = new Dictionary<DOGetter<float>, Vector2>();

    [SerializeField]
    TemporaryUpgrade temporaryCoinsMultiplier = null;



    public static float GetCoinsPerPickupMultiplier() {
        return CoinsPerPickupMultiplier;
    }

    internal static void SetCoinsPerPickupMultiplier(float x)
    {
        CoinsPerPickupMultiplier = x;
        CoinsPerPickup = (int)CoinsPerPickupMultiplier*BaseCoinsPerPickup;
        OnChangePickupUpgrade?.Invoke();
    }
    // Start is called before the first frame update
    void Awake()
    {
        if (UpgradeManager.Instance)
        {
            Destroy(this.gameObject);
        }
        else
        {
            Instance = this;
        }
        DontDestroyOnLoad(this.gameObject);

    }
    private void Start()
    {
        ResetUpgrades();
    }

    public static void ResetUpgrades()
    {
        // Coin pickups:
        for (int i = 1; i <= NUM_PICKUP_COIN_UPGRADES; i++)
        {
            if (GameFoundationManager.IsItemOwned(UPGRADE_NAME_PICKUP_COINS_INVENTORY + i.ToString()))
            {
                LevelCoinsPerPickup = i;
                BaseCoinsPerPickup = COIN_LEVELS[LevelCoinsPerPickup];
                CoinsPerPickup = BaseCoinsPerPickup * (int)CoinsPerPickupMultiplier;
            }

        }

        // Gem pickups:
        for (int i = 1; i <= NUM_PICKUP_GEM_UPGRADES; i++)
        {
            if (GameFoundationManager.IsItemOwned(UPGRADE_NAME_PICKUP_GEMS_INVENTORY + i.ToString()))
            {
                LevelGemsPerPickup = i;
                GemsPerPickup = GEM_LEVELS[LevelGemsPerPickup];
            }

        }

        OnUpdateUpgrades?.Invoke();
        GameFoundationManager.Save();
    }

    //Float 
    public static void BeginTemporary(DOGetter<float> getter, DOSetter<float> setter, float boost, float time){
        Instance.BeginTemporaryInternal(getter, setter, boost, time);
        OnUpdateTempUpgrades?.Invoke(getter, setter, boost, time); // updates UI
    }


    //Float 
    void BeginTemporaryInternal(DOGetter<float> getter, DOSetter<float> setter, float boost, float time) {
        float target = 0;
        target = getter.Invoke();
        target += boost;

        DOTween.To(
            getter,
            setter,
            target,
            0           // time
        );
        StartCoroutine(EndUpgradeAfterTime(getter, setter, boost, time));
    }
  
    // Float 
    IEnumerator EndUpgradeAfterTime(DOGetter<float> getter, DOSetter<float> setter, float boost, float time){
        if (!upgradeTimeLeft.ContainsKey(getter)) 
            upgradeTimeLeft.Add(getter, new Vector2(time,time));



        upgradeTimeLeft[getter] = new Vector2(time,time);

        while (upgradeTimeLeft[getter][0] > 0.0f)
        {
            upgradeTimeLeft[getter] = new Vector2(upgradeTimeLeft[getter][0]-1.0f, time);
            yield return new WaitForSeconds(1.0f);
        }
        upgradeTimeLeft[getter] = new Vector2(0, time);

        EndTemporaryInternal(getter, setter, boost, time);
    }    
     
    void EndTemporaryInternal(DOGetter<float> getter, DOSetter<float> setter, float boost, float time)
    {
        float target = getter.Invoke();
        target -= boost;
        DOTween.To(
          getter,
          setter,
          target,
          0           // time
      );

    }

    private void LevelLoaded(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode mode){
        GameObject bar = GameObject.FindGameObjectWithTag("UpgradesBar");
        if (bar)
        {
            foreach (Transform item in bar.transform)
            {
                if (item.GetComponent<TemporaryUpgrade>() && item.GetComponent<TemporaryUpgrade>().type == TempUpgradeType.CoinsMultiplier)
                {
                    temporaryCoinsMultiplier = item.GetComponent<TemporaryUpgrade>();
                }
            }
        }
    }
    private void OnEnable()
    {
        UnityEngine.SceneManagement.SceneManager.sceneLoaded += LevelLoaded;
    }
    private void OnDisable()
    {
        UnityEngine.SceneManagement.SceneManager.sceneLoaded -= LevelLoaded;
    }

}
