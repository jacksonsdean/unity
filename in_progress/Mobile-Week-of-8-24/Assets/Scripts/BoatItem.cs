using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.GameFoundation.UI;
using UnityEngine.PlayerLoop;
using UnityEngine.UI;

public class BoatItem : MonoBehaviour
{
    [SerializeField]
    Color unselectedColor;

    Color[] origColors;

    Image[] images;
    string key;
    private void Awake()
    {
        images = GetComponentsInChildren<Image>();
        origColors = new Color[images.Length];

        for (int i = 0; i < images.Length; i++)
        {
            origColors[i] = images[i].color; 

        }
         key = GetComponent<InventoryItemHudView>().itemDefinitionKey;
    }

    private void Start()
    {
        UpdateUI();
    }


    public void OnClick() {
        PlayerPrefabManager.SetCurrent(key);
        UpdateUI();

    }


    void UpdateUI() {
        for (int i = 0; i < images.Length; i++)
        {
            images[i].color = PlayerPrefabManager.currentKey == key ? origColors[i] : unselectedColor;
        }
    }

    private void OnEnable()
    {
        GameFoundationManager.OnUpdateBoatDatabase += UpdateUI;
        PlayerPrefabManager.OnBoatChanged += UpdateUI;
    }
    private void OnDisable()
    {
        GameFoundationManager.OnUpdateBoatDatabase -= UpdateUI;
        PlayerPrefabManager.OnBoatChanged -= UpdateUI;
        
    }
}
