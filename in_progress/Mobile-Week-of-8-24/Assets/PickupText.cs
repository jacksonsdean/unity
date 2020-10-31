using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

[System.Serializable]
enum PickupTextType
{
    Coin, Gem
}

public class PickupText : MonoBehaviour
{

    [SerializeField]
    PickupTextType textType;

    float originalPosY;
    float originalPosZ;
    // Start is called before the first frame update
    void Start()
    {
        if (Options.zenMode) {
            Destroy(this.gameObject);
            return;
        }
        RectTransform rt = GetComponent<RectTransform>();
        RectTransform parentRt = transform.parent.GetComponent<RectTransform>(); // Mask

        TextMeshProUGUI textMeshPro = GetComponent<TextMeshProUGUI>();

        originalPosY = rt.anchoredPosition.y;
        originalPosZ = parentRt.position.z;


        float outPosY = originalPosY - 15.0f;
        float outPosZ = originalPosZ + 5.0f;

        if (textType.Equals(PickupTextType.Coin)){
            textMeshPro.text = "+" + UpgradeManager.CoinsPerPickup; 

        }
        else if(textType.Equals(PickupTextType.Gem)){
            textMeshPro.text = "+" + UpgradeManager.GemsPerPickup;
        }


        rt.DOAnchorPosY(outPosY, 0);
        rt.DOScaleY(0, 0);
        parentRt.DOLocalMoveZ(outPosZ,0 );


        float inTime = .7f;
        rt.DOAnchorPosY(originalPosY, inTime).SetEase(Ease.OutElastic);
        rt.DOScaleY(1, inTime + .1f).SetEase(Ease.OutBounce);
        parentRt.DOLocalMoveZ(originalPosZ, inTime).SetEase(Ease.OutCubic);


        float outTime = .6f;
        textMeshPro.DOFade(0, outTime).SetDelay(inTime+.3f).SetEase(Ease.InOutBounce);
        rt.DOScaleY(1, outTime+.1f).SetDelay(inTime+.2f);
    }
   
}
