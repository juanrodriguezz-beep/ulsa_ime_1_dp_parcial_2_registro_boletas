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
#include "aprobados.h"
#include "aprobados-reprobados.h"
//#include "boleta.h"
#include "boleta individual.h"
#include "captura.h"
#include "estadisticas.h"
#include "materias-reprobadas.h"
#include "mejor-peor-desempeno.h"
#include "reprobados.h"

int main() {
    std::string nombres[MAX_ALUMNOS];
    double espanol[MAX_ALUMNOS];
    double matematicas[MAX_ALUMNOS];
    double diseno[MAX_ALUMNOS];
    int total = 0;

    const int OPCION_SALIR = 7;
    int opcion = 0;

    while (opcion != OPCION_SALIR) {
        std::cout << "\n1. Capturar alumno\n"
                  << "2. Mostrar lista\n"
                  << "3. Estadisticas por materia\n"
                  << "4. Aprobados y reprobados\n"
                  << "5. Boleta individual\n"
                  << "6. Materias reprobadas por alumno\n"
                  << "7. Salir\n";
        opcion = leerEntero("Opcion: ");

        switch (opcion) {
            case 1:
                total = capturarAlumno(nombres, espanol, matematicas, diseno, total);
                break;
            case 2:
                mostrarLista(nombres, espanol, matematicas, diseno, total);
                break;
            case 3:
                estadisticasPorMateria(nombres, espanol, matematicas, diseno, total);
                break;
            case 4:
                aprobadosYReprobados(nombres, espanol, matematicas, diseno, total);
                break;
            case 5:
                boletaIndividual(nombres, espanol, matematicas, diseno, total);
                break;
            case 6:
                materiasReprobadasPorAlumno(nombres, espanol, matematicas, diseno, total);
                break;
            case OPCION_SALIR:
                std::cout << "Hasta luego.\n";
                break;
            default:
                std::cout << "Opcion invalida.\n";
        }
    }
    return 0;
}
