using Cinemachine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class DisableCameraTouchOverUI : MonoBehaviour
{

    CinemachineVirtualCameraBase cam;
    CinemachineTouchInputMapper inputMapper;
    void Start()
    {
        inputMapper = GetComponent<CinemachineTouchInputMapper>();
        cam = GetComponent<CinemachineVirtualCamera>();
        if (!cam) cam = GetComponent<CinemachineFreeLook>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Application.isMobilePlatform)
        {
            if (Input.touchCount > 0)
            {
                Touch t = Input.touches[0];
                if (IsOverUIElement(t.position))
                {
                    cam.enabled = false;
                }
                else
                {
                    cam.enabled = true;
                }
            }
        }
        else {
            if (IsOverUIElement(Input.mousePosition))
            {
                cam.enabled = false;
            }
            else
            {
                cam.enabled = true;
            }
            
        }
    }

    private bool IsOverUIElement(Vector3 position)
    {
        var eventData = new PointerEventData(EventSystem.current);
        eventData.position = position;
        var results = new List<RaycastResult>();
        EventSystem.current.RaycastAll(eventData, results);
        return results.Count > 0;
    }
}
