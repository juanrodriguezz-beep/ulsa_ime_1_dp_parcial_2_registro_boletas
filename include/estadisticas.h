#pragma once

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void mostrarEstadisticas(
	const std::string nombres[],
	const double espanol[],
	const double matematicas[],
	const double disenoProgramas[],
	int total)
{
	const int CANTIDAD_MATERIAS = 3;
    (void)nombres;

	if (total <= 0) {
		std::cout << "No hay alumnos registrados.\n";
		return;
	}

	double sumaEspanol = 0;
	double sumaMatematicas = 0;
	double sumaDiseno = 0;

	for (int i = 0; i < total; i++) {
		sumaEspanol += espanol[i];
		sumaMatematicas += matematicas[i];
		sumaDiseno += disenoProgramas[i];
	}

	double promedioEspanol = sumaEspanol / total;
	double promedioMatematicas = sumaMatematicas / total;
	double promedioDiseno = sumaDiseno / total;

	int indiceMayor = 0;
	int indiceMenor = 0;

	double promedios[CANTIDAD_MATERIAS] = {
		promedioEspanol,
		promedioMatematicas,
		promedioDiseno
	};

	for (int i = 1; i < CANTIDAD_MATERIAS; i++) {
		if (promedios[i] > promedios[indiceMayor]) {
			indiceMayor = i;
		}

		if (promedios[i] < promedios[indiceMenor]) {
			indiceMenor = i;
		}
	}

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "--- ESTADISTICAS POR MATERIA ---\n";
	std::cout << "Espanol: " << promedioEspanol << "\n";
	std::cout << "Matematicas: " << promedioMatematicas << "\n";
	std::cout << "Diseno de Programas: " << promedioDiseno << "\n";

	std::cout << "Materia mas alta: ";

	switch (indiceMayor) {
		case 0:
			std::cout << "Espanol\n";
			break;
		case 1:
			std::cout << "Matematicas\n";
			break;
		case 2:
			std::cout << "Diseno de Programas\n";
			break;
		default:
			std::cout << "Desconocida\n";
			break;
	}

	std::cout << "Materia mas baja: ";

	switch (indiceMenor) {
		case 0:
			std::cout << "Espanol\n";
			break;
		case 1:
			std::cout << "Matematicas\n";
			break;
		case 2:
			std::cout << "Diseno de Programas\n";
			break;
		default:
			std::cout << "Desconocida\n";
			break;
	}
}
