using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConversationManager : MonoBehaviour
{
    // ---------- REFERENCIAS ----------
    // ChoicePanel
    public GameObject choicePanel;
    // Prefab del ChoiceButton
    public GameObject choiceButtonPrefab;

    public Transform Content_Parent;


    // ---------- VARIABLES ----------
    // ¿Ha elegido el jugador?
    private bool playerHasChosen = false;
    // ¿Qué opción eligió?
    private int chosenOption = -1;

    void Start()
    {
        // Iniciar la conversación
        StartCoroutine(Conversation());
    }

    IEnumerator Conversation()
    {
        // Esperar 0.5 segundos
        yield return new WaitForSeconds(1f);

        // NPC dice "Hola"
        FTF_SMS.instance.AddMessage(true, "Hola");

        yield return new WaitForSeconds(1f);

        // Mostrar las primeras opciones
        ShowChoices("Opción 1", "Opción 2", "Opción 3");

        // Esperar hasta que el jugador elija
        yield return new WaitUntil(() => playerHasChosen);

        // Borrar las opciones
        ClearChoices();

        // Mostrar el mensaje del jugador correspondiente
        if (chosenOption == 0)
            FTF_SMS.instance.AddMessage(false, "Opcion 1");
        else if (chosenOption == 1)
            FTF_SMS.instance.AddMessage(false, "Opcion 2");
        else
            FTF_SMS.instance.AddMessage(false, "Opcion 3");

        // Esperar 0.5 segundos
        yield return new WaitForSeconds(1f);

        // Según la opción elegida:
        //      NPC responde una cosa u otra
        if (chosenOption == 0)
            FTF_SMS.instance.AddMessage(true, "Respuesta a la opción 1");
        else if (chosenOption == 1)
            FTF_SMS.instance.AddMessage(true, "Respuesta a la opción 2");
        else
            FTF_SMS.instance.AddMessage(true, "Respuesta a la opción 3");


        chosenOption = -1; // Resetear la opción elegida
        playerHasChosen = false; // Resetear la elección del jugador    
        
        // Esperar 0.5 segundos
        yield return new WaitForSeconds(1f);

        // NPC dice el segundo mensaje (este es común)
        FTF_SMS.instance.AddMessage(true, "Segundo mensaje del NPC");

        yield return new WaitForSeconds(1f);

        // Mostrar las siguientes opciones
        ShowChoices("Opción 4", "Opción 5", "Opción 6");

        // Esperar otra vez al jugador
        yield return new WaitUntil(() => playerHasChosen);

        ClearChoices();

        if (chosenOption == 0)
            FTF_SMS.instance.AddMessage(false, "Opcion 4");
        else if (chosenOption == 1)
            FTF_SMS.instance.AddMessage(false, "Opcion 5");
        else
            FTF_SMS.instance.AddMessage(false, "Opcion 6");

        yield return new WaitForSeconds(1f);

        if (chosenOption == 0)
            FTF_SMS.instance.AddMessage(true, "Respuesta a la opción 4");
        else if (chosenOption == 1)
            FTF_SMS.instance.AddMessage(true, "Respuesta a la opción 5");
        else
            FTF_SMS.instance.AddMessage(true, "Respuesta a la opción 6");

        // ...

        chosenOption = -1; // Resetear la opción elegida
        playerHasChosen = false; // Resetear la elección del jugador    
        

        // Fin de conversación
    }

    void ShowChoices(string option1Text, string option2Text, string option3Text)
    {
        // Crear un botón por cada opción
        GameObject option1 = Instantiate(choiceButtonPrefab, Content_Parent.transform.position, Quaternion.identity);
        option1.transform.SetParent(Content_Parent.transform, false);

        GameObject option2 = Instantiate(choiceButtonPrefab, Content_Parent.transform.position, Quaternion.identity);
        option2.transform.SetParent(Content_Parent.transform, false);

        GameObject option3 = Instantiate(choiceButtonPrefab, Content_Parent.transform.position, Quaternion.identity);
        option3.transform.SetParent(Content_Parent.transform, false);

        // Configurar el texto del botón
        option1.GetComponent<ChoiceButton>().buttonText.text = option1Text;
        option2.GetComponent<ChoiceButton>().buttonText.text = option2Text;
        option3.GetComponent<ChoiceButton>().buttonText.text = option3Text;

        // Darle la información de qué opción representa
        option1.GetComponent<ChoiceButton>().optionIndex = 0;
        option2.GetComponent<ChoiceButton>().optionIndex = 1;
        option3.GetComponent<ChoiceButton>().optionIndex = 2;

        // Repetir para las demás opciones...
    }

    public void ChoiceSelected(int option)
    {
        // Guardar qué opción se ha pulsado
        chosenOption = option;

        // Marcar que el jugador ya eligió
        playerHasChosen = true;
    }

    void ClearChoices()
    {
        // Destruir todos los botones del ChoicePanel
        foreach (Transform child in Content_Parent)
        {
            Destroy(child.gameObject);
        }
    }
}