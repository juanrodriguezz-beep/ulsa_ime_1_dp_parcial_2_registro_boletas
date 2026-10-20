#pragma once
#include <iostream>
#include <string>
#include "registro.h"

const int MATERIAS_REPORTE = 3;

int contarAprobados(const double calif[], int total) {
    int aprobados = 0;
    for (int i = 0; i < total; i++) {
        if (calif[i] >= CALIFICACION_APROBATORIA) {
            aprobados++;
        }
    }
    return aprobados;
}

void reporteAprobados(const std::string /*nombres*/[], const double esp[],
                      const double mat[], const double dp[], int total) {
    if (total == 0) {
        std::cout << "No hay alumnos registrados.\n";
        return;
    }

    std::cout << "--- APROBADOS Y REPROBADOS ---\n";
    for (int m = 0; m < MATERIAS_REPORTE; m++) {
        int aprobados;
        std::string materia;

        switch (m) {
            case 0:
                aprobados = contarAprobados(esp, total);
                materia = "Espanol";
                break;
            case 1:
                aprobados = contarAprobados(mat, total);
                materia = "Matematicas";
                break;
            default:
                aprobados = contarAprobados(dp, total);
                materia = "Diseno de Programas";
                break;
        }

        int reprobados = total - aprobados;
        std::cout << materia << ": " << aprobados << " aprobados, "
                  << reprobados << " reprobados\n";
    }
}