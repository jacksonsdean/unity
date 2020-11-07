using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    public static AudioManager Instance;

    static AudioSource audioSource;

    [SerializeField]
    AudioClip[] themes = null;
    private static AudioClip[] _themes;

    [SerializeField]
    float maxVolume = 0;
    static float _maxVolume = 0;

    static float _sfxVolume = 1;

    [SerializeField]
    float fadeTime = 0;

    bool isLooping = false;
    bool firstLoad = true;

    float timeSinceLastPlay = 0.0f;
    float timeBetweenSongsThreshold = 2.0f;
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
        _themes = themes;
        _maxVolume = maxVolume;
        
        if(firstLoad)
            PlayRandomTheme(true);

        firstLoad = false;
    }

    internal static float GetMaxMusicVolume()
    {
        return _maxVolume;
    }

    internal static float GetSFXVolume()
    {
        return _sfxVolume;
    }

    internal static void SetSFXVolume(float v)
    {
        _sfxVolume = v;
    }
    internal static void SetMaxMusicVolume(float v)
    {
        _maxVolume = v;
        audioSource.volume = _maxVolume;
    }

    void PlayRandomThemeInternal(bool loop = false) {
        AudioClip clip = _themes[UnityEngine.Random.Range(0, _themes.Length)];
        PlayInternal(clip);
        isLooping = loop;
        //if (isLooping)
        //    StartCoroutine(Loop(clip.length - fadeTime / 2.0f));
    }

    IEnumerator Loop(float delayTime)
    {
        yield return new WaitForSeconds(delayTime);
        PlayRandomThemeInternal(true);
    }

    void PlayInternal(AudioClip clip) {
        if (audioSource.clip && audioSource.isPlaying)
        {
            //StartCoroutine(FadeBetweenEnum(clip));
            FadeToClip(clip);
        }
        else
            PlayImmediate(clip);
    }

    
    private void Update(){
        if (!audioSource.isPlaying && isLooping) {
            audioSource.clip = null;
            PlayRandomThemeInternal(true);
        }
        
        //if (audioSource.isPlaying)
        //{
        //    timeSinceLastPlay = 0.0f;
        //}
        //else {
        //    if (isLooping) {
        //        timeSinceLastPlay += Time.deltaTime;
        //        if (timeSinceLastPlay > timeBetweenSongsThreshold) {
        //            PlayRandomThemeInternal();
        //        }
        //    }
        //}
    }

    private void FadeToClip(AudioClip clip)
    {
        //Fade Out
        audioSource.DOFade(0, fadeTime / 2.0f).OnComplete(
            () => {
                //Set Track and fade in
                SetTrack(clip);
                audioSource.DOFade(maxVolume, fadeTime / 2.0f); }
        );

       
    }

    void PlayImmediate(AudioClip clip) {
        SetTrack(clip);
        audioSource.Play();
    }


    public static void PlayRandomTheme(bool loop = false) {
        Instance.PlayRandomThemeInternal(loop);
    }
    static void SetTrack(AudioClip clipToSet) {
        
        audioSource.clip = clipToSet;
    }

}
