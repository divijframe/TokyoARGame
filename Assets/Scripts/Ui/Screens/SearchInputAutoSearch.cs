using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SearchInputAutoSearch : MonoBehaviour
{
    [SerializeField]
    private InputField searchInput = default;

    [SerializeField]
    private SocialApp.UsersDataLoader usersDataLoader;

    public int DelayAmount = 2; // Second count

    protected float Timer;

    string searchStringOld = "";

    private void OnEnable()
    {
        searchStringOld = "";
    }

    void Update()
    {
        Timer += Time.deltaTime;

        if (Timer >= DelayAmount)
        {
            Timer = 0f;

            string searchStringNew = searchInput.text.Trim();

            if(searchStringNew != searchStringOld)
            {
                searchStringOld = searchStringNew;
                usersDataLoader.OnSearch();

                Debug.LogError("Searching for : " + searchStringNew);
            }
        }
    }
}
