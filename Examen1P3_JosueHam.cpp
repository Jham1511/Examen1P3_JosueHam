#include <iostream>
#include <vector>
#include "Auto.h"
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
	vector <Auto> autosIngresados;
	while (opcionIngresada != 5) {
		switch (opcionIngresada) {
		case 1: {
			cout << "Bienvenido a agregar carros" << endl
				<< "Ingrese los atributos del auto" << endl;
			cout << "Ingrese la marca del auto: ";
			string marca; cin >> marca;
			cout << "Ingrese el modelo del auto: ";
			string modelo; cin >> modelo;
			cout << "Ingrese la velocidad maxima del auto: ";
			int velMax; cin >> velMax;
			cout << "Ingrese los caballos de fuerza del auto: ";
			int caballosFuerzaAuto; cin >> caballosFuerzaAuto;
			cout << "Ingrese la aceleracion del auto: ";
			float aceleracionAuto; cin >> aceleracionAuto;
			Auto carro(marca,modelo,velMax,caballosFuerzaAuto,aceleracionAuto);
			autosIngresados.push_back(carro);
			cout << "Auto agregado correctamente";
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