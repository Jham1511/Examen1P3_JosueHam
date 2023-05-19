#include <iostream>
using namespace std;

int menu() {
	cout << "\nMenu del Programa" << endl
		<< "1 -> Agregar Auto" << endl
		<< "2 -> Modificar Auto" << endl
		<< "3 -> Ordenar Autos" << endl
		<< "4 -> Carrera" << endl
		<< "5 -> Salir" << endl
		<< "Ingrese la opcion que desea: " << endl;
	int numero;
	cin >> numero;
	return numero;
}


int main() {
	int opcionIngresada = menu();
	while (opcionIngresada != 5) {
		switch (opcionIngresada) {
		case 1: {

			break;
		}
		case 2: {

			break;
		}
		case 3: {

			break;
		}
		case 4: {

			break;
		}
		  defaut:
			  cout << "..." << endl;
		}
		opcionIngresada = menu();
	}//Fin del while
}