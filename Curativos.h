#ifndef CURATIVOS_H
#define CURATIVOS_H
#include "Poder.h"
#include <string>

class Curativos :public Poder{
private:
	string tipo;
public:
	Curativos();
	Curativos(string,string,string);

	string getTipo();

	void setTipo(string);

	//virtual~Curativos();
};
#endif
