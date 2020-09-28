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



    public Coroutine FadeIn(float overrideTime = -1) {
        return StartCoroutine(FadeInEnum(overrideTime));
    }


    private IEnumerator FadeInEnum(float overrideTime = -1)
    {
        float thisFadeTime = overrideTime > 0 ? overrideTime : fadeTime;

        for (float i = 0; i < thisFadeTime; i+=timeBetweenSteps){
            group.alpha = Mathf.Lerp(1, 0, i/ thisFadeTime);
            yield return new WaitForSeconds(timeBetweenSteps);
        }
        group.alpha = 0.0f;

        group.blocksRaycasts = false;
    }


    public Coroutine FadeOut(float overrideTime = -1){
        return StartCoroutine(FadeOutEnum(overrideTime));
    }


    private IEnumerator FadeOutEnum(float overrideTime = -1)
    {
        float thisFadeTime = overrideTime> 0 ? overrideTime : fadeTime;
        for (float i = 0; i < thisFadeTime; i += timeBetweenSteps)
        {
            group.alpha = Mathf.Lerp(0, 1, i / thisFadeTime);
            yield return new WaitForSeconds(timeBetweenSteps);

        }
        group.alpha = 1.0f;
        group.blocksRaycasts = true;


    }
}
