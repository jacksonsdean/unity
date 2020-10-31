using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayClickSound : MonoBehaviour
{
    [SerializeField]
    AudioClip clipOverride = null;

    // Start is called before the first frame update
    void Awake()
    {
        GetComponent<Button>().onClick.AddListener(OnClick);
    }

    public void OnClick() {
        UIAudioManager.PlayClickSound(clipOverride);

    }
}
