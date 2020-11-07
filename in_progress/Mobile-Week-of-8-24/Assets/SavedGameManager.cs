using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EasyMobile;
using System;
using UnityEngine.GameFoundation;
using UnityEngine.GameFoundation.Data;
using UnityEngine.GameFoundation.DefaultLayers.Persistence;
using System.IO;
using System.Data;
using System.Text;
using System.Runtime.CompilerServices;


public class SavedGameManager : MonoBehaviour
{
    private const bool CLEAR_PREFS = false;

    private const string SAVED_GAME_NAME = "Saved_Game";
    private const string GAME_FOUNDATION_DATA_FILENAME = "game-foundataion-data";
    public static SavedGameManager Instance;

    private static SavedGame mSavedGame;

    private static TimeSpan timePlayed = new TimeSpan();

    void Awake()
    {
        if (Instance)
        {
            Destroy(this.gameObject);
        }
        else {
            Instance = this;
        }
        DontDestroyOnLoad(this.gameObject);
        
        OpenSavedGame();

        if (CLEAR_PREFS){
            PlayerPrefs.DeleteAll();
            PlayerPrefs.Save();
        }
    }

  
    public static void SaveToOnlineDatabase() {
        //Fetch GameFoundation Data, save when completed fetch
        string filePath = Application.persistentDataPath+"/"+ GAME_FOUNDATION_DATA_FILENAME;
        if (File.Exists(filePath)){
            byte[] data= File.ReadAllBytes(filePath);
            WriteSavedGame(mSavedGame, data);
        }

        
    }


    // Open a saved game with automatic conflict resolution
    public static void OpenSavedGame(Action<SavedGame, string> callbackOverride=null)
    {
        try
        {
            // Open a saved game and resolve conflicts automatically if any.
            if (callbackOverride == null)
            {
                GameServices.SavedGames.OpenWithAutomaticConflictResolution(SAVED_GAME_NAME, OpenSavedGameDefaultCallback);

            }
            else
            {
                GameServices.SavedGames.OpenWithAutomaticConflictResolution(SAVED_GAME_NAME, callbackOverride);
            }
        }
        catch (NullReferenceException e) {
                Debug.LogWarning("Saved Game Open Null Reference Exception: " + e.ToString());
        }

    }

 

    // Open saved game callback
    static void OpenSavedGameDefaultCallback(SavedGame savedGame, string error)
    {
        if (string.IsNullOrEmpty(error))
        {
            Debug.Log("Saved game opened successfully!");
            mSavedGame = savedGame;        // keep a reference for later operations      
            timePlayed = mSavedGame.TotalTimePlayed;
            ReadSavedGame(mSavedGame); // TODO not sure
        }
        else
        {
            Debug.LogError("Open saved game failed with error: " + error);
        }
    }

   
    // Updates the binary data AND the properties of a saved game
    static void WriteSavedGame(SavedGame savedGame, byte[] data)
    {
        if (savedGame == null) {
            Debug.Log("Cannot Write. Saved game was null", Instance.gameObject);
            OpenSavedGame();
            return;
        }

        SavedGameInfoUpdate.Builder builder = new SavedGameInfoUpdate.Builder();
        builder.WithUpdatedPlayedTime(timePlayed);    // update the played time 
        SavedGameInfoUpdate infoUpdate = builder.Build();

        if (savedGame.IsOpen)
        {
            // The saved game is open and ready for writing
            // Prepare the updated metadata of the saved game
            try
            {
                GameServices.SavedGames.WriteSavedGameData(
                    savedGame,
                    data,
                    infoUpdate, OnSavedGameUpdated
                );
            }
            catch (NullReferenceException e) {
                Debug.LogWarning("Saved Game Write Null Reference Exception: " + e.ToString());
            }
            
        }
        else
        {
            // The saved game is not open. You can optionally open it here and repeat the process.
            Debug.Log("You must open the saved game before writing to it.", Instance.gameObject);
            OpenSavedGame(
                (SavedGame game, string error) =>{
                    if (string.IsNullOrEmpty(error))
                    {
                        mSavedGame = game;
                        GameServices.SavedGames.WriteSavedGameData(mSavedGame, data, infoUpdate, OnSavedGameUpdated);
                    }
                    else
                    {
                        //NativeUI.Alert("Alert", "Couldn't write saved game data because it's failed to open with error: " + error);
                    }
                });
        }
    }
    
static void OnSavedGameUpdated(SavedGame game, string error)
{
/*
        if (!string.IsNullOrEmpty(error))
        NativeUI.Alert("Alert", "Save game data failed with error: " + error);
    else
        NativeUI.Alert("Alert", "The data of saved game '" + game.Name + "' was updated successfully.");
        */
}


public static void ReadDefaultSavedGame()
    {
        ReadSavedGame(mSavedGame);
    }

   

