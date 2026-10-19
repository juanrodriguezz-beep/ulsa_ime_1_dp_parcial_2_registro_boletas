#pragma once

#include <iostream>
#include <string>

using namespace std;


void boletaIndividual(
    string nombres[],
    double espanol[],
    double matematicas[],
    double diseno[],
    int totalAlumnos
)
{
    // Rechazo: lista vacía
    if(totalAlumnos == 0)
    {
        cout << "No hay alumnos registrados." << endl;
        return;
    }

    // Pedir nombre
    string nombreBuscado;

    cout << "Nombre a buscar: ";
    getline(cin, nombreBuscado);

    // Buscar alumno
    int posicion = -1;

    for(int i = 0; i < totalAlumnos; i++)
    {
        if(nombres[i] == nombreBuscado)
        {
            posicion = i;
        }
    }

    // Rechazo: alumno no encontrado
    if(posicion == -1)
    {
        cout << "No se encontro al alumno." << endl;
        return;
    }
}