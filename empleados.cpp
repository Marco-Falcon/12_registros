#include <iostream>
#include <string>
using namespace std;

//se defiene la estructura
struct empleados{
	int numero;
	string nombres;
	int ventas[12];
	float salario;
};

int main(){
	int n;
	empleados E[150];
	cout<< "ingrese la acntidad de empleados: ";
	cin>> n;
	
	//agregar los datos de los empleados
	for(int i = 0; i < n; i++){
		cout<<"\nEmpleado numero "<< i+1 <<": \n";
		
		cout << "ingrese el numero: ";
		cin >> E[i].numero;
		
		cout << "Ingrese los nombres:";
		cin >> E[i].nombres;
		
		for (int j = 0; j < 12; j++){
			cout << "-Ingrese la cantidad de ventas del mes " << j + 1 <<": ";
			cin >> E[i].ventas[j];
		}
		
		
	}
	
	
	return 0;
}
