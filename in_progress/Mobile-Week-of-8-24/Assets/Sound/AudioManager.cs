using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    public static AudioManager Instance;

    static AudioSource audioSource;

    [SerializeField]
    AudioClip[] themes;
    private static AudioClip[] _themes;

    [SerializeField]
    float maxVolume;
    static float _maxVolume;

    [SerializeField]
    float fadeTime;
    static float _fadeTime;

    static float FADESTEPS = 100.0f;

    bool firstLoad = true;

    private void Awake(){
        if (!AudioManager.Instance)
            AudioManager.Instance = this;
        else
        {
            Destroy(this.gameObject);
            return;
        }
        DontDestroyOnLoad(this.gameObject);

        AudioManager.audioSource = GetComponent<AudioSource>();
        _fadeTime = fadeTime;
        _themes = themes;
        _maxVolume = maxVolume;
        
        if(firstLoad)
            PlayRandomTheme(true);

        firstLoad = false;
    }

     void PlayRandomThemeInternal(bool loop = false) {
        AudioClip clip = _themes[Random.Range(0, _themes.Length - 1)];
        PlayInternal(clip);
        if (loop) {
            StartCoroutine(Loop(clip.length - fadeTime / 2.0f));
        }
    }


    void PlayInternal(AudioClip clip) {
        StopAllCoroutines();
        if (audioSource.clip)
            StartCoroutine(FadeBetweenEnum(clip));
        else 
            PlayImmediate(clip);
    }

    void PlayImmediate(AudioClip clip) {
        SetTrack(clip);
        audioSource.Play();
    }

    IEnumerator Loop(float delayTime) {
        yield return new WaitForSeconds(delayTime);
        PlayRandomThemeInternal(true);
    }

    public static void PlayRandomTheme(bool loop = false) {
        Instance.PlayRandomThemeInternal(loop);
    }
    static IEnumerator FadeBetweenEnum(AudioClip toClip) {
        yield return FadeOut();
        SetTrack(toClip);
        audioSource.Play();
        yield return FadeIn();

    }

    static IEnumerator FadeOut() {
        float thisFadeSteps = audioSource.volume * FADESTEPS;
        while (audioSource.volume >= .01f){
            audioSource.volume -= (1.0f / thisFadeSteps);
            yield return new WaitForSeconds(_fadeTime / thisFadeSteps);
        }
        audioSource.volume = 0;
    }

    static IEnumerator FadeIn() {
        float thisFadeSteps = _maxVolume * FADESTEPS;
        while (audioSource.volume < _maxVolume-0.01f){
            audioSource.volume += (1.0f / thisFadeSteps);
            yield return new WaitForSeconds(_fadeTime / thisFadeSteps);
        }
        audioSource.volume = _maxVolume;
    }

    static void SetTrack(AudioClip clipToset) {
        
        audioSource.clip = clipToset;
    }

}
