using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(CanvasGroup))]
public class FadeOnActive : MonoBehaviour
{
    [SerializeField]
    float fadeTime = .25f;
    CanvasGroup group;

    private void Awake()
    {
        group = GetComponent<CanvasGroup>();
    }

    private void OnEnable()
    {
        group.alpha = 0;
        if (GameManager.Instance && GameManager.Instance.screenFadeController)
            StartCoroutine(FadeInEnum());
    }

    public void OnClose(float overrideV)
    {
        group.alpha = 1;
        if (GameManager.Instance && GameManager.Instance.screenFadeController)
            StartCoroutine(FadeOutEnum(overrideV));
    }

    IEnumerator FadeInEnum(float overrideV = -1) {
        if (overrideV == -1)
            overrideV = fadeTime;
        yield return GameManager.Instance.screenFadeController.FadeOut(overrideV);
        group.alpha = 1;
        yield return GameManager.Instance.screenFadeController.FadeIn(overrideV);
    }


    IEnumerator FadeOutEnum(float overrideV = -1)
    {
        if (overrideV == -1)
            overrideV = fadeTime;
        yield return GameManager.Instance.screenFadeController.FadeOut(overrideV);
        group.alpha = 0;
        yield return GameManager.Instance.screenFadeController.FadeIn(overrideV);
        this.gameObject.SetActive(false);
    }
}
