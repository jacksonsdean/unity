using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TabButton : MonoBehaviour
{
    [SerializeField]
    TabView tabView;
    [SerializeField]
    Color offColor;

    [SerializeField]
    GameObject tabGameObject;


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
    }

    public void Click() {
        selected = !selected;
        tabView.Change(this);
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
    }

    private void OnColor() {
        for (int i = 0; i < images.Length; i++)
        {
            images[i].color = imageColors[i];
        }
    }
}
