using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public enum OptionsState {
    Closed, Opened,
    Ready
}
public class Options : MonoBehaviour
{
    private readonly string PREF_QUALITY = "Quality Level";
    private readonly string PREF_SFX = "SFX Volume";
    private readonly string PREF_MUSIC = "Music Volume";
    private readonly string PREF_ZEN = "Zen Mode Enabled";

    public static Options Instance;

    public static OptionsState state = OptionsState.Closed;

    public static bool zenMode => Instance._zenMode;
    private bool _zenMode = false;

    [SerializeField]
    ToggleGroup gfxToggleGroup;

    [SerializeField]
    AudioManager audioManager;

    [SerializeField]
    Slider musicSlider;
    [SerializeField]
    Slider sfxSlider;
    [SerializeField]
    AudioClip sfxTestClip;

    AudioSource audioSource;

    [SerializeField]
    Toggle zenToggle;

    int _prevGFXQuality = 1;

    bool _playTestSFXFlag = false;
    float lastTestTime = 0;

    float _openedTime = float.MaxValue;
    // Start is called before the first frame update
    void Awake()
    {

        audioSource = GetComponent<AudioSource>();
        ReadSaved();
    }

    internal void OnOpen()
    {
        state = OptionsState.Opened;
        lastTestTime = Time.time;
        _openedTime = Time.time;
    }

    // Update is called once per frame
    void Update()
    {
        if (_playTestSFXFlag && state == OptionsState.Ready)
        {
            if (Time.time > lastTestTime + 1.0f)
            {
                _playTestSFXFlag = false;
                lastTestTime = Time.time;
                audioSource.PlayOneShot(sfxTestClip);
            }
        }
        if (state == OptionsState.Opened) state = OptionsState.Ready;
    }

    void CloseComplete() {
        gameObject.SetActive(false);
    }
    internal void OnClose()
    {
        state = OptionsState.Closed;
        GetComponent<RectTransform>().DOScale(Vector3.zero, .35f).OnComplete(CloseComplete);
        PlayerPrefs.Save();

    }
    private void OnEnable()
    {
      
        //GetComponent<RectTransform>().DOScale(Vector3.one, .85f).SetEase(Ease.OutBounce);
    }

    public static void LoadFromSave() {
        Instance.ReadSaved();
    }
    public void ReadSaved() {
        // GFX Quality:
        int qualityIndex = PlayerPrefs.GetInt(PREF_QUALITY, 1); // default quality is 1/2
        _prevGFXQuality = qualityIndex;
        gfxToggleGroup.GetComponentsInChildren<Toggle>()[qualityIndex].isOn = true;
        gfxToggleGroup.GetComponentsInChildren<Toggle>()[qualityIndex].group.RegisterToggle(gfxToggleGroup.GetComponentsInChildren<Toggle>()[qualityIndex]);
        gfxToggleGroup.GetComponentsInChildren<Toggle>()[qualityIndex].group.NotifyToggleOn(gfxToggleGroup.GetComponentsInChildren<Toggle>()[qualityIndex]);


        //Audio
        musicSlider.minValue = 0;
        musicSlider.maxValue = 1;
        sfxSlider.minValue = 0;
        sfxSlider.maxValue = 1;
        float music = PlayerPrefs.GetFloat(PREF_MUSIC, AudioManager.GetMaxMusicVolume());
        float sfx = PlayerPrefs.GetFloat(PREF_SFX, AudioManager.GetSFXVolume());
        musicSlider.value = music;
        sfxSlider.value = sfx;
        AudioManager.SetMaxMusicVolume(music);
        AudioManager.SetSFXVolume(sfx);


        // Zen
        zenToggle.isOn = PlayerPrefs.GetInt(PREF_ZEN, 0) == 1;


        ToggleShine();
            
    }

    void ConfirmQuality(int index) {
        PlayerPrefs.SetInt(PREF_QUALITY, index);
        // Not saving here in case it crashes

        QualitySettings.SetQualityLevel(index);
        ToggleShine();
        _prevGFXQuality = index;

    }

    void OnConfirmQualityWarning(GameObject gameObject) {
        int val = 2;
        ConfirmQuality(val); // 2 is high graphics
        AnalyticsManager.LogUI("optionsQualityHighConfirmed", DesignEventType.Clicked);

    }

