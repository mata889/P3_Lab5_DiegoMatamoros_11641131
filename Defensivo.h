#ifndef DEFENSIVO_H
#define DEFENSIVO_H

#include <string>
#include "Poder.h"

using namespace std;

class Defensivo: public Poder{
private:
	string resistencia,duracion;
public:
	Defensivo();
	Defensivo(string,string,string,string);

	string getResistencia();
	string getDuracion();

	void setResistencia(string);
	void setDuracion(string);

	//virtual~Defensivo();

};
#endif
