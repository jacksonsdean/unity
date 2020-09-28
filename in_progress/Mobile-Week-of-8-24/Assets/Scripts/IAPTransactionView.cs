using System.IO;
using TMPro;
using UnityEngine;
using UnityEngine.GameFoundation.UI;
using UnityEngine.UI;

public class IAPTransactionView : MonoBehaviour
{

    const string DEFAULT_SPRITE = "0";

    [SerializeField]
    TextMeshProUGUI tmp;

    [SerializeField]
    TransactionItemView view;

    string spriteType; // "gems" or "coins"


    [SerializeField]
    Image image;

    int mIndex;

    // Start is called before the first frame update
    void Start()
    {
        mIndex = transform.GetSiblingIndex();

        spriteType = GetComponentInParent<StoreSpriteTypeTag>().Get();
        image.sprite = LoadSprite(spriteType, mIndex.ToString());

        var t = view.GetTransaction().rewards.GetCurrencyExchange(0);
        tmp.text = t.amount.ToString();
    }

    // Update is called once per frame
    void Update()
    {

    }

    Sprite LoadSprite(string type, string name) {
        string pathDir = "Store/" + type + "/";
        string path =  pathDir + name;
        Sprite output = Resources.Load<Sprite>(path);


        // Fall back
        if (output == null) {
            path = pathDir + DEFAULT_SPRITE;
            output = Resources.Load<Sprite>(path);
        }


        return output;
    }
}
