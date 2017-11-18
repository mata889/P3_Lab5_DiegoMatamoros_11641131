#ifndef NOBENDER_H
#define NOBENDER_H

#include "Personas.h"
#include "Poder.h"
class NoBender:public Personas{
private:
	string trabajo;
	string fuerza;
	string velocidad;
	Poder* poder;
public:
	NoBender();
	NoBender(string,string,string,Poder*,string,string,string,string);
	string getTrabajo();
	string getFuerza();
	string getVelocidad();
	Poder* getPoder();

	void setTrabajo(string);
	void setFuerza(string);
	void setVelocidad(string);
	void setPoder(Poder*);
	~NoBender();
};
#endif
