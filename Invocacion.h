#ifndef INVOCACION_H
#define INVOCACION_H

#include <string>
#include "Poder.h"

using namespace std;

class Invocacion:public Poder{
private:
	string nombre,especie,habilidad,tipo;
public:
	Invocacion();
	Invocacion(string,string,string,string,string,string);

	string getNombre();
	string getEspecie();
	string getHabilidad();
	string getTipo();

	void setNombre(string);
	void setEspecie(string);
	void setHabilidad(string);
	void setTipo(string);

//	virtual~Invocacion();
};
#endif
