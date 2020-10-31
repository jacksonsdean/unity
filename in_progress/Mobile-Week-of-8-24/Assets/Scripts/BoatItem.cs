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


    public bool selected = false;
    private void Awake()
    {
        Init();
    }
    public void Init()
    {
        images = GetComponentsInChildren<Image>();
        origColors = new Color[images.Length];

        for (int i = 0; i < images.Length; i++)
        {
            if (!images[i].color.Equals(unselectedColor))
                origColors[i] = images[i].color;
            else {
                origColors[i] = Color.white;
            }

        }
         key = GetComponent<InventoryItemHudView>().itemDefinitionKey;
        selected = false;

    }

    private void Start()
    {
        UpdateUI();
    }


    public void OnClick() {
        key = GetComponent<InventoryItemHudView>().itemDefinitionKey;

        PlayerPrefabManager.SetCurrent(key);
        UpdateUI();
        UIAudioManager.PlayClickSound();


    }


    public void UpdateUI() {
        for (int i = 0; i < images.Length; i++)
        {
            if (PlayerPrefabManager.currentKey == key)
            {
                images[i].color = origColors[i];
                selected = true;

            }
            else {
                images[i].color = unselectedColor;
                selected = false;
            }
        }
    }

    private void OnEnable()
    {
        Init();
        UpdateUI();
        GameFoundationManager.OnUpdateBoatDatabase += UpdateUI;
        PlayerPrefabManager.OnBoatChanged += UpdateUI;
    }
    private void OnDisable()
    {

        GameFoundationManager.OnUpdateBoatDatabase -= UpdateUI;
        PlayerPrefabManager.OnBoatChanged -= UpdateUI;
        
    }
}
