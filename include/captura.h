#pragma once
#include <iostream>
#include <string>
#include "utilerias.h"
#include "registro.h"

const int TOTAL_MATERIAS = 3;  // constante propia

// Pide una calificacion de la materia indicada (1, 2 o 3)
// y repite mientras sea invalida.
double pedirCalificacion(int materia) {
    std::string mensaje;
    switch (materia) {  // decision multiple
        case 1:  mensaje = "Espanol: ";             break;
        case 2:  mensaje = "Matematicas: ";         break;
        default: mensaje = "Diseno de Programas: "; break;
    }
    double calificacion = leerDecimal(mensaje);
    while (!calificacionValida(calificacion)) {  // ciclo
        std::cout << "Calificacion invalida. Debe estar entre "
                  << CALIFICACION_MINIMA << " y " << CALIFICACION_MAXIMA << ".\n";
        calificacion = leerDecimal(mensaje);
    }
    return calificacion;
}

// Captura un alumno. Devuelve el nuevo total.
int capturarAlumno(std::string nombres[], double espanol[], double matematicas[],
                   double diseno[], int total) {
    if (total >= MAX_ALUMNOS) {  // rechazo por lista llena
        std::cout << "La lista esta llena (" << MAX_ALUMNOS << " alumnos).\n";
        return total;
    }

    std::string nombre = leerCadena("Nombre: ");
    while (nombre.empty()) {
        std::cout << "El nombre no puede estar vacio.\n";
        nombre = leerCadena("Nombre: ");
    }

    double cal[TOTAL_MATERIAS];
    for (int m = 0; m < TOTAL_MATERIAS; m++) {
        cal[m] = pedirCalificacion(m + 1);
    }

    int nuevoTotal = agregarAlumno(nombres, espanol, matematicas, diseno,
                                   total, nombre, cal[0], cal[1], cal[2]);
    std::cout << "Alumno " << nuevoTotal << " registrado.\n";
    return nuevoTotal;
}