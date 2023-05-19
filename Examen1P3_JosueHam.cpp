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
void imprimirRadiador(vector<Radiador> radiadores) {
	cout << "Radiadores disponibles" << endl;
	for (int i = 0; i < radiadores.size(); i++)
	{
		cout << "Posicion: " << i << endl
			<< "Caballos de Fuerza: " << radiadores[i].getCaballosFuerza() << endl;
	}
}
void imprimirNeumaticos(vector<Neumaticos> llantas) {
	cout << "Radiadores disponibles" << endl;
	for (int i = 0; i < llantas.size(); i++)
	{
		cout << "Posicion: " << i << endl
			<< "Aceleracion: " << llantas[i].getAceleracion() << endl;
	}
}
void imprimirCiguenal(vector<Ciguenal> ciguenales) {
	cout << "Ciguenales disponibles" << endl;
	for (int i = 0; i < ciguenales.size(); i++)
	{
		cout << "Posicion: " << i << endl
			<<  "Caballos de Fuerza: " << ciguenales[i].getCaballosFuerza() << endl
			<< "Velocidad Maxima: " << ciguenales[i].getVelMax() << endl;
	}
}
void imprimirAutoModificado(vector<Auto> autosIngresados, int PosAutoSeleccionado) {
	cout << "Resultados al modificar" << endl;
	cout << "Marca: " << autosIngresados[PosAutoSeleccionado].getMarca() << endl
		<< "Modelo: " << autosIngresados[PosAutoSeleccionado].getModelo() << endl
		<< "Velocidad Maxima: " << autosIngresados[PosAutoSeleccionado].getVelMax() << endl
		<< "Caballos de Fuerza: " << autosIngresados[PosAutoSeleccionado].getCaballosFuerza() << endl
		<< "Aceleracion: " << autosIngresados[PosAutoSeleccionado].getAceleracion() << endl;
}
void imprimirAutos(vector<Auto> autos) {
	cout << "Autos disponibles" << endl;
	for (int i = 0; i < autos.size(); i++)
	{
		cout << "Posicion: " << i << endl
			<< "Marca: " << autos[i].getMarca() << endl
			<< "Modelo: " << autos[i].getModelo() << endl
			<< "Velocidad Maxima: " << autos[i].getVelMax() << endl
			<< "Caballos de Fuerza: " << autos[i].getCaballosFuerza() << endl
			<< "Aceleracion: " << autos[i].getAceleracion();
	}
}
int main() {
	int opcionIngresada = menu();
	vector <Auto> autosIngresados;
	vector <Ciguenal> ciguenalIngresados;
	vector <Neumaticos> neumaticosIngresados;
	vector <Radiador> RadiadorIngresados;
	vector <Diferencial> diferencialIngresados;
	vector <CajaDeCambios> cajasIngresadas;
	Ciguenal cigue1(50,25), cigue2(60,30), cigue3(70,35);

	bool autoCreado = false;
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
			autoCreado = true;
			break;
		}//Fin case 1
		case 2: {
			if (autoCreado == true)
			{
				cout << "Bienvenido a modificar autos" << endl;
				imprimirAutos(autosIngresados);
				cout << "Ingrese la posicion del auto que desea modificar: ";
				int PosAutoSeleccionado;
				cin >> PosAutoSeleccionado;

				cout << "Modificaciones disponibles" << endl;
				cout << "1 -> Ciguenal" << endl
					 << "2 -> Radiador" << endl
					 << "3 -> Neumaticos" << endl
					 << "4 -> Diferencial" << endl
					 << "5 -> Caja de Cambios" << endl
					 << "Ingrese el aspecto a modificar: " << endl;
				int aspectoSeleccionado;
				cin >> aspectoSeleccionado;
				switch (aspectoSeleccionado) {
				case 1: { //Ciguenal
					imprimirCiguenal(ciguenalIngresados);
					cout << "Ingrese la posicion del ciguenal: ";
					int posicion;
					cin >> posicion;

					int caballosFuerzaCarro = autosIngresados[PosAutoSeleccionado].getCaballosFuerza();
					autosIngresados[PosAutoSeleccionado].setCaballosFuerza(caballosFuerzaCarro + ciguenalIngresados[posicion].getCaballosFuerza());

					int velMaxCarro = autosIngresados[PosAutoSeleccionado].getVelMax();
					autosIngresados[PosAutoSeleccionado].setVelMax(velMaxCarro + ciguenalIngresados[posicion].getVelMax());
					
					imprimirAutoModificado(autosIngresados,PosAutoSeleccionado);
					break;
				}
				case 2: {//Radiador
					imprimirRadiador(RadiadorIngresados);
					cout << "Ingrese la posicion del Radiador: ";
					int posicion;
					cin >> posicion;

					int caballosFuerzaCarro = autosIngresados[PosAutoSeleccionado].getCaballosFuerza();
					autosIngresados[PosAutoSeleccionado].setCaballosFuerza(caballosFuerzaCarro + RadiadorIngresados[posicion].getCaballosFuerza());

					imprimirAutoModificado(autosIngresados, PosAutoSeleccionado);
					break;
				}
				case 3: {//Neumaticos
					imprimirNeumaticos(neumaticosIngresados);
					cout << "Ingrese la posicion del Neumatico: ";
					int posicion;
					cin >> posicion;

					int aceleracionCarro = autosIngresados[PosAutoSeleccionado].getAceleracion();
					autosIngresados[PosAutoSeleccionado].setAceleracion(aceleracionCarro - neumaticosIngresados[posicion].getAceleracion());

					imprimirAutoModificado(autosIngresados, PosAutoSeleccionado);
					break;
				}
				case 4: {//Diferencial
					break;
				}
				case 5: {//Caja de cambios
					break;
				}
				default:
					cout << "..." << endl;
				}//Fin del switch para la modificacion de un aspecto
			}
			else {
				cout << "No se han detectados autos a modificar en el sistema" << endl;
			}

			break;
		}//Fin case 2
		case 3: {
			if (autoCreado == true)
			{

			}
			else {
				cout << "No se han detectados autos a ordenar en el sistema" << endl;
			}
			break;
		}//Fin case 3
		case 4: {
			if (autosIngresados.size() > 2) //Validacion para saber si hay 2 autos o más en el sistema
			{

			}
			else {
				cout << "No hay suficientes autos en el sistema" << endl;
			}
			break;
		}//Fin case 4
		  default:
			  cout << "..." << endl;
		}//Fin del switch
		opcionIngresada = menu();
	}//Fin del while
}//Fin de la clase