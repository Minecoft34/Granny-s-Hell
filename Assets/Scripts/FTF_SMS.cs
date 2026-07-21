using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FTF_SMS : MonoBehaviour
{
    public static FTF_SMS instance;

    public Transform Content_Parent;
    public GameObject PlayerSMS_Ins;
    public GameObject ContactSMS_Ins;

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
    // Start is called before the first frame update
    void Start()
    {
        AddMessage(true, "Hola, ¿qué tal?");
    }

    public void AddMessage(bool Sender_Player, string Message)
    {
        if (Sender_Player)
        {
            //Con Instantiate hacemos una copia de un prefab y lo añadimos a la escena. Hacemos copia del prefab que es el primer argumento y lo añadimos en la escena donde el segundo argumento.
            GameObject ownMSG = Instantiate(PlayerSMS_Ins, Content_Parent.transform.position, Quaternion.identity);
            //ownMSG.GetComponent<HorizontalLayoutGroup>().padding.left = 20;
            //Quaternion.identity significa que el mensaje aparece sin rotación, es decir, con rotación 0,0,0. 
            ownMSG.transform.SetParent(Content_Parent.transform, false);
            //Aquí el setParent hace que el mensaje que hemos instanciado se añada como hijo del Content_Parent, que es el objeto que contiene todos los mensajes. El false significa que no queremos mantener la posición/escala (no sé 100% cual) del objeto original.
        }
        else
        {
           
        }
    }
}
