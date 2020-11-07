using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TabButton : MonoBehaviour
{
    [SerializeField]
    TabView tabView = null;
    [SerializeField]
    Color offColor = Color.white;
    
    [SerializeField]
    Color offColorIcon = Color.white;

    [SerializeField]
    GameObject tabGameObject = null;

    [SerializeField]
    Image iconImage = null;

    public bool selected = false;

    Image[] images;
    Color[] imageColors;



    private void Awake()
    {
        images = GetComponentsInChildren<Image>();
        imageColors = new Color[images.Length];
        for (int i = 0; i < images.Length; i++)
        {
            imageColors[i] = images[i].color;
        }

        iconImage.color = offColorIcon;
    }

    public void Click() {
        selected = !selected;
        tabView.Change(this);
        AnalyticsManager.LogUI("tabButtonSwitch_"+this.gameObject.name, DesignEventType.Clicked);

    }

    internal void On()
    {
        selected = true;
        tabGameObject.SetActive(true);
        OnColor();
    }

    internal void Off()
    {
        selected = false;
        tabGameObject.SetActive(false);
        OffColor();

    }

    private void OffColor() {
        for (int i = 0; i < images.Length; i++)
        {
            images[i].color = offColor;
        }

        iconImage.color = offColorIcon;

    }

    private void OnColor() {
        for (int i = 0; i < images.Length; i++)
        {
            images[i].color = imageColors[i];
        }
    }
}
