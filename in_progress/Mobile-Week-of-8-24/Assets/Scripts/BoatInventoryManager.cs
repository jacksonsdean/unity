using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.GameFoundation;
using UnityEngine.GameFoundation.UI;
public class BoatInventoryManager : MonoBehaviour
{

    [SerializeField]
    GameObject inventoryItemPrefab;

    [SerializeField]
    Transform gridParent;

    public static BoatInventoryManager Instance;

    private List<GameObject> mGameObjects = new List<GameObject>();

    private void Awake()
    {
        Instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        DoUpdate();
    }


    public static void DoUpdate() {
        Instance.InternalUpdate();
    }


    private void InternalUpdate() {
        if (!GameFoundationManager.isInit)
            GameFoundationManager.Initialize();


        for (int i = 0; i < mGameObjects.Count; i++)
        {
            Destroy(mGameObjects[i]);
        }
        mGameObjects.Clear();


        var definitions = GameFoundation.catalogs.inventoryCatalog.FindItemsByTag("boat");
        foreach (var item in definitions)
        {
            if (GameFoundationManager.IsItemOwned(item))
            {
                //Add to grid
                GameObject g = Instantiate(inventoryItemPrefab, gridParent);
                mGameObjects.Add(g);
                g.GetComponent<InventoryItemHudView>().SetItemDefinitionKey(item.key);
            }
        }
    }

    private void OnEnable()
    {
        GameFoundationManager.OnUpdateBoatDatabase += DoUpdate;
    }

    private void OnDisable()
    {
        GameFoundationManager.OnUpdateBoatDatabase -= DoUpdate;
    }
}
