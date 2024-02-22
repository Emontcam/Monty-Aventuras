using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Globalization;
using System.Diagnostics;

public class perder : MonoBehaviour
{

    public GameObject canvasPerdedor; // Referencia al Canvas que contiene el mensaje de perder
    public GameObject canvasDatos; // Referencia al Canvas que contiene los datos de la partida
    public Image vidasImagen; //Referencia a la imagen de vidas del canvaDatos
    public Sprite ceroVidas;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        // Verificamos si el personaje ha colisionado con la puerta
        if (vidasImagen.sprite == ceroVidas)
        {
            // Llamamos a una función para terminar el juego
            TerminarJuego();
        }
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (vidasImagen.sprite == ceroVidas)
        {
            // Llamamos a una función para terminar el juego
            TerminarJuego();
        }

    }

    // Función para terminar el juego
    void TerminarJuego()
    {

        canvasPerdedor.SetActive(true);
       // Time.timeScale = 0f;
        canvasDatos.SetActive(false);
        
    }


}
