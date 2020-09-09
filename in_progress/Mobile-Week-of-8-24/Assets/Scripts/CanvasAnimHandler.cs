using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CanvasAnimHandler : MonoBehaviour
{
    public void DoneSlideOut() {
        GameObject.FindObjectOfType<MainMenu>().OnOutAnimDone();
    }
}
