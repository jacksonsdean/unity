using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloudSaveButton : MonoBehaviour
{
    public void Awake()
    {
#if UNITY_IOS
        Destroy(this.gameObject);
#endif
    }
    public void OpenCloudSaveUI() {
        SavedGameManager.ShowGPGSSavedGameUI();
    }
}
