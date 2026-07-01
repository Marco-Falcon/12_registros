#include <iostream>
#include <string>
using namespace std;

struct Persona {
	string nombres;
	string dni;
	int edad;
};

int main() {
	int cantidad;
	Persona lista[150];

	cout << "Ingrese la cantidad de personas: ";
	cin >> cantidad;

	for (int i = 0; i < cantidad; i++) {
		cout << "\nPersona numero " << i + 1 << ":" << endl;

		cout << "Ingrese los nombres (use guion bajo para los espacios '_'): ";
		cin >> lista[i].nombres;

		cout << "Ingrese el DNI: ";
		cin >> lista[i].dni;

		cout << "Ingrese la edad: ";
		cin >> lista[i].edad;
	}

	int mayores50 = 0;
	int sumaEdades = 0;
	float promedio;

	for (int i = 0; i < cantidad; i++) {
		if (lista[i].edad > 50) {
			mayores50++;
		}

		sumaEdades += lista[i].edad;
	}

	promedio = (float)sumaEdades / cantidad;

	cout << "\nCantidad de personas mayores de 50 anios: " << mayores50 << endl;
	cout << "Promedio de edades: " << promedio << endl;

	cout << "\nListado de personas registradas:" << endl;

	for (int i = 0; i < cantidad; i++) {
		cout << "\nPersona " << i + 1 << ":" << endl;
		cout << "Nombres: " << lista[i].nombres << endl;
		cout << "DNI: " << lista[i].dni << endl;
		cout << "Edad: " << lista[i].edad << endl;
	}

	return 0;
}
