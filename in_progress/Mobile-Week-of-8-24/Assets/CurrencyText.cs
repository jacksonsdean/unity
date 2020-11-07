using DG.Tweening;
using System;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.GameFoundation;
using UnityEngine.GameFoundation.UI;

public class CurrencyText : MonoBehaviour
{

    [SerializeField]
    float updateTime = 1.0f;

    [SerializeField]
    private bool beginOnStart = true;

    [SerializeField]
    private bool isCurrency = true;

    [SerializeField]
    bool mShortenLargeNumbers = false;

    CurrencyHudView view;
    TextMeshProUGUI textMP;

    RectTransform rectTransform;

    string mPrefix = "";
    string mPostfix = "";

    AudioClip clip = null;

    AudioSource audioSource;
    private int soundFreq;

    private long currentValue = 0;
    private bool updating;

    // Start is called before the first frame update
    void Awake()
    {
        view = GetComponentInParent<CurrencyHudView>();
        textMP = GetComponent<TextMeshProUGUI>();
        rectTransform = GetComponent<RectTransform>();

        audioSource = GetComponent<AudioSource>() ? GetComponent<AudioSource>() : gameObject.AddComponent<AudioSource>();
        audioSource.playOnAwake = false;
    }
    private void Start()
    {
        if (beginOnStart)
            UpdateQuantity(0, WalletManager.GetBalance(GameFoundation.catalogs.currencyCatalog.FindItem(view.currencyKey)));
    }

    public void UpdateQuantity(long oldBalance, long newBalance, float time = 1.0f, bool shortenLarge = false, string prefix = "", string postfix = "", AudioClip soundClip = null, int soundFreq = 3, float delay =0.0f)
    {
        clip = soundClip;
        this.soundFreq = soundFreq == 0 ? 1 : soundFreq;
        updateTime = time;
        mPrefix = prefix;
        mPostfix = postfix;
        mShortenLargeNumbers = shortenLarge;
        if (updating)
        {
            StopAllCoroutines();
            SetText(oldBalance);

        }
        rectTransform.DOKill();
        rectTransform.DOScale(1.2f, updateTime / 2.1f).SetEase(Ease.OutElastic).SetDelay(delay);
        StartCoroutine(UpdateTextEnum(oldBalance, newBalance, delay));
        rectTransform.DOScale(1.0f, updateTime / 2.1f).SetDelay(delay +updateTime / 2.0f);
    }

    IEnumerator UpdateTextEnum(long oldBalance, long newBalance, float delay=0.0f)
    {
        updating = true;
        yield return new WaitForSeconds(delay);
        float startTime = Time.time;
        float endTime = startTime + updateTime;
        long nUpdates = Math.Abs(newBalance - oldBalance);

        float interval = updateTime / (float)nUpdates;
        long currentVal = oldBalance;

        float minInterval = Time.smoothDeltaTime == 0 ? 1.0f / 60.0f : Time.smoothDeltaTime; //Smooth delta time is 0 on first frame
        long increaseAmt = 1;
        if (interval < minInterval)
        {
            // needs to update faster than framerate
            nUpdates = (long)(updateTime * (1.0f / minInterval));
            long delta = Math.Abs(newBalance - oldBalance);
            increaseAmt = delta / nUpdates;
            interval = minInterval;
        }

        SetText(currentVal);

        // Invert if we are subtracting
        if (newBalance < oldBalance)
        {
            increaseAmt *= -1;
        }
        int iter = 0;
        while (currentVal != newBalance && iter < 100000)
        {
            if (clip != null && iter % soundFreq == 0) audioSource.PlayOneShot(clip);
            currentVal += increaseAmt;
            currentValue = currentVal;
            if (increaseAmt > 0 && currentVal > newBalance) currentVal = newBalance;
            else if (increaseAmt < 0 && currentVal < newBalance) currentVal = newBalance;
            SetText(currentVal);
            yield return new WaitForSeconds(interval);
            iter++;
        }

        updating = false;

    }

    private void SetText(long currentVal)
    {
        if (mShortenLargeNumbers && currentVal > 9999)
        {
            textMP.text = mPrefix + (currentVal / 1000).ToString() + "K " + mPostfix;
        }
        else
        {
            textMP.text = mPrefix + currentVal.ToString() + mPostfix;
        }
    }

    void OnCurrencyChanged(BalanceChangedEventArgs args)
    {
        if (!isCurrency) return;
        if (args.currency == null || args.currency.key != view.currencyKey)
        {
            return;
        }

        UpdateQuantity(args.oldBalance, args.newBalance);
    }

    private void TriggerUpdate()
    {
        if (!GameFoundation.IsInitialized || !view || view.currencyKey == string.Empty) return;
        long oldBal = currentValue;
        Currency currency = GameFoundation.catalogs.currencyCatalog.FindItem(view.currencyKey);
        long newBal = WalletManager.GetBalance(currency);

        UpdateQuantity(oldBal, newBal);
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
