using System.Collections;
using System.Collections.Generic;
using TMPro;

using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;


public delegate void PopupCallback();


public class PopupBuilder{
    public string title = "Title";
    public string text = "Content";
    public Sprite graphic = null;
    public bool showConfirmButton = true;
    public bool showDeclineButton = false;


    public PopupCallback confirmCallback = null;
    public PopupCallback declineCallback = null;

    public PopupBuilder() {
        this.title = "Title";
        this.text = "Content";
        this.graphic = null;
        this.showConfirmButton = true;
        this.showDeclineButton = false;
        this.confirmCallback = null;
        this.declineCallback = null;

    }
    public PopupBuilder(string title, string text, Sprite graphic = null, bool showConfirmButton = true, bool showDeclineButton = false, PopupCallback confirmCallback = null, PopupCallback declineCallback = null)
    {
        this.title = title;
        this.text = text;
        this.graphic = graphic;
        this.showConfirmButton = showConfirmButton;
        this.showDeclineButton = showDeclineButton;
        this.confirmCallback = confirmCallback;
        this.declineCallback = declineCallback;
    }
}

public class PopupManager : MonoBehaviour
{
    public static PopupManager Instance;

    [SerializeField]
    GameObject popupPrefab;

    GameObject currentPopup = null;

    [SerializeField]
    float animationDuration;


    TextMeshProUGUI titleTMP = null;
    TextMeshProUGUI textTMP = null;
    Image image = null;
    Button confirmButton = null;
    Button declineButton = null;


    PopupCallback confirmCallback = null;
    PopupCallback declineCallback = null;

    private void Awake(){
        if (PopupManager.Instance)
            Destroy(this.gameObject);
        else {
            Instance = this;
        }
    }
    public void OnClickClose()
    {
        Close();
    }

    public void OnClickConfirm()
    {
        confirmButton.interactable = false;
        confirmCallback?.Invoke();
        Close();
    }
    public void OnClickDecline()
    {
        declineButton.interactable = false;
        declineCallback?.Invoke();
        Close();

    }

    public void Show(PopupBuilder builder) {
        Show(builder.title, builder.text, builder.graphic, builder.showConfirmButton, builder.showDeclineButton, builder.confirmCallback, builder.declineCallback);
    }

    public void Show(
        string title, string text,
        Sprite graphic = null,
        bool showConfirmButton = true,
        bool showDeclineButton = false,
         PopupCallback confirmCallback = null,
         PopupCallback declineCallback = null
        )
    {
        this.confirmCallback = confirmCallback;
        this.declineCallback = declineCallback;

        currentPopup = Instantiate(popupPrefab, this.transform);
        PopupComponents components = currentPopup.GetComponent<PopupComponents>();

        titleTMP = components.title;
        textTMP = components.text;
        image = components.image;
        confirmButton = components.confirm;
        declineButton = components.decline;

        titleTMP.text = title;
        textTMP.text = text;

        if (graphic == null){
            Destroy(image.gameObject);
        }
        else{
            image.sprite = graphic;
        }

        if (!showConfirmButton){
            Destroy(confirmButton.gameObject);
        }
        else
            confirmButton.onClick.AddListener(OnClickConfirm);

        if (!showDeclineButton){
            Destroy(declineButton.gameObject);
        }
        else
            declineButton.onClick.AddListener(OnClickDecline);


        currentPopup.GetComponent<RectTransform>().DOScale(0,0); // start at 0 scale

        Open();
    }

   

    public void Close() {
        if (currentPopup == null) return;
        currentPopup.GetComponent<RectTransform>()
            .DOScale(0, animationDuration)
            .ChangeStartValue(new Vector3(1,1,1))
            .SetEase(Ease.InBounce);

        titleTMP =             null;
        textTMP =              null;
        image =                null;
        confirmButton =        null;
        declineButton =        null;
    }

    private void Open() {
        if (currentPopup == null) return;
        
        currentPopup.GetComponent<RectTransform>()
            .DOScale(1, animationDuration)
            .ChangeStartValue(new Vector3(0, 0, 0))
             .SetEase(Ease.OutBounce);

        titleTMP.transform.parent.GetComponent<RectTransform>()
              .DOScale(1, animationDuration + .3f)
              .ChangeStartValue(new Vector3(0, 0, 0))
              .SetEase(Ease.OutBounce);

        textTMP.transform.parent.GetComponent<RectTransform>()
             .DOScale(1, animationDuration + .3f)
             .ChangeStartValue(new Vector3(0, 0, 0))
             .SetEase(Ease.OutBounce);


        if (image != null) {
            image.GetComponent<RectTransform>()
                .DOScale(1, animationDuration+.7f)
                .ChangeStartValue(new Vector3(0, 0, 0))
                .SetEase(Ease.OutBounce);
        }
    }

}
