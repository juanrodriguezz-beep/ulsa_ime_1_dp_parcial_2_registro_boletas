#include <iostream>
#include <string>
#include "materias reprobadas.h"

int main() {
    std::string nombres[] = {"Juan", "Maria", "Carlos"};
    double espanol[] = {6.0, 8.0, 5.0};
    double matematicas[] = {9.0, 6.0, 4.0};
    double diseno[] = {5.0, 9.0, 6.0};
    int totalAlumnos = 3;

    mostrarMateriasReprobadas(
        nombres, espanol, matematicas, diseno, totalAlumnos
    );

    return 0;
}
