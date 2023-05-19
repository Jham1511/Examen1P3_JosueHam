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