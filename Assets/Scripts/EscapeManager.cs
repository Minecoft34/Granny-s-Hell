using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EscapeManager : MonoBehaviour
{
    private int clicks;
    private int clicksToEscape;
    public EscapeButton escapeButton;

    void Awake()
    {
        clicksToEscape = Random.Range(8, 15);
        clicks = 0;
    }

    public void manageClicks()
    {
        clicks++;
        if (clicks == clicksToEscape)
        {
            // El jugador ha escapado
            Debug.Log("¡Has escapado!");
            // Aquí puedes agregar la lógica para finalizar el juego o pasar a otra escena
            escapeButton.GetComponent<Button>().interactable = false;
        }
        else {
            Debug.Log("Clicks: " + clicks + "/" + clicksToEscape);
            escapeButton.Move();
        }
    }
}
