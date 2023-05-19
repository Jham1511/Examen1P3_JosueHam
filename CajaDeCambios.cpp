#include "CajaDeCambios.h"
CajaDeCambios::CajaDeCambios(int velMax, float aceleracion) {
	this->velMax = velMax;
	this->aceleracion = aceleracion;
}
CajaDeCambios::~CajaDeCambios() {

}
int CajaDeCambios::getAceleracion() {
	return aceleracion;
}
int CajaDeCambios::getVelMax() {
	return velMax;
}
