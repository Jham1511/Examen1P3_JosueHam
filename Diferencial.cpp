#include "Diferencial.h"
Diferencial::Diferencial(float aceleracion) {
	this->aceleracion = aceleracion;
}
int Diferencial::getAceleracion() {
	return aceleracion;
}