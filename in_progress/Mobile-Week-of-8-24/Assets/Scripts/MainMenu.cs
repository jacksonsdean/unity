using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public static bool Ready = false;
    Animator animator;

    [SerializeField]
    GameObject options;
    [SerializeField]
    GameObject inventory;
    [SerializeField]
    GameObject store;

    // Start is called before the first frame update
    void Awake() {
        animator = GetComponent<Animator>();
        Ready = false;
        store.SetActive(false);
        inventory.SetActive(false);
        options.SetActive(false);
    }

    public void OnClickStart() {
        animator.SetTrigger("SlideOut");
    }

    public void OnClickInventory() {
        if (!inventory.activeSelf)
        {
            inventory.SetActive(true);

        }
        else
            inventory.GetComponent<FadeOnActive>().OnClose();
    }



    public void OnClickOptions() {
        if (!options.activeSelf)
        {
            options.SetActive(true);

        }
        else
            options.GetComponent<FadeOnActive>().OnClose();
    }

    public void OnOutAnimDone() {
        GameManager.Instance.StartGame();
    }

    public void OnMenuReady() {
        Ready = true;
    }

    public void OnClickStore() {
        if (!store.activeSelf) {
            store.SetActive(true);
            
        }
        else
            store.GetComponent<FadeOnActive>().OnClose();
    }
}
