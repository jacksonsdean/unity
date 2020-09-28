using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RipplesOff : MonoBehaviour
{
    private void Start()
    {
        GameObject[] gos = GameObject.FindGameObjectsWithTag("Ripples");
        for (int i = 0; i < gos.Length; i++)
        {
            gos[i].SetActive(false);
        }
    }
}
