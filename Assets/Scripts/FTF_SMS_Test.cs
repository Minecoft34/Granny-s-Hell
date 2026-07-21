using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FTF_SMS_Test : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        FTF_SMS.instance.AddMessage(true, "Hola, ¿qué tal?");
        FTF_SMS.instance.AddMessage(false, "Hola, ¿qué tal?");
        FTF_SMS.instance.AddMessage(false, "Pues aqui estamos");
        FTF_SMS.instance.AddMessage(true, "Ea que razon tienes");
        FTF_SMS.instance.AddMessage(false, "Ea que razon tienes");
        FTF_SMS.instance.AddMessage(false, "Ea que razon tienes");
        FTF_SMS.instance.AddMessage(true, "Ea que razon tienes");
        FTF_SMS.instance.AddMessage(true, "Ea que razon tienes");
        FTF_SMS.instance.AddMessage(false, "Ea que razon tienes");
        FTF_SMS.instance.AddMessage(true, "Ea que razon tienes");
        FTF_SMS.instance.AddMessage(true, "Ea que razon tienes");
        FTF_SMS.instance.AddMessage(true, "Ea que razon tienes");
        FTF_SMS.instance.AddMessage(false, "Ea que razon tienes");
        FTF_SMS.instance.AddMessage(true, "Ea que razon tienes");
        FTF_SMS.instance.AddMessage(true, "Ea que razon tienes");
    }

}
