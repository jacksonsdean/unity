using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovieMode : MonoBehaviour
{

    Pickup[] coins;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        coins = FindObjectsOfType<Pickup>();
        for (int i = 0; i < coins.Length; i++)
        {
            Destroy(coins[i].gameObject);
        }
    }
}
