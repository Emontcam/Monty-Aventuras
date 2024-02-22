using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class perseguir : MonoBehaviour
{
    public Transform objetivo; // Referencia al perro
    public float velocidadPersecucion = 5f; // Velocidad con la que el objeto va a perseguir
    public float distanciaMinima = 1.0f; // Distancia mínima para alcanzar al objetivo
    public float distanciaRetroceso = 2.0f; // Distancia para retroceder cuando alcanza al objetivo

    private float velocidad;

    void Start()
    {
        velocidad = velocidadPersecucion;
    }


    void Update()
    {
        // Calcula la dirección hacia el objetivo
        Vector3 direccion = (objetivo.position - transform.position).normalized;
        float distanciaAlObjetivo = Vector3.Distance(transform.position, objetivo.position);

        // Si la distancia al objetivo es mayor que la distancia mínima, persigue al objetivo
        if (distanciaAlObjetivo > distanciaMinima)
        {
            //si la velocidad es diferente de la elegida para el personaje la cambiamos
            if (velocidadPersecucion != velocidad)
            {
                velocidadPersecucion = velocidad;
            }
            // Mueve el objeto perseguidor hacia el objetivo
            transform.position += direccion * velocidadPersecucion * Time.deltaTime;

            
        }
        else
        {
            //bajamos un poco la velocidad
            velocidadPersecucion = velocidadPersecucion * 5;
            // Si está lo suficientemente cerca del objetivo, retrocede
            transform.position -= direccion * velocidadPersecucion * Time.deltaTime * distanciaRetroceso;
            
        }
    }
}

