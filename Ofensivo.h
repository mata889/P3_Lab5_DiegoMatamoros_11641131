#ifndef OFENSIVO_H
#define OFENSIVO_H

#include <string>
#include "Poder.h"

using namespace std;

class Ofensivo: public Poder{
private:
	string rango,fuerza;
public:
	Ofensivo();
	Ofensivo(string,string);

	string getRango();
	string getFuerza();

	void setRango(string);
	void setFuerza(string);

};
#endif
