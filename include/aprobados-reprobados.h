#pragma once
// Bloque: Aprobados y reprobados por materia
#include <iostream>
#include <string>
#include "registro.h"

// Constante propia: materias que se reportan
const int MATERIAS_REPORTE = 3;

// Cuenta cuantas calificaciones del arreglo son aprobatorias.
int contarAprobados(const double calif[], int total) {
    int aprobados = 0;
    for (int i = 0; i < total; i++) {
        if (calif[i] >= CALIFICACION_APROBATORIA) {
            aprobados++;
        }
    }
    return aprobados;
}

// Imprime aprobados y reprobados de cada materia.
void reporteAprobados(const std::string /*nombres*/[], const double esp[],
                      const double mat[], const double dp[], int total) {
    // Rechazo: lista vacia
    if (total == 0) {
        std::cout << "No hay alumnos registrados.\n";
        return;
    }

    std::cout << "--- APROBADOS Y REPROBADOS ---\n";
    for (int m = 0; m < MATERIAS_REPORTE; m++) {
        const double* calif;
        std::string etiqueta;
        switch (m) {
            case 0:
                calif = esp;
                etiqueta = "Espanol";
                break;
            case 1:
                calif = mat;
                etiqueta = "Matematicas";
                break;
            default:
                calif = dp;
                etiqueta = "Diseno de Programas";
                break;
        }

        int aprobados = contarAprobados(calif, total);
        int reprobados = total - aprobados;
        std::cout << etiqueta << ": " << aprobados
                  << (aprobados == 1 ? " aprobado, " : " aprobados, ")
                  << reprobados
                  << (reprobados == 1 ? " reprobado" : " reprobados") << "\n";
    }
}