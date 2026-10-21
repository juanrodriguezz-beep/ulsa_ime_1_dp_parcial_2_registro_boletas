#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Bloque: Mejor y peor desempeno
// Recibe los 4 arreglos paralelos y la cantidad de alumnos registrados
void mostrarMejorPeorDesempeno(const string nombres[], const double esp[], const double mat[], const double dp[], int totalAlumnos) {
    
    // Rechazo obligatorio: Verificar lista vacia
    if (totalAlumnos == 0) {
        cout << "\nNo hay alumnos registrados." << endl;
        return;
    }

    // Constante propia exigida por contrato
    const int TOTAL_MATERIAS = 3;

    double mayorPromedio = -1.0;
    double menorPromedio = 11.0;
    int indiceMejor = 0;
    int indicePeor = 0;

    // Ciclo para recorrer a los alumnos registrados
    for (int i = 0; i < totalAlumnos; i++) {
        // Acumulador para obtener el promedio del alumno i
        double suma = esp[i] + mat[i] + dp[i];
        double promedio = suma / TOTAL_MATERIAS;

        // Comparacion para determinar extremos
        if (promedio > mayorPromedio) {
            mayorPromedio = promedio;
            indiceMejor = i;
        }

        if (promedio < menorPromedio) {
            menorPromedio = promedio;
            indicePeor = i;
        }
    }

    // Decision multiple para el formato de salida
    cout << "\n--- MEJOR Y PEOR DESEMPENO ---" << endl;
    
    if (totalAlumnos == 1) {
        cout << "Solo hay 1 alumno registrado:" << endl;
        cout << "Alumno: " << nombres[0] 
             << " | Promedio: " << fixed << setprecision(1) << mayorPromedio << endl;
    } else if (indiceMejor == indicePeor) {
        cout << "Todos los alumnos registrados tienen el mismo promedio: " 
             << fixed << setprecision(1) << mayorPromedio << endl;
    } else {
        cout << "Mejor desempeno: " << nombres[indiceMejor] 
             << " con promedio de " << fixed << setprecision(1) << mayorPromedio << endl;
        cout << "Peor desempeno: " << nombres[indicePeor] 
             << " con promedio de " << fixed << setprecision(1) << menorPromedio << endl;
    }
}