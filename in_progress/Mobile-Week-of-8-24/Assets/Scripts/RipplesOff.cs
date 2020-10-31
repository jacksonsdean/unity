using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RipplesOff : MonoBehaviour
{
    GameObject[] gos;
    private void Start()
    {
        gos = GameObject.FindGameObjectsWithTag("Ripples");
        for (int i = 0; i < gos.Length; i++)
        {
            gos[i].SetActive(false);
        }
    }

    private void OnDestroy()
    {
        for (int i = 0; i < gos.Length; i++)
        {
            gos[i].SetActive(true);
        }
    }
}
