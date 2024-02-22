using System.Reflection;
using UnityEngine;
using UnityEngine.UI;

public class vidas : MonoBehaviour
{
    public Sprite tresVidas;
    public Sprite dosVidas;
    public Sprite unaVida;
    public Sprite ceroVidas;

    public Text textoPuntos;

    public Image vidasImagen; //Referencia a la imagen de vidas del canvaDatos

    private Sprite[] lista;

    private int vida = 3;

    void Start()
    {
        lista = new Sprite[] { ceroVidas, unaVida, dosVidas, tresVidas };
    }

    void Update()
    {
        int puntos = int.Parse(textoPuntos.text);

        if (puntos >= 10)
        {
            if (vida < 3)
            {
                vida++;
                
                puntos = puntos - 10;  
            }
            comprobarVida();
        }
        textoPuntos.text = puntos.ToString();
    }

    void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "enemy")
        {
            if (vida > 0)
            {
               vida--;
                        }
            comprobarVida(); 

        }
        if (collision.gameObject.tag == "mortal")
        {   
            vida = 0;
            // vidasImagen.sprite = lista[0];
            comprobarVida();
            
        }

    }

    void comprobarVida()
    {
        // Verifica si el índice de vida está dentro del rango de la lista
        if (vida >= 0 && vida < lista.Length)
        {
            // Cambiamos la imagen de acuerdo a la cantidad de vida
            vidasImagen.sprite = lista[vida];
        }
        else
        {
            vidasImagen.sprite = lista[0];
        }
    }
}

