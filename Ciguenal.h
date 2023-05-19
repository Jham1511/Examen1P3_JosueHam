#pragma once
class Ciguenal
{
private: 
	int caballosFuerza, velMax;
public:
	Ciguenal(int,int);
	Ciguenal();
	~Ciguenal();
	void setCaballosFuerza(int);
	void setVelMax(int);
	int getCaballosFuerza();
	int getVelMax();
};