    void OnDeclineQualityWarning(GameObject gameObject)
    {
        int val = _prevGFXQuality == 2 ? 1 : _prevGFXQuality;
        ConfirmQuality(val); // 1 is med graphics, 2 is high
        UpdateQualityToggles(val);
        AnalyticsManager.LogUI("optionsQualityHighDeclined", DesignEventType.Clicked);

    }

    void UpdateQualityToggles(int val) {
        if (!gfxToggleGroup.GetComponentsInChildren<Toggle>()[val].isOn)
        {
            gfxToggleGroup.GetComponentsInChildren<Toggle>()[val].isOn = true;
            gfxToggleGroup.GetComponentsInChildren<Toggle>()[val].group.RegisterToggle(gfxToggleGroup.GetComponentsInChildren<Toggle>()[val]);
            gfxToggleGroup.GetComponentsInChildren<Toggle>()[val].group.NotifyToggleOn(gfxToggleGroup.GetComponentsInChildren<Toggle>()[val]);
        }
    }

    public void OnToggleQuality(int index) {
        if (state == OptionsState.Ready)
            UIAudioManager.PlayClickSound();
        if (gfxToggleGroup.GetComponentsInChildren<Toggle>()[index].isOn)
        {
            if (index == 2 && _prevGFXQuality !=2 && state == OptionsState.Ready)
            {
                // High quality, show warning
                PopupBuilder p = new PopupBuilder();
                p.title = "Are you sure?";
                p.text = "High graphics requires a very powerful device and may slow down the game";
                p.confirmCallback = OnConfirmQualityWarning;
                p.declineCallback = OnDeclineQualityWarning;
                p.showConfirmButton = true;
                p.showDeclineButton = true;
                p.Show();

                AnalyticsManager.LogUI("optionsQualityHigh", DesignEventType.Clicked);
            }
            else if (index == 0) {
                ConfirmQuality(index);
                if(state == OptionsState.Ready)
                    AnalyticsManager.LogUI("optionsQualityLow", DesignEventType.Clicked);

            }
            else if(index==1)
            {
                ConfirmQuality(index);
                if (state == OptionsState.Ready)
                    AnalyticsManager.LogUI("optionsQualityMed", DesignEventType.Clicked);

            }
        }

    }

    private void ToggleShine()
    {
        Toggle[] toggles = GetComponentsInChildren<Toggle>();
        foreach (var toggle in toggles)
        {
            foreach (Image img in toggle.GetComponentsInChildren<Image>())
            {
                if(img.gameObject.CompareTag("Checkmark Shine"))
                    img.enabled = toggle.isOn;
            }
        }
    }

    public void OnSetMusicVolume(float v) {
        AudioManager.SetMaxMusicVolume(v);
        PlayerPrefs.SetFloat(PREF_MUSIC, v);
        PlayerPrefs.Save();
        if (state == OptionsState.Ready)
            AnalyticsManager.LogUI("optionsSetMusicVolume", DesignEventType.Clicked);

    }

    public void OnSetSFXVolume(float v) {
        AudioManager.SetSFXVolume(v);
        PlayerPrefs.SetFloat(PREF_SFX, v);
        PlayerPrefs.Save();
        if (!audioSource) audioSource = GetComponent<AudioSource>();
        audioSource.volume = v;
        if (state == OptionsState.Ready){
            _playTestSFXFlag = true;
            AnalyticsManager.LogUI("optionsSetSFXVolume", DesignEventType.Clicked);
        }

    }

    public void OnToggleZenMode(bool t) {
        _zenMode = t;
        PlayerPrefs.SetInt(PREF_ZEN, t?1:0);
        PlayerPrefs.Save();
        ToggleShine();
        if (state == OptionsState.Ready)
            AnalyticsManager.LogUI("optionsZenModeToggle", DesignEventType.Clicked);


    }

    public void OnClickZenModeInfo() {
        PopupBuilder b = new PopupBuilder();
        b.title = "Zen Mode";
        b.text = "Enable zen mode to remove the user interface and slow down the game.\n\nMakes the experience easier and more relaxing, but you will get less coins.";
        AnalyticsManager.LogUI("optionsZenModeInfo", DesignEventType.Clicked);

        PopupManager.ShowPopup(b);
    }



    public void OnCredits()
    {
        PopupBuilder b = new PopupBuilder();
        b.title = "Credits";
        b.text = Resources.Load<TextAsset>("Credits").text;
        b.textSize = 60;
        b.textAlignment = TMPro.TextAlignmentOptions.Left;
        PopupManager.ShowPopup(b);
        AnalyticsManager.LogUI("optionsCredits", DesignEventType.Clicked);

    }

}
