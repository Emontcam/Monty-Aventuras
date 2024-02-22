using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class choque : MonoBehaviour
{

    public AudioClip colision;

    private AudioSource golpes;
    // Start is called before the first frame update
    void Start()
    {
        golpes = GetComponent<AudioSource>();
        if (golpes == null)
        {
            golpes = gameObject.AddComponent<AudioSource>();
        }

        // Asignamos el sonido al AudioSource
        golpes.clip = colision;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {

            // Reproduce el sonido
            golpes.Play();

        }
    }
    }
