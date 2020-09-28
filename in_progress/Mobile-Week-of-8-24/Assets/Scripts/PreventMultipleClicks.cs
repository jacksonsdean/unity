using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PreventMultipleClicks : MonoBehaviour
{
    [SerializeField]
    float refactoryPeriod = 2;


    public void OnClick() {
        GetComponent<Button>().interactable = false;
        Invoke("EnableClick", refactoryPeriod);
    
    }


    void EnableClick() {
        GetComponent<Button>().interactable = true;

    }

    // Start is called before the first frame update
    void Start()
    {
        GetComponent<Button>().onClick.AddListener(OnClick);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
