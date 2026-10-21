// Proyecto Parcial 2: Sistema de Registro y Boletas de un Grupo Escolar
// Programa principal (bloque de integracion, de todo el equipo).
//
// Compilar (desde la carpeta del proyecto):
//   g++ -Wall -Wextra -std=c++17 -Iinclude src/main.cpp -o boletas
// Ejecutar:
//   ./boletas

#include <iostream>
#include <string>

#include "utilerias.h"
#include "registro.h"
#include "aprobados reprobados.h"
#include "boleta individual.h"
#include "captura.h"
#include "estadisticas.h"
#include "materias reprobadas.h"
#include "MejorPeorDesempeno.h"

int main() {
    // Arreglos paralelos: el mismo indice es el mismo alumno
    std::string nombres[MAX_ALUMNOS];
    double esp[MAX_ALUMNOS];
    double mat[MAX_ALUMNOS];
    double dp[MAX_ALUMNOS];
    int total = 0;

    const int OPCION_SALIR = 8;
    int opcion;

    do {
        std::cout << "\n1. Capturar alumno\n"
                  << "2. Mostrar lista\n"
                  << "3. Estadisticas por materia\n"
                  << "4. Aprobados y reprobados\n"
                  << "5. Boleta individual\n"
                  << "6. Materias reprobadas por alumno\n"
                  << "7. Mejor y peor desempeno\n"
                  << "8. Salir\n";
        opcion = leerEntero("Opcion: ");

        switch (opcion) {
            case 1:
                capturarAlumno(nombres, esp, mat, dp, total);
                break;
            case 2:
                mostrarLista(nombres, esp, mat, dp, total);
                break;
            case 3:
                mostrarEstadisticas(nombres, esp, mat, dp, total);
                break;
            case 4:
                reporteAprobados(nombres, esp, mat, dp, total);
                break;
            case 5:
                boletaIndividual(nombres, esp, mat, dp, total);
                break;
            case 6:
                mostrarMateriasReprobadas(nombres, esp, mat, dp, total);
                break;
            case 7:
                 mostrarMejorPeorDesempeno(nombres, esp, mat, dp, total);
                 break;
            case OPCION_SALIR:
                std::cout << "Hasta luego.\n";
                break;
            default:
                std::cout << "Opcion invalida.\n";
                break;
        }
    } while (opcion != OPCION_SALIR);

    return 0;
}