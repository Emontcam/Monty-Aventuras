using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ganar : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public GameObject canvasGanador; // Referencia al Canvas que contiene el mensaje de ganar
    public GameObject canvasDatos; // Referencia al Canvas que contiene los datos de la partida


    void OnCollisionEnter2D(Collision2D collision)
    {
        // Verificamos si el personaje ha colisionado con la puerta
        if (collision.gameObject.tag == "Puerta")
        {
            // Llamamos a una función para terminar el juego
            TerminarJuego();

            
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Puerta")
        {
            // Llamamos a una función para terminar el juego
            TerminarJuego();
            UnityEngine.Debug.Log(" :(");
        }

    }

    // Función para terminar el juego
    void TerminarJuego()
    {
       
        // Activamos el Canvas de "Has ganado"
        canvasGanador.SetActive(true);
        Time.timeScale = 0f;
        canvasDatos.SetActive(false);

    }

}

