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

    public void OnClose()
    {
        group.alpha = 1;
        if (GameManager.Instance && GameManager.Instance.screenFadeController)
            StartCoroutine(FadeOutEnum());
    }

    IEnumerator FadeInEnum() {
        yield return GameManager.Instance.screenFadeController.FadeOut(fadeTime);
        group.alpha = 1;
        yield return GameManager.Instance.screenFadeController.FadeIn(fadeTime);
    }


    IEnumerator FadeOutEnum()
    {
        yield return GameManager.Instance.screenFadeController.FadeOut(fadeTime);
        group.alpha = 0;
        yield return GameManager.Instance.screenFadeController.FadeIn(fadeTime);
        this.gameObject.SetActive(false);
    }
}
