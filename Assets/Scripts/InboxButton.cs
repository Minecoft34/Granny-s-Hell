using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InboxButton : MonoBehaviour
{
    public GameObject contentPanel;
    public GameObject inboxPanel;

    public void Awake()
    {
        contentPanel.SetActive(false);
        inboxPanel.SetActive(true);
    }

    public void onClick()
    {
        contentPanel.SetActive(true);
        GetComponent<Button>().interactable = false;
        inboxPanel.SetActive(false);
    }
}
