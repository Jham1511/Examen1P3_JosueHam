#include <iostream>
#include <vector>
#include "Auto.h"
#include <math.h>
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
void imprimirCajadeCambios(vector<CajaDeCambios> cajas) {
	cout << "Cajas de cambio disponibles" << endl;
	for (int i = 0; i < cajas.size(); i++)
	{
		cout << "Posicion: " << i << endl
			<< "Aceleracion: " << cajas[i].getAceleracion() << endl;
	}
}
void imprimirDiferenciales(vector<Diferencial> diferenciales) {
	cout << "Diferenciales disponibles" << endl;
	for (int i = 0; i < diferenciales.size(); i++)
	{
		cout << "Posicion: " << i << endl
			<< "Aceleracion: " << diferenciales[i].getAceleracion() << endl;
	}
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
	cout << "Neumaticos disponibles" << endl;
	for (int i = 0; i < llantas.size(); i++)
	{
		cout << "Posicion: " << i << endl
			<< "Aceleracion: " << llantas[i].getAceleracion() << endl;
	}
}
void imprimirDiferenciales() {

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
void Carrera(Auto carroUno, Auto carroDos, int distanciaCarrera) {
	double taCarroUno = carroUno.getVelMax()/carroUno.getAceleracion();
	double taCarroDos = carroDos.getVelMax()/carroDos.getAceleracion();

	double acelaracionCarroUno = carroUno.getAceleracion();
	double acelaracionCarroDos = carroDos.getAceleracion();

	double exponenteCarroUno = pow(taCarroUno, 2);
	double daCarroUno = acelaracionCarroUno * exponenteCarroUno/2;

	double exponenteCarroDos = pow(taCarroDos, 2);
	double daCarroDos = acelaracionCarroDos * exponenteCarroDos/ 2;

	double tvmaxCarroUno = (daCarroUno - distanciaCarrera) / carroUno.getVelMax();
	double tvmaxCarroDos = (daCarroDos - distanciaCarrera) / carroDos.getVelMax();

	double tempTotalCarroUno = taCarroUno + tvmaxCarroUno;
	double tempTotalCarroDos = taCarroDos + tvmaxCarroDos;

	cout << "Tiempo total auto 1: " << tempTotalCarroUno << endl
		<< "Tiempo total auto 2: " << tempTotalCarroDos << endl;

	if (tempTotalCarroUno < tempTotalCarroDos) cout << "El auto 1 es el ganador!";
	if (tempTotalCarroDos < tempTotalCarroUno) cout << "El auto 2 es el ganador!";
}
int main() {
	int opcionIngresada = menu();
	vector <Auto> autosIngresados;

	vector <Ciguenal> ciguenalIngresados;
	Ciguenal cigue1(50, 25), cigue2(60, 30), cigue3(70, 35);
	ciguenalIngresados.push_back(cigue1);
	ciguenalIngresados.push_back(cigue2);
	ciguenalIngresados.push_back(cigue3);

	vector <Neumaticos> neumaticosIngresados;
	Neumaticos llantas1(40), llantas2(55), llantas3(70);
	neumaticosIngresados.push_back(llantas1);
	neumaticosIngresados.push_back(llantas2);
	neumaticosIngresados.push_back(llantas3);

	vector <Radiador> RadiadorIngresados;
	Radiador radiador1(35), radiador2(85), radiador3(65);
	RadiadorIngresados.push_back(radiador1);
	RadiadorIngresados.push_back(radiador2);
	RadiadorIngresados.push_back(radiador3);

	vector <Diferencial> diferencialIngresados;
	Diferencial diferencial1(80), diferencial2(140), diferencial3(35);
	diferencialIngresados.push_back(diferencial1);
	diferencialIngresados.push_back(diferencial2);
	diferencialIngresados.push_back(diferencial3);

	vector <CajaDeCambios> cajasIngresadas;
	CajaDeCambios caja1(30,70), caja2(70,50), caja3(80,40);
	cajasIngresadas.push_back(caja1);
	cajasIngresadas.push_back(caja2);
	cajasIngresadas.push_back(caja3);
	

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
					imprimirDiferenciales(diferencialIngresados);
					cout << "Ingrese la posicion del Diferencial: ";
					int posicion;
					cin >> posicion;

					int aceleracionCarro = autosIngresados[PosAutoSeleccionado].getAceleracion();
					autosIngresados[PosAutoSeleccionado].setAceleracion(aceleracionCarro - diferencialIngresados[posicion].getAceleracion());

					imprimirAutoModificado(autosIngresados, PosAutoSeleccionado);
					break;
				}
				case 5: {//Caja de cambios
					imprimirCajadeCambios(cajasIngresadas);
					cout << "Ingrese la posicion de la Caja de Cambio: ";
					int posicion;
					cin >> posicion;

					int aceleracionCarro = autosIngresados[PosAutoSeleccionado].getAceleracion();
					autosIngresados[PosAutoSeleccionado].setAceleracion(aceleracionCarro - cajasIngresadas[posicion].getAceleracion());

					int velMaxCarro = autosIngresados[PosAutoSeleccionado].getVelMax();
					autosIngresados[PosAutoSeleccionado].setVelMax(velMaxCarro + cajasIngresadas[posicion].getVelMax());

					imprimirAutoModificado(autosIngresados, PosAutoSeleccionado);
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
				imprimirAutos(autosIngresados);
				cout << "Ingrese la posicion del primero auto: ";
				int posicionPrimerAuto;
				cin >> posicionPrimerAuto;
				
				cout << "Ingrese la posicion del segundo auto: ";
				int posicionSegundoAuto;
				cin >> posicionSegundoAuto;

				cout << "Ingrese la distancia de la carrera: ";
				int distanciaCarrera;
				cin >> distanciaCarrera;


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