using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PickupUpgradeCounter : MonoBehaviour
{
    [SerializeField]
    PickupTextType textType = PickupTextType.Coin;

    [SerializeField]
    Vector3 hideRot = new Vector3();
    
    RectTransform rect;
    
    TextMeshProUGUI tmp;


    Quaternion finalRotation;
    
    void Awake()
    {
        tmp = GetComponentInChildren<TextMeshProUGUI>();
        rect = GetComponent<RectTransform>();
        finalRotation = rect.rotation;
        rect.DORotate(hideRot, 0);
        rect.DOScale(0, 0);

    }
    private void Start()
    {
        UpdateText();
    }

    private void OnStartGame() {
        if (Options.zenMode) return;
        UpdateText();

        //Tween
        rect.DORotate(finalRotation.eulerAngles, 1.0f).SetDelay(1.0f).SetEase(Ease.OutElastic);
        rect.DOScale(1, .65f).SetDelay(1.0f);
    }


    void UpdateText() {
        RectTransform textTransform = tmp.GetComponent<RectTransform>();
        textTransform.DOScale(1.3f,.4f).SetEase(Ease.OutElastic);
        textTransform.DOScale(1.0f, .4f).SetDelay(.7f).SetEase(Ease.OutBounce);

        switch (textType)
        {
            case PickupTextType.Coin:
                tmp.text = "+" + UpgradeManager.CoinsPerPickup.ToString();
                break;
            case PickupTextType.Gem:
                tmp.text = "+" + UpgradeManager.GemsPerPickup.ToString();
                break;
            default:
                break;
        }

    }

    void OnChangePickupUpgrade() {
        UpdateText();
    }

    private void OnEnable()
    {
        GameManager.OnStartGame += OnStartGame;
        UpgradeManager.OnChangePickupUpgrade += OnChangePickupUpgrade;
    }
    private void OnDisable()
    {
        GameManager.OnStartGame -= OnStartGame;
        UpgradeManager.OnChangePickupUpgrade -= OnChangePickupUpgrade;
        
    }

}
