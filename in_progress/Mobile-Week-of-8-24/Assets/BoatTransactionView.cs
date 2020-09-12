using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.GameFoundation.UI;
using UnityEngine.GameFoundation;
using UnityEngine.UI;

public class BoatTransactionView : MonoBehaviour
{
    [SerializeField]
    Color disabledColor;

    Color origItemColor = Color.white;

    TransactionItemView view;
    private void Awake(){
        view = GetComponent<TransactionItemView>();
    }

    // Start is called before the first frame update
    void Start()
    {
        origItemColor = view.itemIconImageField.GetComponent<Image>().color;
        UpdateUI();
    }

    void UpdateUI() {
        BaseTransaction trans = view.GetTransaction();
        ItemExchangeDefinition def = trans.rewards.GetItemExchange(trans.rewards.ItemExchangeCount - 1);

        bool owned = GameFoundationManager.IsItemOwned(def.item);
        view.interactable = !owned;

        if (owned)
        {
            this.gameObject.SetActive(false);
            //view.itemIconImageField.GetComponent<Image>().color = disabledColor;
            //view.GetComponent<Image>().color = disabledColor;
        }


        if (!view.purchaseButton.availableToPurchaseState)
        {
            //view.itemIconImageField.GetComponent<Image>().color = disabledColor;
            view.itemIconImageField.GetComponent<Image>().color = disabledColor;
        }
        else {
            view.itemIconImageField.GetComponent<Image>().color = origItemColor;

        }
    }
    public void OnGraphicClick() {
        if (!view.interactable) return;
        //view.purchaseButton.Purchase();
    }




    private void OnEnable() {
        GameFoundationManager.OnUpdateBoatDatabase += UpdateUI;
    }
    private void OnDisable()
    {
        GameFoundationManager.OnUpdateBoatDatabase -= UpdateUI;

    }
}
