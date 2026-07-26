using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Virus : MonoBehaviour
{
    private RectTransform Content_Parent;

    private RectTransform myRect;

    private Vector3 targetPosition;
    private bool hasTargetPosition = false;

    private float speed = 100f;

    public VirusManager virusManager;

    public List<Sprite> sprites;
    private int spriteChosen = 0;

    public void startGame(RectTransform contentParent)
    {
        InvokeRepeating(nameof(changeSprite), 0.75f, 0.75f);
        virusManager = FindObjectOfType<VirusManager>();
        Content_Parent = GetComponent<RectTransform>();
        myRect = GetComponent<RectTransform>();
        Content_Parent = contentParent;
        ChooseRandomTarget();
    }

    void changeSprite() {
        Image myImage = GetComponent<Image>();
        myImage.sprite = sprites[spriteChosen];
        if (spriteChosen == 0) {
            spriteChosen = 1;
        } else {
            spriteChosen = 0;
        }
    }

    void Update()
    {
        if (hasTargetPosition != false) {
            Move();

            if (HasReachedTarget()) {
                ChooseRandomTarget();
            }

        }

    }

    void Move()
    {
        myRect.localPosition = Vector3.MoveTowards(myRect.localPosition, targetPosition, speed * Time.deltaTime);
    }

    bool HasReachedTarget()
    {
        if (Vector3.Distance(myRect.localPosition, targetPosition) < 0.1f)
        {
            return true;
        }

        return false;
    }


    void ChooseRandomTarget()
    {
        float width = Content_Parent.rect.width;
        float height = Content_Parent.rect.height;

        float virusWidth = myRect.rect.width;
        float virusHeight = myRect.rect.height;

        float x = 0, y = 0;

        x = Random.Range(-width / 2 + virusWidth / 2, width / 2 - virusWidth / 2);
        y = Random.Range(-height / 2 + virusHeight / 2, height / 2 - virusHeight / 2);

        targetPosition = new Vector3(x, y, 0);
        hasTargetPosition = true;
        speed = Random.Range(100, 500);
    }


    public void onClick()
    {
        virusManager.virusDied();
        Destroy(gameObject);
    }
}