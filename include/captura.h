#pragma once
// Bloque: Captura de alumno
#include <iostream>
#include <string>
#include "registro.h"
#include "utilerias.h"

// Constante propia: numero de materias que se capturan
const int NUM_MATERIAS = 3;

// Pide la calificacion de una materia (0 = Espanol, 1 = Matematicas,
// otro = Diseno de Programas) y repite mientras sea invalida.
double pedirCalificacion(int materia) {
    std::string etiqueta;
    switch (materia) {
        case 0:
            etiqueta = "Espanol: ";
            break;
        case 1:
            etiqueta = "Matematicas: ";
            break;
        default:
            etiqueta = "Diseno de Programas: ";
            break;
    }

    double calif = leerDecimal(etiqueta);
    while (!calificacionValida(calif)) {
        std::cout << "Calificacion invalida. Debe estar entre "
                  << CALIFICACION_MINIMA << " y " << CALIFICACION_MAXIMA << ".\n";
        calif = leerDecimal(etiqueta);
    }
    return calif;
}

// Captura un alumno completo. Devuelve el nuevo total de alumnos.
int capturarAlumno(std::string nombres[], double esp[], double mat[],
                   double dp[], int total) {
    // Rechazo: lista llena
    if (total >= MAX_ALUMNOS) {
        std::cout << "La lista esta llena (" << MAX_ALUMNOS << " alumnos).\n";
        return total;
    }

    // Rechazo: nombre vacio
    std::string nombre = leerCadena("Nombre: ");
    while (nombre.empty()) {
        std::cout << "El nombre no puede quedar vacio.\n";
        nombre = leerCadena("Nombre: ");
    }

    double calif[NUM_MATERIAS];
    for (int i = 0; i < NUM_MATERIAS; i++) {
        calif[i] = pedirCalificacion(i);
    }

    int nuevoTotal = agregarAlumno(nombres, esp, mat, dp, total,
                                   nombre, calif[0], calif[1], calif[2]);
    std::cout << "Alumno " << nuevoTotal << " registrado.\n";
    return nuevoTotal;
}