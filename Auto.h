#pragma once
#include <iostream>
#include <string>
#include "Ciguenal.h"
#include "Radiador.h"
#include "Diferencial.h"
#include "Neumaticos.h"
#include "CajaDeCambios.h"
using namespace std;
class Auto
{
private:
	string marca, modelo;
	int velMax, caballosFuerza;
	float aceleracion;
	Ciguenal *cigue;
	Radiador *rad;
	Neumaticos *llantas;
	Diferencial *diferen;
	CajaDeCambios *caja;
public:
	Auto(string,string,int,int,float);
	Auto();
	~Auto();
	string getMarca();
	string getModelo();
	int getVelMax();
	int getCaballosFuerza();
	float getAceleracion();
	void setVelMax(int);
	void setCaballosFuerza(int);
	void setAceleracion(float);
};

