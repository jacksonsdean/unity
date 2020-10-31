using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EasyMobile;
public class ReviewManager : MonoBehaviour
{
    static readonly string NOT_FIRST_OPEN = "Not First Open";

    // Start is called before the first frame update
    void Awake()
    {
        // TODO check if has opened
        if (PlayerPrefs.GetInt(NOT_FIRST_OPEN, 0) == 0)
        {
            PlayerPrefs.SetInt(NOT_FIRST_OPEN, 1);
            PlayerPrefs.Save();
        }


    }


    public static void RequestReview() {
        if (PlayerPrefs.GetInt(NOT_FIRST_OPEN, 0) != 0) {
            if(Random.Range(0.0f,1.0f)<.05f)
                StoreReview.RequestRating();
        }
    }

   
}
