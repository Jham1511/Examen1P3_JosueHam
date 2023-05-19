#pragma once
class CajaDeCambios
{
private:
	float aceleracion;
	int velMax;
public:
	CajaDeCambios(int,float);
	~CajaDeCambios();
	int getAceleracion();
	int getVelMax();
};

