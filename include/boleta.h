#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "utilerias.h"
#include "registro.h"

const int MATERIAS_BOLETA = 3;  // constante propia

// Busca a un alumno por nombre y muestra su boleta.
void boletaIndividual(const std::string nombres[], const double espanol[],
                      const double matematicas[], const double diseno[],
                      int total) {
    if (total == 0) {  // rechazo: lista vacia
        std::cout << "No hay alumnos registrados.\n";
        return;
    }

    std::string buscado = leerCadena("Nombre a buscar: ");

    int posicion = -1;
    for (int i = 0; i < total; i++) {  // ciclo de busqueda
        if (nombres[i] == buscado) {
            posicion = i;
            break;
        }
    }

    if (posicion == -1) {  // rechazo: no encontrado
        std::cout << "No se encontro al alumno " << buscado << ".\n";
        return;
    }

    double suma = espanol[posicion] + matematicas[posicion] + diseno[posicion];
    double promedio = suma / MATERIAS_BOLETA;

    int reprobadas = 0;  // contador
    if (espanol[posicion] < CALIFICACION_APROBATORIA) reprobadas++;
    if (matematicas[posicion] < CALIFICACION_APROBATORIA) reprobadas++;
    if (diseno[posicion] < CALIFICACION_APROBATORIA) reprobadas++;

    std::string estado;
    switch (reprobadas) {  // decision multiple
        case 0:  estado = "Aprobado";   break;
        default: estado = "Reprobado";  break;
    }

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "--- BOLETA ---\n";
    std::cout << "Alumno: " << nombres[posicion] << "\n";
    std::cout << "Espanol: " << espanol[posicion]
              << "   Matematicas: " << matematicas[posicion]
              << "   Diseno de Programas: " << diseno[posicion] << "\n";
    std::cout << "Promedio: " << promedio
              << "   Materias reprobadas: " << reprobadas
              << "   Estado: " << estado << "\n";
}