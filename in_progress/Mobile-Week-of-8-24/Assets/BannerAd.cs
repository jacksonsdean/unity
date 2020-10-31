using System.Collections;
using UnityEngine;
using UnityEngine.Advertisements;
public class BannerAd : MonoBehaviour
{
    public static BannerAd Instance;
    public string placementId = "ContinueBanner";
    [SerializeField]
    BannerPosition bannerPosition = BannerPosition.BOTTOM_CENTER;
    void Awake()
    {
        if (Instance) Destroy(this.gameObject);
        else Instance = this;
        Advertisement.Load("ContinueBanner");
    }
    public void ShowBannerAdInternal() {
        StartCoroutine(ShowBannerWhenInitialized());

    }
    public static void ShowBannerAd() {
        Instance.ShowBannerAdInternal();
    }

    IEnumerator ShowBannerWhenInitialized()
    {
        while (!Advertisement.isInitialized)
        {
            yield return new WaitForSeconds(0.5f);
        }

        Advertisement.Banner.SetPosition(bannerPosition);
        Advertisement.Banner.Show(placementId);
    }


    public static void HideBannerAd() {
        Advertisement.Banner.Hide();
    }
}
