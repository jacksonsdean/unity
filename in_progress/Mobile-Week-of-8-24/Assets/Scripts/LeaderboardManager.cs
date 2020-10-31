using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EasyMobile;
using System;
using UnityEngine.GameFoundation;
using System.Reflection;

public class LeaderboardManager : MonoBehaviour
{
    public static readonly bool AUTO_INIT = false;

    private static readonly string DECLINE_ASK_AGAIN_PREF = "user-declined-log-in-ask-again";


    public static LeaderboardManager current;

    public static bool userDeclinedAskAgain = false;


    private void Awake()
    {
        if (current != null)
            Destroy(this.gameObject);
        else
        {
            if (PlayerPrefs.GetInt(DECLINE_ASK_AGAIN_PREF, 0) == 0) // Hasn't declined or isn't saved
            {
                userDeclinedAskAgain = false;
            }
            else {
                userDeclinedAskAgain = true;
            }

            LeaderboardManager.current = this;
            DontDestroyOnLoad(this.gameObject);
            if(AUTO_INIT && !userDeclinedAskAgain) AutoInitAndroid();
        }


        }

    private static void AutoInitAndroid(GameObject popup = null) {
        if (!GameServices.IsInitialized()) {
                GameServices.ManagedInit();
        }
    }

    private static void ManualInit(GameObject popup = null)
    {
        if (!GameServices.IsInitialized()){
            GameServices.Init();
        }
    }

      

    // Event handlers
    static void OnUserLoginSucceeded()
    {
        Debug.Log("User logged in successfully.");

        // Clear ask again pref (presumably they will want to be asked to log in next time if they are logged out)
        PlayerPrefs.SetInt(DECLINE_ASK_AGAIN_PREF, 0);
        PlayerPrefs.Save();

        SavedGameManager.ReadDefaultSavedGame();

    }


    static void DeclineLogIn(GameObject popup) {
        userDeclinedAskAgain = true;
        PlayerPrefs.SetInt(DECLINE_ASK_AGAIN_PREF, 1);
        PlayerPrefs.Save();
    }

    static void OnUserLoginFailed()
    {
        Debug.Log("User login failed.");
        PopupBuilder popup = new PopupBuilder();
        popup.title = "Not logged in";
        popup.declineCallback = DeclineLogIn;
        popup.showConfirmButton = true;
        popup.showDeclineButton = true;
        popup.text = "Failed to log in, try again next time you start the game?";
        popup.Show();
    }


    public void ShowLeaderboard() {
        // Check for initialization before showing leaderboard UI
        if (GameServices.IsInitialized())
        {
            GameServices.ShowLeaderboardUI();
        }
        else
        {
            ShowLogInPopup("the leaderboard");
        }
    }

    public static void ShowLogInPopup(string serviceName)
    {
        PopupBuilder popup = new PopupBuilder();
        popup.title = "Not logged in";
        popup.confirmCallback = ManualInit;
        popup.showConfirmButton = true;

#if UNITY_ANDROID
        popup.text = String.Format("You must be logged in to Google Play Games services in order to access {0}. Log in now?", serviceName);
        popup.showDeclineButton = true;

#elif UNITY_IOS
            popup.showDeclineButton = false;
            popup.text = String.Format("You must be logged in to Game Center in order to access the {0}. Log in now?", serviceName);
            Debug.Log("Cannot show leaderboard UI: The user is not logged in to Game Center.");
#endif
        popup.Show();

    }

    internal static void ReportDistance(float meters)
    {
        if (GameServices.IsInitialized())
        {
            GameServices.ReportScore((long) meters, EM_GameServicesConstants.Leaderboard_Distance);
        }
        else
        {
            // TODO SHOW NOTE/ LEADERBOARD BUTTON

#if UNITY_ANDROID
    Debug.Log("Cannot add score to leaderboard: The user is not logged in to Google Play Games.");

#elif UNITY_IOS
    Debug.Log("Cannot add score to leaderboard: The user is not logged in to Game Center.");
#endif
        }

    }

    internal static void ReportScore(int score)
    {
        if (GameServices.IsInitialized())
        {
            GameServices.ReportScore((long)score, EM_GameServicesConstants.Leaderboard_Score);
        }
        else
        {

#if UNITY_ANDROID
            Debug.Log("Cannot add score to leaderboard: The user is not logged in to Google Play Games.");

#elif UNITY_IOS
    Debug.Log("Cannot add score to leaderboard: The user is not logged in to Game Center.");
#endif
        }

    }

    void OnEnable()
    {
        // Subscribe to login events 
        GameServices.UserLoginSucceeded += OnUserLoginSucceeded;
        GameServices.UserLoginFailed += OnUserLoginFailed;
        
    }

    void OnDisable()
    {
        // Unsubscribe
        GameServices.UserLoginSucceeded -= OnUserLoginSucceeded;
        GameServices.UserLoginFailed -= OnUserLoginFailed;
    }

}