        // Retrieves the binary data associated with the specified saved game
        public static void ReadSavedGame(SavedGame savedGame)
    {
        if (savedGame == null)
        {
            Debug.LogWarning("Cannot read. Saved game was null.", Instance.gameObject);
            OpenSavedGame();

            return;
        }
        if (savedGame.IsOpen)
        {
            // The saved game is open and ready for reading
            GameServices.SavedGames.ReadSavedGameData(
                savedGame,
               OnSavedGameRead);
        }
        else
        {
            // The saved game is not open. You can optionally open it here and repeat the process.
            Debug.Log("You must open the saved game before reading its data.");
            OpenSavedGame(
                       (SavedGame game, string error) =>
                       {
                           if (string.IsNullOrEmpty(error))
                           {
                               mSavedGame = game;
                               GameServices.SavedGames.ReadSavedGameData(mSavedGame, OnSavedGameRead);
                           }
                           else
                           {
                               //NativeUI.Alert("Alert", "Couldn't read saved game data because it's failed to open with error: " + error);
                           }
                       });

        }
    }

    // Updates values with data from saved game
    static void OnSavedGameRead(SavedGame game, byte[] data, string error)
    {
        try
        {
            if (!string.IsNullOrEmpty(error))
            {
                //NativeUI.Alert("Alert", "Saved game reading failed with error: " + error);
            }
            else
            {
                if (data.Length > 0)
                {
                    // Data processing
                    string filePath = Application.persistentDataPath + "/" + GAME_FOUNDATION_DATA_FILENAME;

                    if (!File.Exists(filePath))
                    {
                        File.Create(filePath);
                    }
                    // Write to file:
                    File.WriteAllBytes(filePath, data);
                    GameFoundationManager.LoadFromDisk();
                    GameManager.CheckForPreRegGift();
                    //NativeUI.Alert("Saved Game Data Retrieved", "The data of saved game '" + game.Name + "' contains coin value: " + WalletManager.GetBalance("coins"));
                }
                else
                {
                    //NativeUI.Alert("Alert", "Saved game '" + game.Name + "' has no data!");
                }
            }
        }
        catch (NullReferenceException e) {
            Debug.LogError(e);
        }
    }


    // Shows the GPGS built-in saved game UI. ONLY ANDROID
    public static void ShowGPGSSavedGameUI()
    {
        if (GameServices.IsInitialized())
        {
            GameServices.SavedGames.ShowSelectSavedGameUI(
            "Saved Games",    // UI title
            3,        // maximum number of displayed saved games
            false,    // allow creating saved games     
            true,    // allow deleting saved games
            (SavedGame game, string error) =>
            {
                if (string.IsNullOrEmpty(error))
                {
                    Debug.Log("You selected saved game: " + game.Name);
                    mSavedGame = game;
                    OpenSavedGame();
                }
                else
                {
                    Debug.LogError(error);
                }
            }
        );
        }
        else{
            LeaderboardManager.ShowLogInPopup("cloud saves");
        }

    }


    byte[] StringToBytes(string stringToConvert) {
        return System.Text.Encoding.UTF8.GetBytes(stringToConvert);

    }
    string BytesToString(byte[] bytesToConvert){
        return System.Text.Encoding.UTF8.GetString(bytesToConvert);
    }

    private void TimeIncrement() {
        timePlayed.Add(TimeSpan.FromSeconds(60));
    }

    private void OnStartGame() {
        CancelInvoke("TimeIncrement");
        InvokeRepeating("TimeIncrement", 60, 60);

    }

    private void OnEndGame() {
        CancelInvoke("TimeIncrement");
    }

    private void OnEnable()
    {
        GameManager.OnStartGame += OnStartGame;
        GameManager.OnEndGame += OnEndGame;
    }
    private void OnDisable()
    {
        GameManager.OnStartGame -= OnStartGame;
        GameManager.OnEndGame -= OnEndGame;
    }

}
