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



    private MinigameManager minigameManager;

    // ---------- VARIABLES ----------
    // ¿Ha elegido el jugador?
    private bool playerHasChosen = false;
    // ¿Qué opción eligió?
    private int chosenOption = -1;

    void Start()
    {
        minigameManager = FindObjectOfType<MinigameManager>();
        // Iniciar la conversación
        StartCoroutine(Conversation());
    }

    IEnumerator Conversation()
    {
        //QUE HABLE EL NPC: ///////////////////////////////////////////////////////////////////////////////
        // Esperar 0.5 segundos
        yield return new WaitForSeconds(2f);

        // NPC dice "Hola"
        FTF_SMS.instance.AddMessage(true, "Hello honey, what do you need?");
        ///////////////////////////////////////////////////////////////////////////////////////////////////

        // QUE HABLE EL JUGADOR: /////////////////////////////////////////////////////////////////////////
        yield return new WaitForSeconds(2f);

        // Mostrar las primeras opciones
        ShowChoices("We need to delete some apps.", "Let's talk apps.", "You have too many apps.");

        // Esperar hasta que el jugador elija
        yield return new WaitUntil(() => playerHasChosen);

        // Borrar las opciones
        ClearChoices();

        // Mostrar el mensaje del jugador correspondiente
        if (chosenOption == 0)
            FTF_SMS.instance.AddMessage(false, "We need to delete some apps.");
        else if (chosenOption == 1)
            FTF_SMS.instance.AddMessage(false, "Let's talk apps.");
        else
            FTF_SMS.instance.AddMessage(false, "You have too many apps.");

        /////////////////////////////////////////////////////////////////////////////////////////////////

        // QUE LE CONTESTE EL NPC: //////////////////////////////////////////////////////////////////////
        // Esperar 0.5 segundos
        yield return new WaitForSeconds(2f);

        // Según la opción elegida:
        //      NPC responde una cosa u otra
        if (chosenOption == 0)
            FTF_SMS.instance.AddMessage(true, "Oh, why's that?");
        else if (chosenOption == 1)
            FTF_SMS.instance.AddMessage(true, "Oh, okay love.");
        else
            FTF_SMS.instance.AddMessage(true, "They came with my phone.");


        chosenOption = -1; // Resetear la opción elegida
        playerHasChosen = false; // Resetear la elección del jugador    

        /////////////////////////////////////////////////////////////////////////////////////////////////
        
        // Esperar 0.5 segundos
        yield return new WaitForSeconds(2f);

        // NPC dice el segundo mensaje (este es común)
        FTF_SMS.instance.AddMessage(true, "Which do we delete?");

        yield return new WaitForSeconds(2f);

        /////////////////////////////////////////////////////////////////////////////////////////////////
        // Mostrar las siguientes opciones
        ShowChoices("Chess has to leave.", "What about Crossy Road?", "Maybe Candy Crush?");

        // Esperar otra vez al jugador
        yield return new WaitUntil(() => playerHasChosen);

        ClearChoices();

        if (chosenOption == 0)
            FTF_SMS.instance.AddMessage(false, "Chess has to leave.");
        else if (chosenOption == 1)
            FTF_SMS.instance.AddMessage(false, "What about Crossy Road?");
        else
            FTF_SMS.instance.AddMessage(false, "Maybe Candy Crush?");

        /////////////////////////////////////////////////////////////////////////////////////////////////
        /// /////////////////////////////////////////////////////////////////////////////////////////////

        yield return new WaitForSeconds(2f);

        if (chosenOption == 0)
            FTF_SMS.instance.AddMessage(true, "But I love to play it with my friends. :(");
        else if (chosenOption == 1)
            FTF_SMS.instance.AddMessage(true, "That's a really fun game, I don't want to.");
        else
            FTF_SMS.instance.AddMessage(true, "But I'm about to beat Margarita's score...!");

        // ...

        chosenOption = -1; // Resetear la opción elegida
        playerHasChosen = false; // Resetear la elección del jugador   

        /////////////////////////////////////////////////////////////////////////////////////////////////// 
        
        //QUE HABLE EL NPC: ///////////////////////////////////////////////////////////////////////////////
        // Esperar 0.5 segundos
        yield return new WaitForSeconds(2f);

        // NPC dice "Hola"
        FTF_SMS.instance.AddMessage(true, "I don't want to delete it dearie, I have fun with it.");
        ///////////////////////////////////////////////////////////////////////////////////////////////////
        /// 
        //QUE HABLE EL NPC: ///////////////////////////////////////////////////////////////////////////////
        // Esperar 0.5 segundos
        yield return new WaitForSeconds(2f);

        // NPC dice "Hola"
        FTF_SMS.instance.AddMessage(true, "Maybe we could delete Facebook?");
        ///////////////////////////////////////////////////////////////////////////////////////////////////
        


        // QUE HABLE EL JUGADOR: /////////////////////////////////////////////////////////////////////////
        yield return new WaitForSeconds(2f);

        // Mostrar las primeras opciones
        ShowChoices("Don't you use it to see how the family is doing?", "I'm surprised you proposed that.", "And lose your cat forum?");

        // Esperar hasta que el jugador elija
        yield return new WaitUntil(() => playerHasChosen);

        // Borrar las opciones
        ClearChoices();

        // Mostrar el mensaje del jugador correspondiente
        if (chosenOption == 0)
            FTF_SMS.instance.AddMessage(false, "Don't you use it to see how the family is doing?");
        else if (chosenOption == 1)
            FTF_SMS.instance.AddMessage(false, "I'm surprised you proposed that.");
        else
            FTF_SMS.instance.AddMessage(false, "And lose your cat forum?");

        /////////////////////////////////////////////////////////////////////////////////////////////////
        

        // QUE LE CONTESTE EL NPC: //////////////////////////////////////////////////////////////////////
        // Esperar 0.5 segundos
        yield return new WaitForSeconds(2f);

        // Según la opción elegida:
        //      NPC responde una cosa u otra
        if (chosenOption == 0)
            FTF_SMS.instance.AddMessage(true, "I do sweetie, but I wouldn't need it if you just visited more, would I?");
        else if (chosenOption == 1)
            FTF_SMS.instance.AddMessage(true, "It sends me too many notifications, it wakes me up every night.");
        else
            FTF_SMS.instance.AddMessage(true, "Oh, that's okay. Enrique's cat is just a spoiled rotten creature.");


        chosenOption = -1; // Resetear la opción elegida
        playerHasChosen = false; // Resetear la elección del jugador    

        /////////////////////////////////////////////////////////////////////////////////////////////////
        

        //QUE HABLE EL NPC: ///////////////////////////////////////////////////////////////////////////////
        // Esperar 0.5 segundos
        yield return new WaitForSeconds(2f);

        // NPC dice "Hola"
        FTF_SMS.instance.AddMessage(true, "Also, I just don't need that many news in my life.");
        ///////////////////////////////////////////////////////////////////////////////////////////////////
        /// 
        /// //QUE HABLE EL NPC: ///////////////////////////////////////////////////////////////////////////////
        // Esperar 0.5 segundos
        yield return new WaitForSeconds(2f);

        // NPC dice "Hola"
        FTF_SMS.instance.AddMessage(true, "They're always saying horrible stuff about the world.");
        ///////////////////////////////////////////////////////////////////////////////////////////////////
        
        /// //QUE HABLE EL NPC: ///////////////////////////////////////////////////////////////////////////////
        // Esperar 0.5 segundos
        yield return new WaitForSeconds(2f);

        // NPC dice "Hola"
        FTF_SMS.instance.AddMessage(true, "And I just want to crochet in peace and watch cat videos.");
        ///////////////////////////////////////////////////////////////////////////////////////////////////
        
        //QUE HABLE EL NPC: ///////////////////////////////////////////////////////////////////////////////
        // Esperar 0.5 segundos
        yield return new WaitForSeconds(2f);

        // NPC dice "Hola"
        FTF_SMS.instance.AddMessage(true, "I don't need my phone for anything else.");
        ///////////////////////////////////////////////////////////////////////////////////////////////////
        
        //QUE HABLE EL NPC: ///////////////////////////////////////////////////////////////////////////////
        // Esperar 0.5 segundos
        yield return new WaitForSeconds(2f);

        // NPC dice "Hola"
        FTF_SMS.instance.AddMessage(true, "I don't need everyone's photos, you can just come see me.");
        ///////////////////////////////////////////////////////////////////////////////////////////////////
        
        // QUE HABLE EL JUGADOR: /////////////////////////////////////////////////////////////////////////
        yield return new WaitForSeconds(2f);

        // Mostrar las primeras opciones
        ShowChoices("Are you sure, grandma?", "I... Touché.", "Ok, so everything but Youtube.");

        // Esperar hasta que el jugador elija
        yield return new WaitUntil(() => playerHasChosen);

        // Borrar las opciones
        ClearChoices();

        // Mostrar el mensaje del jugador correspondiente
        if (chosenOption == 0)
            FTF_SMS.instance.AddMessage(false, "Are you sure, grandma?");
        else if (chosenOption == 1)
            FTF_SMS.instance.AddMessage(false, "I... Touché.");
        else
            FTF_SMS.instance.AddMessage(false, "Ok, so everything but Youtube.");

        /////////////////////////////////////////////////////////////////////////////////////////////////
        

        // QUE LE CONTESTE EL NPC: //////////////////////////////////////////////////////////////////////
        // Esperar 0.5 segundos
        yield return new WaitForSeconds(2f);

        // Según la opción elegida:
        //      NPC responde una cosa u otra
        if (chosenOption == 0)
            FTF_SMS.instance.AddMessage(true, "Yes, I'm sure.");
        else if (chosenOption == 1)
            FTF_SMS.instance.AddMessage(true, "What does 'touché' mean?");
        else
            FTF_SMS.instance.AddMessage(true, "Yes, everything but Bootube.");


        chosenOption = -1; // Resetear la opción elegida
        playerHasChosen = false; // Resetear la elección del jugador    

        /////////////////////////////////////////////////////////////////////////////////////////////////
        /// 
        /// //QUE HABLE EL NPC: ///////////////////////////////////////////////////////////////////////////////
        // Esperar 0.5 segundos
        yield return new WaitForSeconds(2f);

        // NPC dice "Hola"
        FTF_SMS.instance.AddMessage(true, "Well, anyways, delete it for me Izan.");
        ///////////////////////////////////////////////////////////////////////////////////////////////////
        /// 
        //QUE HABLE EL NPC: ///////////////////////////////////////////////////////////////////////////////
        // Esperar 0.5 segundos
        yield return new WaitForSeconds(2f);

        // NPC dice "Hola"
        FTF_SMS.instance.AddMessage(true, "You know the buttons are too small for me.");
        ///////////////////////////////////////////////////////////////////////////////////////////////////


        // Fin de conversación
        minigameManager.siguienteEscena();
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