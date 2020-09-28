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

    // Start is called before the first frame update
    void Awake()
    {
        if (Instance)
            Destroy(this.gameObject);

        Instance = this;
        tmp = GetComponent<TextMeshProUGUI>();
        group = GetComponentInParent<CanvasGroup>();
        group.alpha = 0;
        secondaryGroup.alpha = 0;
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
        if (group.alpha > .75f) {
            group.alpha = 1.0f;
            return;
        }
        StartCoroutine(FadeInEnum());
    }
    public void FadeOut() {
        StartCoroutine(FadeOutEnum());

    }

    private IEnumerator FadeOutEnum() {
        if (group.alpha <= 0) yield return null;
        for (float a = 1; a > 1; a -= .1f)
        {
            yield return new WaitForSeconds(.05f);
            group.alpha = a;
        }
        group.alpha = 0;
    }
    private IEnumerator FadeInEnum() {
        if (group.alpha >= 1) yield return null;

        for (float a = 0; a < 1; a += .1f)
        {
            yield return new WaitForSeconds(.05f);
            group.alpha = a;
            secondaryGroup.alpha = a / 4.0f;

        }

        for (float a = secondaryGroup.alpha; a < 1; a += .1f)
        {
            yield return new WaitForSeconds(.03f);
            secondaryGroup.alpha = a;
        }

        group.alpha = 1;
        secondaryGroup.alpha = 1;

    }


}
