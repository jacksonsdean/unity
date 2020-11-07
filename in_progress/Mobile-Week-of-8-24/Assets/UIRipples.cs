using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIRipples : MonoBehaviour
{
    [SerializeField]
    Vector3 offset = Vector3.zero;

    Vector3 preMoveScale = new Vector3();
    RectTransform parentTransform = null;
    // Start is called before the first frame update
    void Awake()
    {
        parentTransform = transform.parent.GetComponent<RectTransform>();
        preMoveScale = GetComponent<RectTransform>().localScale;
        transform.SetParent(null);
        GetComponent<RectTransform>().localScale = preMoveScale;
    }

    // Update is called once per frame
    void Update(){
        if (!parentTransform.gameObject.activeInHierarchy) 
            Destroy(this.gameObject);

        Vector3 pos = Camera.main.ScreenToWorldPoint(RectTransformUtility.WorldToScreenPoint(null,parentTransform.anchoredPosition));
        Ray ray = Camera.main.ScreenPointToRay(parentTransform.transform.position);
        RaycastHit[] hits =  Physics.RaycastAll(ray);
        transform.position = hits[0].point+offset;
    }
    void OnCloseMainMenu(float punchDelay)
    {
        var em = GetComponent<ParticleSystem>().emission;
        em.rateOverDistance = em.rateOverDistance.constantMax / 4.0f;
        em.rateOverTime = em.rateOverTime.constantMax / 4.0f;
        Invoke("Burst", punchDelay);
    }

    void Burst() {
       GetComponent<ParticleSystem>().Emit(60);
    }

    private void OnEnable()
    {
        MainMenu.OnClose += OnCloseMainMenu;
    }    private void OnDisable()
    {
        MainMenu.OnClose -= OnCloseMainMenu;
    }
}
