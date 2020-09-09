using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public static bool Ready = false;
    Animator animator;
    // Start is called before the first frame update
    void Awake() {
        animator = GetComponent<Animator>();
        Ready = false;
    }

    public void OnClickStart() {
        animator.SetTrigger("SlideOut");
    }


    public void OnClickOptions() { }

    public void OnOutAnimDone() {
        GameManager.Instance.StartGame();
    }

    public void OnMenuReady() {
        Ready = true;
    }
}
