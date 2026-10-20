#pragma once
#include <iostream>
#include <string>
#include "registro.h"

const int MATERIAS_AR = 3;  // constante propia: numero de materias

// Nombre de la materia segun su indice (0, 1 o 2).
std::string nombreMateriaAR(int materia) {
    switch (materia) {  // decision multiple
        case 0:  return "Espanol";
        case 1:  return "Matematicas";
        default: return "Diseno de Programas";
    }
}

// Calificacion del alumno i en la materia indicada.
double calificacionDeMateria(int materia, int i, const double espanol[],
                             const double matematicas[], const double diseno[]) {
    switch (materia) {  // decision multiple: elige el arreglo
        case 0:  return espanol[i];
        case 1:  return matematicas[i];
        default: return diseno[i];
    }
}

// Por cada materia, dice quien aprobo y quien reprobo, y al final cuenta cuantos.
void aprobadosYReprobados(const std::string nombres[], const double espanol[],
                          const double matematicas[], const double diseno[],
                          int total) {
    if (total == 0) {  // rechazo
        std::cout << "No hay alumnos registrados.\n";
        return;
    }

    std::cout << "--- APROBADOS Y REPROBADOS ---\n";
    for (int m = 0; m < MATERIAS_AR; m++) {      // ciclo por materia
        int aprobados = 0;                       // contadores de la materia
        int reprobados = 0;

        std::cout << nombreMateriaAR(m) << ":\n";
        for (int i = 0; i < total; i++) {        // ciclo por alumno
            double cal = calificacionDeMateria(m, i, espanol, matematicas, diseno);
            if (cal >= CALIFICACION_APROBATORIA) {
                std::cout << "  " << nombres[i] << " aprobado\n";
                aprobados++;
            } else {
                std::cout << "  " << nombres[i] << " reprobado\n";
                reprobados++;
            }
        }
        std::cout << aprobados << (aprobados == 1 ? " aprobado, " : " aprobados, ")
                  << reprobados << (reprobados == 1 ? " reprobado" : " reprobados")
                  << "\n\n";
    }
}