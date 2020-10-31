using DG.Tweening;
using GameAnalyticsSDK.Setup;
using System;
using System.Collections;
using System.Globalization;
using TMPro;
using UnityEngine;
using UnityEngine.GameFoundation;
using UnityEngine.GameFoundation.UI;
using UnityEngine.PlayerLoop;

public class CurrencyText : MonoBehaviour
{

    [SerializeField]
    float updateTime = 1.0f;

    [SerializeField]
    private bool beginOnStart = true;

    [SerializeField]
    private bool isCurrency = true;

    CurrencyHudView view;
    TextMeshProUGUI textMP;

    RectTransform rectTransform;

    string mPrefix = "";
    string mPostfix = "";

    AudioClip clip = null;

    AudioSource audioSource;
    private int soundFreq;

    private long currentValue = 0;
    // Start is called before the first frame update
    void Awake()
    {
        view = GetComponentInParent<CurrencyHudView>();
        textMP = GetComponent<TextMeshProUGUI>();
        rectTransform = GetComponent<RectTransform>();

        audioSource = GetComponent<AudioSource>()? GetComponent<AudioSource>() : gameObject.AddComponent<AudioSource>();
    }
    private void Start()
    {
        if(beginOnStart)
            UpdateQuantity(0, WalletManager.GetBalance(GameFoundation.catalogs.currencyCatalog.FindItem(view.currencyKey)));
    }

    public void UpdateQuantity(long oldBalance, long newBalance, float time = 1.0f, string prefix = "", string postfix = "", AudioClip soundClip = null, int soundFreq = 3)
    {
        clip = soundClip;
        this.soundFreq = soundFreq == 0 ? 1 : soundFreq;
        updateTime = time;
        mPrefix = prefix;
        mPostfix = postfix;
        StopAllCoroutines();
        rectTransform.DOKill();
        rectTransform.DOScale(1.2f, updateTime / 2.1f).SetEase(Ease.OutElastic);
        StartCoroutine(UpdateTextEnum(oldBalance, newBalance));
        rectTransform.DOScale(1.0f, updateTime / 2.1f).SetDelay(updateTime/2.0f);
    }

    IEnumerator UpdateTextEnum(long oldBalance, long newBalance) {
        float startTime = Time.time;
        float endTime = startTime + updateTime;
        long nUpdates = Math.Abs(newBalance - oldBalance);

        float interval =  updateTime / (float)nUpdates;
        long currentVal = oldBalance;
        
        float minInterval = Time.smoothDeltaTime == 0 ? 1.0f / 60.0f : Time.smoothDeltaTime; //Smooth delta time is 0 on first frame
        long increaseAmt = 1;
        if (interval < minInterval) {
            // needs to update faster than framerate
            nUpdates = (long)(updateTime * (1.0f/ minInterval));
            long delta = Math.Abs(newBalance - oldBalance);
            increaseAmt = delta / nUpdates;
            interval = minInterval;
        }
        textMP.text = mPrefix + currentVal.ToString() + mPostfix;

        // Invert if we are subtracting
        if (newBalance < oldBalance) {
            increaseAmt *= -1;
        }
        int iter = 0;
        while (currentVal!=newBalance && iter<100000) {
            if (clip != null && iter%soundFreq==0) audioSource.PlayOneShot(clip);
            currentVal+=increaseAmt;
            currentValue = currentVal;
            if (increaseAmt > 0 && currentVal > newBalance) currentVal = newBalance;
            else if (increaseAmt < 0 && currentVal < newBalance) currentVal = newBalance;
            textMP.text = mPrefix+currentVal.ToString()+mPostfix;
            yield return new WaitForSeconds(interval);
            iter++;
        }



    }
    void OnCurrencyChanged(BalanceChangedEventArgs args) {
        if (!isCurrency) return;
        if (args.currency == null || args.currency.key != view.currencyKey)
        {
            return;
        }

        UpdateQuantity(args.oldBalance, args.newBalance);
    }

    private void TriggerUpdate() {
        long oldBal = currentValue;
        Currency currency = GameFoundation.catalogs.currencyCatalog.FindItem(view.currencyKey);
        long newBal = WalletManager.GetBalance(currency);

        UpdateQuantity(oldBal,newBal);
    }

    private void OnEnable()
    {
        WalletManager.balanceChanged += OnCurrencyChanged;
        GameFoundationManager.OnLoadedDataFromDisk += TriggerUpdate;

    }

    private void OnDisable()
    {
        WalletManager.balanceChanged -= OnCurrencyChanged;
        GameFoundationManager.OnLoadedDataFromDisk -= TriggerUpdate;

    }
}
