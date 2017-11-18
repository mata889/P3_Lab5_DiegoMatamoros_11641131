#ifndef EARTH_H
#define EARTH_H
#include "Personas.h"
#include "Poder.h"

class Earth:public Personas{
private:
	string Durabilidad;
	string Graduacion;
	Poder* poder;
public:
	Earth();
	Earth(string,string,Poder*,string,string,string,string);
	string getDurabilidad();
	string getGraduacion();
	Poder* getPoder();

	void setDurabilidad(string);
	void setGraduacion(string);
	void setPoder(Poder*);
	~Earth();
};
#endif
