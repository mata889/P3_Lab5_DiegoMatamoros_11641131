#ifndef AIR_H
#define AIR_H
#include <string>
#include "Personas.h"

using namespace std;

class Air: public Personas(){
private:
	string cantidadpelos;
	string color;
public:
	Air(string, string);
	string getCantidadpelos;
	string getColor;

	void setColor(string);
	void setCantidadpelos(string);
};
#endif
