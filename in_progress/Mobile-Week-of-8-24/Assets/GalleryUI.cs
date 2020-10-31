using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GalleryUI : MonoBehaviour
{

    [SerializeField]
    RectTransform inventoryPanel;
    [SerializeField]
    RectTransform galleryButton;
    [SerializeField]
    RectTransform galleryCloseButton;

    float origClosePosY;
    ScrollRect scrollRect;
    float origElasticity ;

    // Start is called before the first frame update
    void Awake()
    {
        origClosePosY = galleryCloseButton.localPosition.y;

        inventoryPanel.DOScale(0, 0);
        galleryCloseButton.DOLocalMoveY(galleryCloseButton.localPosition.y - 250.0f, 0);
        galleryButton.DOScale(1,0);
        GameFoundationManager.UpdateBoatDatabase();
        scrollRect = GetComponentInChildren<ScrollRect>();
        origElasticity = scrollRect.elasticity;


    }

    public void OnClickExit()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene(UnityEngine.SceneManagement.SceneUtility.GetBuildIndexByScenePath("Main"));
    }

    public void OnClickGallery() {
        if (inventoryPanel.localScale.y > .9f)
        {
            ClosePanel();
        }
        else {
            OpenPanel();
        }
    }

    private void OpenPanel() {
        inventoryPanel.DOScale(1,1).SetEase(Ease.OutBounce);
        galleryCloseButton.DOLocalMoveY(origClosePosY, .75f).SetEase(Ease.OutBounce).SetDelay(.9f);
        galleryButton.DOScale(0,.8f);
        Invoke("ScrollToSelected", .3f);
    
}

    private void OnCompleteScroll() {
        scrollRect.elasticity = origElasticity;
    }
    private void ScrollToSelected()
    {
        // Scroll to selected
        RectTransform contentPanel = scrollRect.transform.GetChild(0).GetComponent<RectTransform>();
        Transform target = null;
        int index = 0;
        int count = 0;
        foreach (Transform item in contentPanel)
        {
            BoatItem boatItem = item.GetComponent<BoatItem>();
            if (boatItem)
            {
                boatItem.Init();
                boatItem.UpdateUI();
                if (boatItem.selected)
                {
                    target = item;
                    index = count;
                }
                count++;
            }
        }

        if (target != null)
        {
            var contentPos = (Vector2)scrollRect.transform.InverseTransformPoint(scrollRect.content.position);
            var childPos = (Vector2)scrollRect.transform.InverseTransformPoint(target.position);
            var endPos = contentPos - childPos;
            // If no horizontal scroll, then don't change contentPos.x
            if (!scrollRect.horizontal) endPos.x = contentPos.x;
            // If no vertical scroll, then don't change contentPos.y
            if (!scrollRect.vertical) endPos.y = contentPos.y;

            if (index < count - 4)
            {
                scrollRect.elasticity = 0.0f;
                scrollRect.content.DOAnchorPos(endPos - Vector2.up * 250.0f, .8f).SetEase(Ease.OutCubic).OnComplete(OnCompleteScroll);
            }
        }
    }

    private void ClosePanel() {
        inventoryPanel.DOScale(0, .3f).SetDelay(.3f);
        galleryCloseButton.DOLocalMoveY(galleryCloseButton.localPosition.y - 250.0f, .3f);
        galleryButton.DOScale(1,1f);

    }
}
