using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenFadeController : MonoBehaviour
{
    CanvasGroup group;

    [SerializeField]
    float fadeTime = .5f;

    [SerializeField]
    float timeBetweenSteps = 0.01f;

    void Awake()
    {
        group = GetComponent<CanvasGroup>();   
    }



    public Coroutine FadeIn() {
        return StartCoroutine(FadeInEnum());
    }


    private IEnumerator FadeInEnum()
    {

        for (float i = 0; i < fadeTime; i+=timeBetweenSteps){
            group.alpha = Mathf.Lerp(1, 0, i/fadeTime);
            yield return new WaitForSeconds(timeBetweenSteps);
        }
        group.alpha = 0.0f;

        group.blocksRaycasts = false;
    }


    public Coroutine FadeOut()
    {
        return StartCoroutine(FadeOutEnum());
    }


    private IEnumerator FadeOutEnum()
    {
        for (float i = 0; i < fadeTime; i += timeBetweenSteps)
        {
            group.alpha = Mathf.Lerp(0, 1, i / fadeTime);
            yield return new WaitForSeconds(timeBetweenSteps);

        }
        group.alpha = 1.0f;
        group.blocksRaycasts = true;


    }
}
