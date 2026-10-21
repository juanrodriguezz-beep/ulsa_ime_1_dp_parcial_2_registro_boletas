#pragma once

#include <iostream>
#include <string>
#include "utilerias.h"
#include "registro.h"

using namespace std;

const int TOTAL_MATERIAS = 3;

// Solicita una calificacion valida para una materia
double pedirCalificacion(int materia)
{
    string nombreMateria;

    switch (materia)
    {
        case 0:
            nombreMateria = "Espanol";
            break;

        case 1:
            nombreMateria = "Matematicas";
            break;

        case 2:
            nombreMateria = "Diseno de Programas";
            break;

        default:
            nombreMateria = "Materia";
            break;
    }

    double calificacion;

    do
    {
        calificacion = leerDecimal(
            "Calificacion de " + nombreMateria + " (0-10): "
        );

        if (calificacion < 0.0 || calificacion > 10.0)
        {
            cout << "Error: la calificacion debe estar entre 0 y 10.\n";
        }

    } while (calificacion < 0.0 || calificacion > 10.0);

    return calificacion;
}

inline void capturarAlumno(
    string nombres[],
    double espanol[],
    double matematicas[],
    double diseno[],
    int &total
)
{
    if (total >= MAX_ALUMNOS)
    {
        cout << "No se pueden registrar mas alumnos.\n";
        return;
    }

    string nombre = leerCadena("Nombre del alumno: ");

    while (nombre.empty())
    {
        cout << "El nombre no puede estar vacio.\n";
        nombre = leerCadena("Nombre del alumno: ");
    }

    double calEspanol = pedirCalificacion(0);
    double calMatematicas = pedirCalificacion(1);
    double calDiseno = pedirCalificacion(2);

    int nuevoTotal = agregarAlumno(
        nombres,
        espanol,
        matematicas,
        diseno,
        total,
        nombre,
        calEspanol,
        calMatematicas,
        calDiseno
    );

    if (nuevoTotal > total)
    {
        total = nuevoTotal;
        cout << "Alumno registrado correctamente.\n";
    }
}