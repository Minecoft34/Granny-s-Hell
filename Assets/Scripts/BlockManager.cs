using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlockManager : MonoBehaviour
{
    public List<string> messages;
    public bool blocked = false;
    private Coroutine coroutineNextMessage;
    private Coroutine coroutineSendMessages;
    // Start is called before the first frame update
    void Start()
    {
        coroutineSendMessages = StartCoroutine(sendMessages());
    }

    IEnumerator sendMessages() {
        while (messages.Count > 0 && !blocked) {
            coroutineNextMessage = StartCoroutine(sendNextMessage(messages[0]));
            yield return coroutineNextMessage;
            if (blocked)
            {
                yield break;
            }
            messages.RemoveAt(0);
        }
    }

    IEnumerator sendNextMessage(string message) {
        float seconds = Random.Range(0.5f, 4f);
        yield return new WaitForSeconds(seconds);
        if (!blocked)
        {
            FTF_SMS.instance.AddMessage(true, message);
        }
    }

    public void blockContact() {
    Debug.Log("BLOQUEANDO CONTACTO");
    blocked = true;

    if (coroutineSendMessages != null) {
        StopCoroutine(coroutineSendMessages);
        Debug.Log("Parada cola");
    }

    if (coroutineNextMessage != null) {
        StopCoroutine(coroutineNextMessage);
        Debug.Log("Parada mensaje actual");
    }

    FTF_SMS.instance.SendSystemMSG();
}

}
