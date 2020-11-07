using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{
    public static bool ready = false;
    Animator animator;

    [SerializeField]
    GameObject options = null;
    [SerializeField]
    GameObject inventory = null;
    [SerializeField]
    GameObject store = null;
    [SerializeField]
    GameObject buttons = null;

    [SerializeField]
    RectTransform title = null;
    [SerializeField]
    RectTransform upgradeBar = null;

    [SerializeField]
    GameObject upgrades = null;
    [SerializeField]
    SetInteractiveShaderEffects rippleCameraGame = null;
    [SerializeField]
    SetInteractiveShaderEffects rippleCameraUI = null;


    public delegate void CloseMainMenuAction(float punchTime);
    public static event CloseMainMenuAction OnClose;



    // Start is called before the first frame update
    void Awake() {
        animator = GetComponent<Animator>();
        ready = false;
        store.SetActive(false);
        inventory.SetActive(false);
        options.SetActive(false);
        upgrades.SetActive(false);

        Options.Instance = options.GetComponent<Options>();
        Options.LoadFromSave();

        DOTween.SetTweensCapacity(500, 50);

    }
    private void Start(){
        //rippleCameraGame.gameObject.SetActive(false);
        //rippleCameraUI.gameObject.SetActive(true);

        DoOpenAnimation();


    }
    public void OnClickStart() {
        foreach (Transform item in buttons.transform){
           if(item.GetComponent<Button>())
                item.GetComponent<Button>().enabled = false;
        }
        AnalyticsManager.LogUI("mainMenuStart", DesignEventType.Clicked);
        UIAudioManager.PlayClickSound();
        DoStartGameAnimation();
    }

    public void OnClickInventory() {
        UIAudioManager.PlayClickSound();
        RectTransform rt = inventory.GetComponent<RectTransform>();

        if (inventory && !inventory.activeSelf){
            OpenUI(rt);
            AnalyticsManager.LogUI("mainMenuInventory", DesignEventType.Clicked);

        }
        else{
            CloseUI(rt);
            AnalyticsManager.LogUI("mainMenuInventory", DesignEventType.Closed);
        }
    }



    public void OnClickOptions() {
        UIAudioManager.PlayClickSound();
        RectTransform rt = options.GetComponent<RectTransform>();
        if (!options.activeSelf)
        {
            OpenUI(rt);
            options.GetComponent<Options>().OnOpen();
            AnalyticsManager.LogUI("mainMenuOptions", DesignEventType.Clicked);

        }
        else
        {
            options.GetComponent<Options>().OnClose();
            ShowUpgradeBar();
            AnalyticsManager.LogUI("mainMenuOptions", DesignEventType.Closed);
        }
    }

    private void HideUpgradeBar()
    {
        upgradeBar.DOAnchorPosX(500.0f,1.0f).SetRelative(true);
    }

    private void ShowUpgradeBar()
    {
        upgradeBar.DOAnchorPosX(-20.0f, 1.0f).SetRelative(false);
    }

    public void OnOutAnimDone() {
        if (ready)
            GameManager.Instance.FirstStart();
        //rippleCameraUI.gameObject.SetActive(false);
        //rippleCameraGame.gameObject.SetActive(true);


    }

    public void OnClickLeaderboard() {
        UIAudioManager.PlayClickSound();
        LeaderboardManager.current.ShowLeaderboard();
        AnalyticsManager.LogUI("mainMenuLeaderboard", DesignEventType.Clicked);

    }

    public void OnMenuReady() {
        ready = true;
    }

    public void OnClickStore() {
        UIAudioManager.PlayClickSound();
     
        RectTransform rt = store.GetComponent<RectTransform>();

        if (!store.activeSelf)
        {
            OpenUI(rt);
            AnalyticsManager.LogUI("mainMenuStore", DesignEventType.Clicked);

        }
        else
        {
            CloseUI(rt);
            AnalyticsManager.LogUI("mainMenuStore", DesignEventType.Closed);
        }
    }

    public void OnClickGallery(){
        UIAudioManager.PlayClickSound();
        GameManager.Instance.LoadLevel("Gallery");
        AnalyticsManager.LogUI("mainMenuGallery", DesignEventType.Clicked);

    }

    public void OnClickUpgrades() {
        UIAudioManager.PlayClickSound();
        RectTransform rt = upgrades.GetComponent<RectTransform>();

        if (upgrades.activeSelf) {
            CloseUI(rt);
            AnalyticsManager.LogUI("mainMenuUpgrades", DesignEventType.Closed);
        }
        else
        {
            OpenUI(rt);
            AnalyticsManager.LogUI("mainMenuUpgrades", DesignEventType.Clicked);
            UpgradeManager.ResetUpgrades();
        }
    }

    private void OpenUI(RectTransform rt) {
        rt.gameObject.SetActive(true);
        rt.DOScale(0, 0);
        rt.DOScale(1, .65f).SetEase(Ease.OutCubic);
        HideUpgradeBar();

    }

    private void CloseUI(RectTransform rt) {
        //rt.GetComponent<FadeOnActive>()?.OnClose(.35f/2.0f);
        rt.DOScaleY(0, .65f).OnComplete(() => { rt.gameObject.SetActive(false); });
        //rt.DOScaleX(0, 2.0f);
        CanvasGroup g = null;
        g = rt.GetComponent<CanvasGroup>();
        if(!g) g = rt.gameObject.AddComponent<CanvasGroup>();
        //g.DOFade(0,2.0f).SetEase(Ease.OutExpo);
        ShowUpgradeBar();

    }


    private void DoOpenAnimation()
    {
        float delay = ScreenFadeController.GetFadeTime()*.85f;
        const float inTime = 1.0f;
        const float punchTime = .8f;
        animator.SetBool("DoIdle", true);
        GetComponent<CanvasGroup>().DOFade(1.0f, inTime)
            .ChangeStartValue(1.0f)
            .SetDelay(delay)
            .OnComplete(()=>{ OnMenuReady();  });

        title.DOAnchorPosY(title.anchoredPosition.y, inTime)
            .SetDelay(delay)
            .ChangeStartValue(new Vector2(0.0f,1000.0f));


        DOTween.To(
      () =>
          title.GetComponent<TextMaterialProps>().faceDilation,
          (x) => title.GetComponent<TextMaterialProps>().faceDilation = x,
          1.0f, inTime).ChangeStartValue(-1.0f).SetDelay(delay);

        //title
        DOTween.To(
            () =>
                title.GetChild(0).GetComponent<TextMaterialProps>().faceDilation,
                x => title.GetChild(0).GetComponent<TextMaterialProps>().faceDilation = x,
                .005f, inTime).ChangeStartValue(-1.0f).SetDelay(delay);

        //Buttons
        buttons.GetComponent<CanvasGroup>().DOFade(1.0f, 0.0f)
            .ChangeStartValue(0.0f);
        foreach (RectTransform item in buttons.transform)
        {
            item.DOScale(1.0f, punchTime).ChangeStartValue(Vector3.one*.2f).SetEase(Ease.OutSine).SetDelay(delay+punchTime);
            item.DOScale(1.15f, 1.1f).SetLoops(2, LoopType.Yoyo).SetDelay(2.0f*punchTime+delay).SetEase(Ease.InOutSine);

            foreach (Transform itemChild in item.transform)
            {
                RectTransform childRT = itemChild.GetComponent<RectTransform>();

                childRT.DOPunchScale(Vector3.forward * UnityEngine.Random.Range(.9f, 1.2f), punchTime)
                    .SetDelay(delay+ punchTime);
            }
        }

    }


    private void DoStartGameAnimation() {
        animator.SetBool("DoIdle", false);
        animator.enabled = false;
        const float outTime = 2.0f;
        const float punchTime = .3f;
        OnClose?.Invoke(punchTime);
        RectTransform menuRT = GetComponent<RectTransform>();

        //Title
        //title.DOAnchorPosY(-1200.0f, outTime * 1.8f)
        //    .SetDelay(punchTime)
        //    .SetEase(Ease.InSine);
        title.DOAnchorPosY(-200.0f, outTime * 1.8f)
            .SetLoops(3, LoopType.Yoyo)
            .SetRelative(true)
            .SetDelay(punchTime)
            .SetEase(Ease.InSine);


        title.DOScale(.80f, punchTime)
                .SetEase(Ease.OutBack);

        title.DOScale(.73f, 1.7f).SetLoops(-1, LoopType.Yoyo).SetDelay(punchTime).SetEase(Ease.InOutSine);

        //title.DOScale(0.0f, outTime*2.0f)
        //    .SetDelay(punchTime)
        //      .SetEase(Ease.InSine);
        //bkg
        DOTween.To(
       () =>
           title.GetComponent<TextMaterialProps>().faceDilation,
           (x) => title.GetComponent<TextMaterialProps>().faceDilation = x,
           -1.0f, outTime*2.0f)
        .SetDelay(punchTime*2.0f)
        .OnComplete(() => { gameObject.SetActive(false); });

        //title
        DOTween.To(
            () =>
                title.GetChild(0).GetComponent<TextMaterialProps>().faceDilation,
                x => title.GetChild(0).GetComponent<TextMaterialProps>().faceDilation = x,
                -1.0f, outTime*3.0f - punchTime)
            .SetDelay(punchTime*4.0f);


        //Buttons

        buttons.GetComponent<CanvasGroup>().DOFade(1.0f, outTime)
            .SetDelay(punchTime)
            .OnComplete(() => { OnOutAnimDone(); });


        foreach (RectTransform item in buttons.transform)
        {
            item.DOKill();
            item.DOPunchRotation(Vector3.forward * UnityEngine.Random.Range(-10.0f, 10.0f), punchTime / 1.5f);

            item.DOScale(.90f, punchTime*2.0f)
                .SetEase(Ease.InOutSine)
                .SetDelay(punchTime/2.1f);

            item.DOAnchorPosY(item.anchoredPosition.y - UnityEngine.Random.Range(1400.0f, 1800.0f), outTime*1.2f)
                .SetDelay(punchTime / 2.0f)
                .SetEase(Ease.InSine);

            item.DOScale(.87f, 1.1f).SetLoops(-1, LoopType.Yoyo).SetDelay(punchTime).SetEase(Ease.InOutSine);

            foreach (Transform itemChild in item.transform)
            {
                RectTransform childRT = itemChild.GetComponent<RectTransform>();
                if (itemChild.CompareTag("Ripples"))
                {
                    //childRT.DOAnchorPosY(childRT.anchoredPosition.y - 900.0f, outTime)
                    //    .SetDelay(punchTime / 2.6f)
                    //    .SetEase(Ease.InSine);

                    var emission = itemChild.GetComponent<ParticleSystem>().emission;
                    emission.rateOverTimeMultiplier = .3f;
                    emission.rateOverDistanceMultiplier = .3f;
                }
                else
                {

                    childRT.DOPunchRotation(Vector3.forward * UnityEngine.Random.Range(-10.0f, 10.0f), punchTime / 2.0f);
                    childRT.DOPunchScale(Vector3.forward * UnityEngine.Random.Range(.9f, 1.2f), punchTime)
                        .SetDelay(punchTime / 2.1f);

                    childRT.DOAnchorPosY(childRT.anchoredPosition.y + 70.0f, outTime)
                        .SetDelay(punchTime / 2.0f)
                        .SetEase(Ease.InSine);
                }
            }
        }
        // Temp upgrades
        TemporaryUpgrade[] upgrades = GameObject.FindObjectsOfType<TemporaryUpgrade>();
        foreach (var item in upgrades)
        {
            if (!item.isActive)
            {
                item.Hide();
            }
        }
    
    }

}
