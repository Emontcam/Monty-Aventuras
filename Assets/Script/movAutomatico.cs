using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class movAutomatico : MonoBehaviour
{
    public float limiteX = 10f;
    public float velocidad = 5f;

    private String direccion;
    private Vector2 coordenadasOriginales;
    private Vector2 coordenadas;
    private bool limiteDerecha;
    private bool limiteIzquierda;
    // Start is called before the first frame update
    void Start()
    {
        coordenadasOriginales = transform.position;
        Debug.Log(coordenadasOriginales.x + " //" + limiteX);
    }

    // Update is called once per frame
    void Update()
    {
        //obtenemos las coordenadas actuales
        coordenadas = transform.position;
        //vamos sumando punto a punto hasta llegar al límite y hacemos el proceso contrario

        if (coordenadas.x >= limiteX)
        {
            
            limiteDerecha = true;
            limiteIzquierda = false;
            Debug.Log("DERECHA");
            

        }
        else if (coordenadas.x <= coordenadasOriginales.x)
        {
            limiteIzquierda = true;
           limiteDerecha = false;
            Debug.Log("IZQUIERDA");

        }

        if (limiteIzquierda)
        {
             //reestablecemos la posición
            GetComponent<Rigidbody2D>().velocity = new Vector2(velocidad, 0);

        }
        else if( limiteDerecha)
        {
            GetComponent<Rigidbody2D>().velocity = new Vector2(-velocidad, 0);
        }

    }



}
