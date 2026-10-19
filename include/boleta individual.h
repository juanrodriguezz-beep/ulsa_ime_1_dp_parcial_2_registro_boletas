
#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include "utilerias.h"

using namespace std;

void boletaIndividual(
    string nombres[],
    double espanol[],
    double matematicas[],
    double diseno[],
    int totalAlumnos
)
{
    // Rechazo: lista vacia
    if (totalAlumnos == 0)
    {
        cout << "No hay alumnos registrados." << endl;
        return;
    }

    // Pedir nombre del alumno
    string nombreBuscado = leerCadena("Nombre a buscar: ");

    // Buscar alumno
    int posicion = -1;

    for (int i = 0; i < totalAlumnos; i++)
    {
        if (nombres[i] == nombreBuscado)
        {
            posicion = i;
            break;
        }
    }

    // Rechazo: alumno no encontrado
    if (posicion == -1)
    {
        cout << "No se encontro al alumno "
             << nombreBuscado << "." << endl;
        return;
    }

    // Calcular promedio
    double promedio = (
        espanol[posicion] +
        matematicas[posicion] +
        diseno[posicion]
    ) / 3.0;

    // Contar materias reprobadas
    int reprobadas = 0;

    if (espanol[posicion] < 7.0)
    {
        reprobadas++;
    }

    if (matematicas[posicion] < 7.0)
    {
        reprobadas++;
    }

    if (diseno[posicion] < 7.0)
    {
        reprobadas++;
    }

    // Mostrar boleta
    cout << fixed << setprecision(1);

    cout << "\n--- BOLETA ---" << endl;
    cout << "Alumno: " << nombres[posicion] << endl;
    cout << "Espanol: " << espanol[posicion] << endl;
    cout << "Matematicas: " << matematicas[posicion] << endl;
    cout << "Diseno de Programas: "
         << diseno[posicion] << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Materias reprobadas: "
         << reprobadas << endl;

    // Determinar estado mediante decision multiple
    switch (reprobadas)
    {
        case 0:
            cout << "Estado: Aprobado" << endl;
            break;

        case 1:
        case 2:
        case 3:
            cout << "Estado: Reprobado" << endl;
            break;
    }
}
