
#pragma once

#include <iostream>
#include <string>
#include "registro.h"

void mostrarMateriasReprobadas(
    const std::string nombres[],
    const double espanol[],
    const double matematicas[],
    const double diseno[],
    int totalAlumnos
) {
    const int CANTIDAD_MATERIAS = 3;

    if (totalAlumnos == 0) {
        std::cout << "No hay alumnos registrados." << std::endl;
        return;
    }

    int alumnosConReprobadas = 0;

    std::cout << "--- MATERIAS REPROBADAS POR ALUMNO ---"
              << std::endl;

    for (int i = 0; i < totalAlumnos; i++) {
        int materiasReprobadas = 0;

        for (int materia = 0;
             materia < CANTIDAD_MATERIAS;
             materia++) {

            switch (materia) {
                case 0:
                    if (espanol[i] < CALIFICACION_APROBATORIA) {
                        materiasReprobadas++;
                    }
                    break;

                case 1:
                    if (matematicas[i] < CALIFICACION_APROBATORIA) {
                        materiasReprobadas++;
                    }
                    break;

                case 2:
                    if (diseno[i] < CALIFICACION_APROBATORIA) {
                        materiasReprobadas++;
                    }
                    break;

                default:
                    break;
            }
        }

        if (materiasReprobadas > 0) {
            std::cout << nombres[i] << " "
                      << materiasReprobadas << std::endl;

            alumnosConReprobadas++;
        }
    }

    std::cout << "Alumnos con materias reprobadas: "
              << alumnosConReprobadas << std::endl;
}
