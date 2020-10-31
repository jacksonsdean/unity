using DG.Tweening;
using EasyMobile;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GifPlayer : MonoBehaviour
{
    [SerializeField]
    float clipLength = 6.0f;

    // Start is called before the first frame update
    void Awake()
    {
        DecodeGifImage();
    }


    // The path to the GIF image.

    // Suppose you've created a ClipPlayerUI object (ClipPlayer will also work)
    // Drag the pre-created clip player to this field in the inspector
    public ClipPlayerUI clipPlayer;


    // This method decode the whole GIF image
    // at the gifFilepath into an AnimatedClip which can be played with the built-in clip players.
    void DecodeGifImage()
    {
        Gif.DecodeGif(
            Application.streamingAssetsPath + "/GIFs/" + "intro.gif",    // path to the GIF image
            0,              // frames to read: 0 means read the whole GIF   
            System.Threading.ThreadPriority.Highest,    // priority of the decoding thread
            OnGifDecoded    // callback
        );
    }

    // This callback is called once the decoding has completed.
    void OnGifDecoded(AnimatedClip clip)
    {
        if (clip != null)
        {
            Image img = GetComponent<Image>();
            img.DOColor(Color.white, .5f);
            
            // The GIF image has been decoded into an AnimatedClip object!
            // Now you can play it with the built-in clip player...
            Gif.PlayClip(clipPlayer, clip);
            Invoke("NextScene", 6.0f);

        }
        else
        {
            Debug.Log("The decoding failed");
            NextScene();

        }
    }

    void NextScene() {
        SceneManager.LoadScene("Main");
    }
}
