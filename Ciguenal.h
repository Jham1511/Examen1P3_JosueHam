#pragma once
class Ciguenal
{
private: 
	int caballosFuerza, velMax;
public:
	Ciguenal(int,int);
	Ciguenal();
	~Ciguenal();
	int getCaballosFuerza();
	int getVelMax();
};