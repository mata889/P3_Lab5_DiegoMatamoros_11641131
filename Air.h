#ifndef AIR_H
#define AIR_H
#include <string>
#include "Personas.h"
#include "Poder.h"

using namespace std;

class Air: public Personas{
private:
	string cantidadpelos;
	string color;
	Poder* poder;
public:
	Air();
	Air(string, string,Poder*,string,string,string,string);
	string getCantidadpelos();
	string getColor();
	Poder* getPoder();

	void setColor(string);
	void setCantidadpelos(string);
	void setPoder(Poder*);

	~Air();
};
#endif
