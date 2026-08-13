using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class FTF_SMS : MonoBehaviour
{
    public static FTF_SMS instance;

    public Transform Content_Parent;
    public GameObject PlayerSMS_Ins;
    public GameObject ContactSMS_Ins;
    public GameObject SystemMSG_Ins;

    public ScrollRect ScrollView_Rect;
    public bool estabaAbajo = false;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public void AddMessage(bool Sender_Player, string Message)
    {
        actualizarEstadoScroll();

        if (Sender_Player)
        {
            //Con Instantiate hacemos una copia de un prefab y lo añadimos a la escena. Hacemos copia del prefab que es el primer argumento y lo añadimos en la escena donde el segundo argumento.
            GameObject ownMSG = Instantiate(PlayerSMS_Ins, Content_Parent.transform.position, Quaternion.identity);
            //Quaternion.identity significa que el mensaje aparece sin rotación, es decir, con rotación 0,0,0. 
            ownMSG.transform.SetParent(Content_Parent.transform, false);
            //Aquí el setParent hace que el mensaje que hemos instanciado se añada como hijo del Content_Parent, que es el objeto que contiene todos los mensajes. El false significa que no queremos mantener la posición/escala (no sé 100% cual) del objeto original.

            //Vale estas proximas 3 lineas son necesarias porque unity nos odia y no nos deja modificar el texto directamente tenemos que hacer una referencia si o si y me confunde pero en el tutorial lo hacian y yo daria mi vida por este hombre asi que no lo cambieis que lloro porfa y gracias
            FTF_SMS_TMProRef ownMSG_Text = ownMSG.GetComponent<FTF_SMS_TMProRef>();
            TextMeshProUGUI txt = ownMSG_Text.Text_Reference;
            txt.text = Message;
        }
        else
        {
            //COPIAMOS Y PEGAMOS EXACTO CAMBIANDO LA PRIMERA LINEA Y YA
            //Podriamos llamar al gameObject ownSMS de todos modos, pero me daba cosilla y me parecia menos confuso así con que le cambiamos el nombre y yau
            GameObject contactSMS = Instantiate(ContactSMS_Ins, Content_Parent.transform.position, Quaternion.identity);
            contactSMS.transform.SetParent(Content_Parent.transform, false);

            FTF_SMS_TMProRef contactSMS_Text = contactSMS.GetComponent<FTF_SMS_TMProRef>();
            TextMeshProUGUI txt = contactSMS_Text.Text_Reference;
            txt.text = Message;
        }

        if (estabaAbajo)
        {
            StartCoroutine(autoScroll());
        }
    }

    public void SendSystemMSG()
    {
         //Con Instantiate hacemos una copia de un prefab y lo añadimos a la escena. Hacemos copia del prefab que es el primer argumento y lo añadimos en la escena donde el segundo argumento.
        GameObject sysMSG = Instantiate(SystemMSG_Ins, Content_Parent.transform.position, Quaternion.identity);
        //Quaternion.identity significa que el mensaje aparece sin rotación, es decir, con rotación 0,0,0. 
        sysMSG.transform.SetParent(Content_Parent.transform, false);
        StartCoroutine(autoScroll());
    }

    public IEnumerator autoScroll()
    {
        yield return new WaitForEndOfFrame();
        Canvas.ForceUpdateCanvases();
        ScrollView_Rect.verticalNormalizedPosition = 0f;
    }

    public void actualizarEstadoScroll()
    {
        float contentHeight = ScrollView_Rect.content.rect.height;
        float viewportHeight = ScrollView_Rect.viewport.rect.height;

        if (contentHeight <= viewportHeight)
        {
            estabaAbajo = true;
        }
        else
        {
            estabaAbajo = ScrollView_Rect.verticalNormalizedPosition <= 0.05f;
        }
    }
}
