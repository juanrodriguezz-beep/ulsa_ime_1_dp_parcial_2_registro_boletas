#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "registro.h"

const int MATERIAS_ESTADISTICAS = 3;  // constante propia

std::string nombreMateria(int indice) {
    switch (indice) {  // decision multiple
        case 0:  return "Espanol";
        case 1:  return "Matematicas";
        default: return "Diseno de Programas";
    }
}

void estadisticasPorMateria(const std::string nombres[], const double espanol[],
                            const double matematicas[], const double diseno[],
                            int total) {
    if (total == 0) {  // rechazo
        std::cout << "No hay alumnos registrados.\n";
        return;
    }
    (void)nombres;  // no se usa, pero la firma recibe los cuatro arreglos

    double suma[MATERIAS_ESTADISTICAS] = {0.0, 0.0, 0.0};  // acumuladores
    for (int i = 0; i < total; i++) {  // ciclo
        suma[0] += espanol[i];
        suma[1] += matematicas[i];
        suma[2] += diseno[i];
    }

    int masAlta = 0, masBaja = 0;
    std::cout << "--- ESTADISTICAS POR MATERIA ---\n" << std::fixed << std::setprecision(1);
    for (int m = 0; m < MATERIAS_ESTADISTICAS; m++) {
        double promedio = suma[m] / total;
        std::cout << nombreMateria(m) << ": " << promedio << "\n";
        if (suma[m] > suma[masAlta]) masAlta = m;  // empate: gana la primera
        if (suma[m] < suma[masBaja]) masBaja = m;
    }
    std::cout << "Mas alta: " << nombreMateria(masAlta) << "\n";
    std::cout << "Mas baja: " << nombreMateria(masBaja) << "\n";
}