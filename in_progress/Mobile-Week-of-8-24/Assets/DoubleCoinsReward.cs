using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class DoubleCoinsReward : MonoBehaviour
{
    public static DoubleCoinsReward Instance;
    bool shown = false;
    RectTransform rt = null;

    [SerializeField]
    float hideYPos = 300.0f;
    [SerializeField]
    float animTime = 1.0f;
    [SerializeField]
    float animDelay = 1.0f;

    CurrencyText text = null;
    Button button;
    private void Awake()
    {
        if (Instance)
            Destroy(this);
        else
            Instance = this;

        rt = GetComponent<RectTransform>();
        rt.DOAnchorPosY(hideYPos,0.0f).SetRelative(true);
        text = GetComponentInChildren<CurrencyText>();
       
        button = GetComponentInChildren<Button>();
    }

    public void Show() {
        if (shown) return;
        shown = true;
        text.GetComponent<TextMeshProUGUI>().text = "+0";
        button.interactable = true;
        text.UpdateQuantity(0, GameManager.coinsThisRun,1.0f,true,"+","",null,3,1.8f);
        rt.DOAnchorPosY(-hideYPos,animTime).SetDelay(animDelay).SetRelative(true).SetEase(Ease.OutBounce);
    }

    public void Hide(){
        if (!shown) return;
        shown = false;
        button.interactable = false;
        rt.DOAnchorPosY(hideYPos, animTime).SetRelative(true);

    }

    public void OnClick() {
        AnalyticsManager.LogUI("afterLevelDoubleCoinsReward",DesignEventType.Clicked);
        RewardedAd.ShowRewardedCoinsAd();
        Hide();

    }
}
