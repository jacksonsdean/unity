using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LogManager : MonoBehaviour
{
    private readonly bool LOG_ONLY_ERRORS = true;
    private static bool disablePopups = true;

    private readonly int MAX_POPUPS = 4;

    private List<GameObject> popups = new List<GameObject>();
    private Queue<PopupBuilder> popupQueue = new Queue<PopupBuilder>();


    private void Update()
    {
#if UNITY_EDITOR
        if (Input.GetKeyDown(KeyCode.E)) {
            Debug.LogError("Test Error");
        }
#endif
    }

    void OnEnable()
    {
        Application.logMessageReceived += LogCallback;
    }

    public void PopupAcceptCallback(GameObject popup) {
        popups.Remove(popup);
    }

    public void PopupDeclineCallback(GameObject popup) {
        popups.Remove(popup);
        for (int i = 0; i < popups.Count; i++)
        {
            PopupManager.Instance.Close(popups[i]);

        }
        popups.Clear();
        disablePopups = true;
    }

    //Called when there is an exception
    void LogCallback(string condition, string stackTrace, LogType type)
    {
        if (!LOG_ONLY_ERRORS || (type.Equals(LogType.Error) || type.Equals(LogType.Exception)))
        {
            PopupBuilder b = new PopupBuilder();
            b.text = condition;
            b.text += "\n";
            b.text += stackTrace;
            b.title = "Log " + type.ToString();
            b.textAlignment = TMPro.TextAlignmentOptions.Left;
            b.textSize = 50;
            b.showDeclineButton = true;
            b.confirmCallback = PopupAcceptCallback;
            b.declineCallback = PopupDeclineCallback;

            if (!disablePopups && (popups.Count < MAX_POPUPS))
            {
                ShowPopup(b);
            }
            else {
                popupQueue.Enqueue(b);
            }
        }
    }

    private void ShowPopup(PopupBuilder builder) {
        GameObject popup = builder.Show();
        popups.Add(popup);
    }

    private void OnGUI()
    {
        if (popupQueue.Count > 0) {
            if (!disablePopups && (popups.Count < MAX_POPUPS))
            {
                ShowPopup(popupQueue.Dequeue());
            }
        }
    }

    void OnDisable()
    {
        Application.logMessageReceived -= LogCallback;
    }
}
