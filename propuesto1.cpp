#include <iostream>
#include <string>
using namespace std;

struct Empleado {
	string nombre;
	char sexo;
	float sueldo;
};

int main() {
	int cantidad;
	Empleado lista[150];

	cout << "ingrese el numero de empleados: ";
	cin >> cantidad;

	for (int i = 0; i< cantidad; i++) {
		cout<<"empleado numero "<<i+1<<": "<<endl;
		cout << "\nnombre del empleado: \n";
		cin >> lista[i].nombre;

		cout << "\nsexo del empleado: \n";
		cin >> lista[i].sexo;

		cout << "\nsueldo del empleado: \n";
		cin >> lista[i].sueldo;
		cout<<endl;
	}

	cout<<endl;

	int mayor = 0;

	for (int i = 0; i < cantidad; i++) {
		if (lista[i].sueldo > lista[mayor].sueldo) {
			mayor = i;
		}
	}

	int menor = 0;

	for (int i = 0; i < cantidad; i++) {
		if (lista[i].sueldo < lista[menor].sueldo) {
			menor = i;
		}
	}

	cout << "empleados con el sueldo mas alto y mas bajo:" << endl;
	cout << "nombre : " << lista[mayor].nombre << "    " << lista[menor].nombre << endl;
	cout << "sexo   : " << lista[mayor].sexo << "    " << lista[menor].sexo << endl;
	cout << "sueldo : " << lista[mayor].sueldo << "    " << lista[menor].sueldo << endl;

	return 0;
}
