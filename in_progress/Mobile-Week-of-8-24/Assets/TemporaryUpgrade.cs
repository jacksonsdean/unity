using DG.Tweening;
using DG.Tweening.Core;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection.Emit;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

enum TempUpgradeType {
    CoinsMultiplier
}
public class TemporaryUpgrade : MonoBehaviour
{
    [SerializeField]
    TempUpgradeType type = TempUpgradeType.CoinsMultiplier;

    [SerializeField]
    TextMeshProUGUI timeLabel = null;
    [SerializeField]
    RectTransform timePanel = null;
    [SerializeField]
    TextMeshProUGUI upgradeLabel = null;
    [SerializeField]
    Image percentImage = null;

    [SerializeField]
    CanvasGroup iconGroup = null;

    [SerializeField]
    bool doVideoAnim = false;
    [SerializeField]
    RectTransform videoRT = null;

    DOGetter<float> field = null;
    CanvasGroup group = null;
    float totalTime;

    public bool isActive = false;
    bool _waitFillAmount = false;
    void Awake(){
        group = GetComponent<CanvasGroup>();
        switch (type)
        {
            case TempUpgradeType.CoinsMultiplier:
                field = UpgradeManager.GetCoinsPerPickupMultiplier;
                upgradeLabel.text = "x2";
                
                break;
            default:
                break;
        }

        timePanel.DOScaleX(0, 0);
        percentImage.fillAmount = 0;
        iconGroup.DOFade(.65f, 0.0f);
        percentImage.fillAmount = 0;
        if (UpgradeManager.upgradeTimeLeft.ContainsKey(field) && UpgradeManager.upgradeTimeLeft[field][0] > 0.0f)
        {
            StartCoroutine(CountDown(field, UpgradeManager.upgradeTimeLeft[field][0], UpgradeManager.upgradeTimeLeft[field][1]));
            ActiveUI();
        }

        if (!isActive && doVideoAnim){
            DoVideoAnimOpen();
        }

    }

    void UpdateUI(float timeLeft) {
        TimeSpan timeSpan = TimeSpan.FromSeconds(timeLeft);
        timeLabel.text = string.Format("{0:D2}:{1:D2}", timeSpan.Minutes, timeSpan.Seconds);
        percentImage.DOFillAmount(timeLeft / totalTime, 1.0f);

    }

    void OnUpdateTempUpgrades(DOGetter<float> getter, DOSetter<float> setter, float boost, float time) {
        if (!getter.Equals(field)) {
            return;
        }
        ActiveUI();
        StartCoroutine(CountDown(getter, time));
    }

    private void ActiveUI()
    {
        isActive = true;
        RectTransform timeLabel = timePanel.GetComponentInChildren<TextMeshProUGUI>().GetComponent<RectTransform>();
        iconGroup.DOFade(1.0f, .5f);

        // In
        percentImage.DOFade(percentImage.color.a, 0.0f);
        timeLabel.DOAnchorPosX(202.0f, 0.0f);
        timePanel.DOScaleX(1.0f, 1.0f).SetEase(Ease.OutBack);
        timeLabel.DOAnchorPosX(-20.0f, .85f).SetEase(Ease.OutBack).SetDelay(.15f);
        timeLabel.DOScale(1.0f,5.0f);
        //Out
        timeLabel.DOAnchorPosX(202.0f, 1.05f).SetEase(Ease.OutBack).SetDelay(3.45f);
        timePanel.DOScaleX(0.0f, 1.0f).SetDelay(3.5f);

        //Loop
        GetComponent<RectTransform>().DOScale(1.05f,1.0f).SetLoops(-1,LoopType.Yoyo);
        upgradeLabel.DOScale(1.08f,.8f).SetLoops(-1,LoopType.Yoyo);

        if (doVideoAnim) {
            DoVideoAnimClose();
        }
    }

    IEnumerator CountDown(DOGetter<float> getter, float time, float totTime = -1.0f) {
        if (totTime >= 0)
            totalTime = totTime;
        else
            totalTime = time;

        float timeLeft = time;
        while (timeLeft>0.0f)
        {
            UpdateUI(timeLeft);
            timeLeft -= 1.0f;
            yield return new WaitForSeconds(1.0f);
        }
        InactiveUI();
    }

    private void InactiveUI()
    {
        isActive = false;
        GetComponent<RectTransform>().DOKill();
        upgradeLabel.DOKill();
        timePanel.DOScaleX(0.0f, 1.0f);
        percentImage.fillAmount = 0;

        if (GameManager.Instance.playing) {
            Hide();
        }
        iconGroup.DOFade(.65f, 0.0f);

        if (doVideoAnim){
            DoVideoAnimOpen();
        }

    }

    private void DoVideoAnimOpen(){
        videoRT.DOAnchorPosX(0.0f,1.0f).ChangeStartValue(-30.0f);
        videoRT.DOAnchorPosY(0.0f, 1.0f).ChangeStartValue(-140.0f);

        videoRT.DOLocalRotate(Vector3.forward*25.0f,.60f).SetDelay(.5f).SetEase(Ease.OutElastic).ChangeStartValue(Vector3.forward * 25.0f);

        videoRT.DOScale(1.1f, 1.0f).SetLoops(-1, LoopType.Yoyo).SetEase(Ease.OutBounce).SetDelay(1.1f);

    }
    private void DoVideoAnimClose()
    {
        videoRT.DOKill();
        videoRT.DOAnchorPosX(-30.0f, .6f);
        videoRT.DOAnchorPosY(-140.0f, .6f);
        videoRT.DOLocalRotate(Vector3.forward * -55.0f, .70f);

    }

    public void Hide() {
            GetComponent<RectTransform>().DOScale(0.0f, 1.0f).SetEase(Ease.OutSine).OnComplete(()=> { gameObject.SetActive(false); });
    }

    public void OnClick() {
        switch (type)
        {
            case TempUpgradeType.CoinsMultiplier:
               RewardedAd.ShowCoinsBeforeLevelAd();
                break;
            default:
                break;
        }
    }

    private void OnEnable(){
        UpgradeManager.OnUpdateTempUpgrades += OnUpdateTempUpgrades;
    }


    private void OnDisable() {
        UpgradeManager.OnUpdateTempUpgrades -= OnUpdateTempUpgrades;
    
    }
}
