﻿using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class PlayRandomSoundOnAwake : MonoBehaviour
{
    [SerializeField]
    AudioClip[] options;

    // Start is called before the first frame update
    void Start(){
        GetComponent<AudioSource>().PlayOneShot(options[Random.Range(0, options.Length-1)]);  
    }

}
