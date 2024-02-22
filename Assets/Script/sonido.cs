using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class sonido : MonoBehaviour
{

    public Image vidasImagen; //Referencia a la imagen de vidas del canvaDatos
    public Sprite ceroVidas;

    public GameObject fondo;


    public AudioClip salto;
    public AudioClip perderPuntos;
    public AudioClip ganarPuntos;
    public AudioClip ganarJuego;
    public AudioClip perderJuego;

    private AudioSource golpes;
    private AudioSource ambiente;
    private bool jugando = true;

    void Start()
    {
        // Obtiene o agrega un AudioSource al objeto si no existe
        ambiente = fondo.GetComponent<AudioSource>();
        golpes = GetComponent<AudioSource>();
        if (golpes == null)
        {
            golpes = gameObject.AddComponent<AudioSource>();
        }

        if (ambiente != null)
        {
            // Modifica el volumen del sonido
            ambiente.volume = 0.1f;
        }

        // Asigna el sonido al AudioSource
        golpes.clip = perderPuntos;
        
    }
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            //Cambiamos el sonido
            golpes.clip = salto;
            // Reproduce el sonido
            golpes.Play();
        }
        golpes.volume = 0.2f;
    }

    void OnCollisionEnter2D(Collision2D collision)
    {

        if (jugando)
        {
            // Comprueba si la colisión involucra al objeto actual
            if (collision.gameObject.tag == "enemy")
        {
            //UnityEngine.Debug.Log("deberia sonar :(");
            //Cambiamos el sonido
            golpes.clip = perderPuntos;
                // Reproduce el sonido
                golpes.Play();
        }

            if (collision.gameObject.tag == "Money")
        {
            //Cambiamos el sonido
            golpes.clip = ganarPuntos;
            // Reproduce el sonido
            golpes.Play();
        }

            if (vidasImagen.sprite == ceroVidas)
        {
                //Cambiamos el sonido
                golpes.clip = perderJuego;
                // Reproduce el sonido
                golpes.Play();
                ambiente.volume = 0f;
                jugando = false;
        }
            if (collision.gameObject.tag == "mortal")
            {
                //Cambiamos el sonido
                golpes.clip = perderJuego;
                
                // Reproduce el sonido
                golpes.Play();
                ambiente.volume = 0f;
                jugando = false;
            }
            if (collision.gameObject.tag == "Puerta")
            {
                UnityEngine.Debug.Log("deberia sonar :(");
                //Cambiamos el sonido
                golpes.clip = ganarJuego;
                // Reproduce el sonido
                golpes.Play();
                ambiente.volume = 0f;
                jugando = false;
            }
        }
        else
        {
            if (ambiente != null)
            {
                // Modifica el volumen del sonido
                ambiente.volume = 0f;
            }
        }
        

    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        //Cambiamos el sonido
        golpes.clip = ganarPuntos;
        // Reproduce el sonido
        golpes.Play();
    }
}
