#ifndef PERSONAS_H
#define PERSONAS_H
#include <string>

using namespace std;

class Personas{
protected:
	string nacion,nombre,sexo;
	string edad;
public:
	Personas(string,string,string,string);
	Personas();

	string getNacion();
	string getNombre();
	string getSexo();
	string getEdad();

	void setNacion(string);
	void setNombre(string);
	void setSexo(string);
	void setEdad(string);

	virtual~Personas();

};
#endif
