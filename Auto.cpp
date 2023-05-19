#include "Auto.h"
Auto::Auto(string marca, string modelo, int velMax, int CaballosFuerza, float aceleracion) {
	this->marca = marca;
	this->modelo = modelo;
	this->velMax = velMax;
	this->caballosFuerza = CaballosFuerza;
	this->aceleracion = aceleracion;
}
Auto::~Auto() {
	
}
void Auto::setCaballosFuerza(int caballosDeFuerza) {
	this->caballosFuerza = caballosDeFuerza;
}
void Auto::setVelMax(int velocidad) {
	this->velMax = velocidad;
}
void Auto::setAceleracion(float aceleracion) {
	this->aceleracion = aceleracion;
}
string Auto::getMarca() {
	return marca;
}

string Auto::getModelo() {
	return modelo;
}

int Auto::getVelMax() {
	return velMax;
}

int Auto::getCaballosFuerza() {
	return caballosFuerza;
}

float Auto::getAceleracion() {
	return aceleracion;
}