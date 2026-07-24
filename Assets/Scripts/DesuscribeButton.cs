using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DesuscribeButton : MonoBehaviour
{
    public GameObject confirmButton;

    public void onClick()
    {
        confirmButton.SetActive(true);
        GetComponent<Button>().interactable = false;
    }
}
