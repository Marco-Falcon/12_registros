#include <iostream>
#include <string>
using namespace std;

struct Atleta {
	string nombres;
	string pais;
	string disciplina;
	int medallas;
};

int main() {
	int n;
	Atleta lista[150];

	cout << "Ingrese la cantidad de atletas: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "\nAtleta numero " << i + 1 << ":" << endl;

		cout << "Ingrese el nombre: ";
		cin >> lista[i].nombres;

		cout << "Ingrese el pais: ";
		cin >> lista[i].pais;

		cout << "Ingrese la disciplina: ";
		cin >> lista[i].disciplina;

		cout << "Ingrese el numero de medallas: ";
		cin >> lista[i].medallas;
	}

	string buscarPais;

	cout << "\nIngrese el nombre del pais: ";
	cin >> buscarPais;

	int mayor = -1;

	cout << "\nAtletas del pais " << buscarPais << ":" << endl;

	for (int i=0 ; i<n ; i++) {
		if (lista[i].pais == buscarPais) {

			cout << "\nNombre: " << lista[i].nombres << endl;
			cout << "Pais: " << lista[i].pais << endl;
			cout << "Disciplina: " << lista[i].disciplina << endl;
			cout << "Medallas: " << lista[i].medallas << endl;

			if (mayor == -1 || lista[i].medallas > lista[mayor].medallas) {
				mayor = i;
			}
		}
	}

	if (mayor != -1) {
		cout << "\nAtleta con mayor numero de medallas:" << endl;
		cout << "Nombre: " << lista[mayor].nombres << endl;
		cout << "Pais: " << lista[mayor].pais << endl;
		cout << "Disciplina: " << lista[mayor].disciplina << endl;
		cout << "Medallas: " << lista[mayor].medallas << endl;
	}
	else {
		cout << "\nNo se encontraron atletas de ese pais." << endl;
	}

	return 0;
}
