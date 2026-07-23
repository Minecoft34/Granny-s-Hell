using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChoiceButton : MonoBehaviour
{
    // Referencia al ConversationManager
    public ConversationManager conversationManager;

    // Qué opción soy
    public int optionIndex;

    // Referencia al texto
    public TMPro.TextMeshProUGUI buttonText;

    private void Awake()
    {
        conversationManager = FindObjectOfType<ConversationManager>();
    }

    public void OnClick()
    {
        // Avisar al ConversationManager
        conversationManager.ChoiceSelected(optionIndex);
    }
}