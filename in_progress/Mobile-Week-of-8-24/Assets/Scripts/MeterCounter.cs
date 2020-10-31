using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class MeterCounter : MonoBehaviour
{
    public static MeterCounter Instance;
    [SerializeField]
    Gradient speedColor;
    
    TextMeshProUGUI tmp;

    [SerializeField]
    CanvasGroup secondaryGroup;

    CanvasGroup group;

    public static bool isShown = false;
    

    // Start is called before the first frame update
    void Awake()
    {
        if (Instance)
            Destroy(this.gameObject);

        Instance = this;
        tmp = GetComponent<TextMeshProUGUI>();
        group = GetComponentInParent<CanvasGroup>();
        isShown = false;

        transform.parent.GetComponent<RectTransform>().DOAnchorPosY(300.0f, 0);
        foreach (var rt in secondaryGroup.GetComponentsInChildren<RectTransform>())
        {
            if (rt.gameObject.Equals(secondaryGroup.gameObject) ||rt.GetComponent<UnityEngine.UI.Text>()!=null ) continue;
            rt.DOScaleX(0.0f, 0.0f);
        }
    }

    // Update is called once per frame
    void Update()
    {
        float colorIndex = GameManager.GetNormalizedSpeed();
        Color targetColor = speedColor.Evaluate(colorIndex);
        tmp.color = Color.Lerp(tmp.color,targetColor, Time.deltaTime * 4.0f);


        tmp.text = string.Format("{0}m", Mathf.FloorToInt(GameManager.meters).ToString());
    }

    public void FadeIn() {
        if (isShown) return;
        isShown = true;
        group.DOFade(1.0f,.85f).ChangeStartValue(0.0f);
        transform.parent.GetComponent<RectTransform>().DOAnchorPosY(-33.0f, .85f).SetEase(Ease.OutBounce).ChangeStartValue(300.0f);


        if (Screen.width < Screen.height)
        {
            foreach (var rt in secondaryGroup.GetComponentsInChildren<RectTransform>())
            {
                if (rt.gameObject.Equals(secondaryGroup.gameObject) || rt.GetComponent<UnityEngine.UI.Text>() != null) continue;
                rt.DOScaleX(1.0f, .3f).SetDelay(.85f).ChangeStartValue(0.0f);
            }
        }
    }   


    public void FadeOut() {
        isShown = false;
        foreach (var rt in secondaryGroup.GetComponentsInChildren<RectTransform>()){
            if (rt.gameObject.Equals(secondaryGroup.gameObject)) continue;
            rt.DOScaleX(0.0f, .3f);
        }
        group.DOFade(0.0f, .85f).SetDelay(.35f);
        transform.parent.GetComponent<RectTransform>().DOAnchorPosY(300.0f,1.0f).SetDelay(.35f);
    }

   


}
