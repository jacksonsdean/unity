using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PreventMultipleClicks : MonoBehaviour
{
    [SerializeField]
    float refactoryPeriod = 2;
    [SerializeField]
    bool showCountDown = false;
    [SerializeField]
    TextMeshProUGUI countdown;

    [SerializeField]
    RectTransform[] showOnTimer=null;
    [SerializeField]
    RectTransform[] hideOnTimer=null;
    [SerializeField]
    string timeLeftPrefId = "";

    string timeLeftPrefIdPrefix = "prevent-click-time-";
    string timeLeftPrefIdBegin = "begin-";
    string timeLeftPrefIdTimeLeft = "left-";

    float timeLeft = 0.0f;
    bool countingDown = false;
    string timeSavedKey = "";
    string timeLeftKey =  "";
    private void Awake()
    {
        countdown?.GetComponent<RectTransform>().DOScale(0, 0.0f);
       if(showCountDown) CheckSaved();
    }


    public void OnClick() {
        GetComponent<Button>().interactable = false;
        //Invoke("EnableClick", refactoryPeriod);
        UIAudioManager.PlayClickSound();

        timeLeft = refactoryPeriod;
        if (showCountDown){
            BeginCountDown();
        }
        else {
            DOTween.To(() => timeLeft, (float x) => { timeLeft = x; }, 0.0f, refactoryPeriod).OnComplete(EnableClick);
        
        }

    }
    private void BeginCountDown()
    {
        countingDown = true;
        ShowTimer();
        DOTween.To(() => timeLeft, (x) => { timeLeft = x; }, 0.0f, timeLeft)
            .SetEase(Ease.Linear)
            .OnUpdate(() => {
                TimeSpan time = TimeSpan.FromSeconds(timeLeft);
                countdown.text = string.Format("{0:D2}:{1:D2}", time.Minutes, time.Seconds);
            })
            .OnComplete(FinishCountDown);
    }

    private void FinishCountDown()
    {
        EnableClick();
        PlayerPrefs.DeleteKey(timeLeftPrefIdPrefix + timeLeftPrefIdBegin + timeLeftPrefId);
        PlayerPrefs.DeleteKey(timeLeftPrefIdPrefix + timeLeftPrefIdTimeLeft + timeLeftPrefId);
        PlayerPrefs.Save();
    }

    void EnableClick() {
        GetComponent<Button>().interactable = true;
        if (showCountDown) {
            HideTimer();
        }

    }

    private void ShowTimer()
    {

        foreach (var item in showOnTimer){
            item.DOScale(1.0f, 1.0f);
        }
        foreach (var item in hideOnTimer) {
            item.DOScale(0.0f, 1.0f);
        }
    }

    private void HideTimer()
    {
        foreach (var item in hideOnTimer)
        {
            item.DOScale(1.0f, 1.0f);
        }
        foreach (var item in showOnTimer)
        {
            item.DOScale(0.0f, 0.5f);
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        GetComponent<Button>().onClick.AddListener(OnClick);
    }

 

    private double GetSystemTime() {
        TimeSpan span = DateTime.UtcNow.Subtract(new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc));
        return span.TotalSeconds;
    }

    private void SaveTime()
    {
        if (!showCountDown || timeLeftKey.Equals(string.Empty)) return;
        SetKeys();
        if (timeLeft > 0.01f)
        {
            PlayerPrefs.SetString(timeSavedKey, GetSystemTime().ToString());
            PlayerPrefs.SetString(timeLeftKey, timeLeft.ToString());
            PlayerPrefs.Save();
        }
        else {
            ClearPrefs();
        }
     

    }


    private void ClearPrefs() {
        if (!showCountDown || timeLeftKey.Equals(string.Empty)) return;
        PlayerPrefs.DeleteKey(timeSavedKey);
        PlayerPrefs.DeleteKey(timeLeftKey);
    }

    private void SetKeys() {
        timeSavedKey = timeLeftPrefIdPrefix + timeLeftPrefIdBegin + timeLeftPrefId;
        timeLeftKey = timeLeftPrefIdPrefix + timeLeftPrefIdTimeLeft + timeLeftPrefId;
    }

    private void OnEnable()
    {
        if (showCountDown)
        {

            SetKeys();
            CheckSaved();
        }
    }

    private void CheckSaved()
    {
        SetKeys();
        double timeSaved = double.Parse(PlayerPrefs.GetString(timeSavedKey, "0"));
        double timeLeftLastSave = double.Parse(PlayerPrefs.GetString(timeLeftKey, "0"));
        double sysTimeNow = GetSystemTime();

        double timePassed = sysTimeNow - timeSaved;

        double timeLeftDouble = timeLeftLastSave - timePassed;

        if (showCountDown && timeLeftDouble > 0.01d)
        {
            timeLeft = timeLeftDouble > float.MaxValue ? 0.0f : (float)timeLeftDouble;
            GetComponent<Button>().interactable = false;
            BeginCountDown();
        }
        ClearPrefs();
    }

    private void OnDisable()
    {
        SaveTime();
    }

    void OnApplicationQuit(){
        SaveTime();
    }

}
