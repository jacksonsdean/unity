using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TabView : MonoBehaviour
{
    TabButton[] tabs;

    TabButton currentlySelected;

    void Start()
    {
        tabs = GetComponentsInChildren<TabButton>();

        foreach (var tab in tabs){
            tab.Off();
        }

        Change(tabs[0]);
    }

    public void Change(TabButton tabButton) {
        if (tabButton == currentlySelected) {
            return;
        }

        currentlySelected = tabButton;
        foreach (var tab in tabs)
        {
            if (tab == currentlySelected)
                tab.On();
            else
                tab.Off();
        }

    }
}
