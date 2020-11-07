using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.GameFoundation;
using UnityEngine.Rendering.Universal.Internal;

public class PlayerPrefabManager : MonoBehaviour
{
    const string PLAYER_PREF_STRING = "current-boat-key";
    const string PREFAB_ASSET_STRING = "prefab";

    private const string DEFAULT_KEY = "raft";

    public static PlayerPrefabManager Instance;
    public static GameObject current;
    public static string currentKey;

    public delegate void OnBoatChangedAction();
    public static OnBoatChangedAction OnBoatChanged;

    private void Awake()
    {
        if (Instance != null) { Destroy(this.gameObject); } else { Instance = this; }

        SetCurrent(PlayerPrefs.GetString(PLAYER_PREF_STRING));

        if(current==null)
            SetCurrent(DEFAULT_KEY);        
    }

    public static void SetCurrent(string key)
    {
        if (key.Equals(string.Empty)) {
            key = DEFAULT_KEY;
        }
        else
        {
            PlayerPrefs.SetString(PLAYER_PREF_STRING, key);
            PlayerPrefs.Save();
        }
        PlayerPrefabManager.currentKey = key;
        SwitchPrefab();
        OnBoatChanged?.Invoke();
        AnalyticsManager.LogDesign("currentBoat_" + key, DesignEventType.Choice);
    }

    private static void SwitchPrefab() {
        var definition = GameFoundation.catalogs.inventoryCatalog.FindItem(currentKey);
        if (definition != null)
        {
            current = definition.GetDetail<AssetsDetail>()?.GetAsset<GameObject>(PREFAB_ASSET_STRING);
            if (Instance.IsBoatSpawned()) {
                Instance.ChangeSpawnedBoat();
            }
        
        }
        else
            Debug.LogError("Definition was null");
    }

    private bool IsBoatSpawned() {
        return FindObjectOfType<PlayerBoat>() != null;
    }

    private void ChangeSpawnedBoat() {
        FindObjectOfType<PlayerBoat>().Change();
    }
}
