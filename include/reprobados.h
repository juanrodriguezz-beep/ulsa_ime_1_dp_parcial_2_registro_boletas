#pragma once
#include <iostream>
#include <string>
#include "registro.h"

const int MINIMO_REPROBADAS = 1;  // constante propia

// Lista a los alumnos que reprueban al menos una materia y cuantas.
void materiasReprobadasPorAlumno(const std::string nombres[], const double espanol[],
                                 const double matematicas[], const double diseno[],
                                 int total) {
    if (total == 0) {  // rechazo
        std::cout << "No hay alumnos registrados.\n";
        return;
    }

    int alumnosConReprobadas = 0;  // contador del grupo
    std::cout << "--- MATERIAS REPROBADAS POR ALUMNO ---\n";
    for (int i = 0; i < total; i++) {  // ciclo
        int reprobadas = 0;  // contador por alumno
        if (espanol[i] < CALIFICACION_APROBATORIA) reprobadas++;
        if (matematicas[i] < CALIFICACION_APROBATORIA) reprobadas++;
        if (diseno[i] < CALIFICACION_APROBATORIA) reprobadas++;

        if (reprobadas >= MINIMO_REPROBADAS) {
            std::cout << nombres[i] << "  " << reprobadas << "\n";
            alumnosConReprobadas++;
        }
    }

    switch (alumnosConReprobadas) {  // decision multiple
        case 0:
            std::cout << "Ningun alumno reprueba materias.\n";
            break;
        default:
            std::cout << "Alumnos con materias reprobadas: " << alumnosConReprobadas << "\n";
            break;
    }
}
