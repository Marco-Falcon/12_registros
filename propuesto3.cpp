#include <iostream>
#include <string>
using namespace std;

struct Persona {
	string nombre;
	int dia;
	int mes;
	int anio;
};

int main() {
	int cantidad;
	Persona lista[150];

	cout << "Ingrese la cantidad de personas: ";
	cin >> cantidad;

	for (int i = 0; i < cantidad; i++) {
		cout << "\nPersona numero " << i + 1 << ":" << endl;

		cout << "Ingrese el nombre: ";
		cin >> lista[i].nombre;

		cout << "Ingrese el dia de nacimiento: ";
		cin >> lista[i].dia;

		cout << "Ingrese el mes de nacimiento: ";
		cin >> lista[i].mes;

		cout << "Ingrese el anio de nacimiento: ";
		cin >> lista[i].anio;
	}

	int buscarMes;

	while (true) { //se pone true ya que se va 
		cout << "\nIngrese el numero del mes (0 para salir): ";
		cin >> buscarMes;

		if (buscarMes == 0) {
			break;
		}

		cout << "\nPersonas que cumplen en el mes " << buscarMes << ":" << endl;

		for (int i = 0; i < cantidad; i++) {
			if (lista[i].mes == buscarMes) {
				cout << "\nNombre: " << lista[i].nombre << endl;
				cout << "Fecha de nacimiento: ";
				cout << lista[i].dia << "/"
				     << lista[i].mes << "/"
				     << lista[i].anio << endl;
			}
		}
	}

	return 0;
}
