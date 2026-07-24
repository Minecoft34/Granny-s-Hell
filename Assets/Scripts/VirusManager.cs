using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VirusManager : MonoBehaviour
{
    public GameObject virusPrefab; // Prefab del virus
    public RectTransform Content_Parent; // Área donde se pueden generar los virus
    private int virusesToGenerate; // Número de virus a generar (entre 5 y 10)
    private int virusesGenerated = 0; // Contador de virus generados
    private int virusesAlive = 0; // Contador de virus vivos

    void Start()
    {
        virusesToGenerate = Random.Range(5, 10); // Generar un número aleatorio de virus entre 5 y 10
        GenerateViruses();
    }

    void GenerateViruses()
    {
        for (int i = 0; i < virusesToGenerate; i++)
        {
            float width = Content_Parent.rect.width;
            float height = Content_Parent.rect.height;

            RectTransform virusRect = virusPrefab.GetComponent<RectTransform>();

            float virusWidth = virusRect.rect.width;
            float virusHeight = virusRect.rect.height;

            float x = Random.Range(-width / 2 + virusWidth / 2, width / 2 - virusWidth / 2);
            float y = Random.Range(-height / 2 + virusHeight / 2, height / 2 - virusHeight / 2);

            GameObject virus = Instantiate(virusPrefab, Content_Parent);

            virus.GetComponent<RectTransform>().localPosition = new Vector3(x, y, 0);

            virusesGenerated++;
            virusesAlive++;
        }
    }
}
