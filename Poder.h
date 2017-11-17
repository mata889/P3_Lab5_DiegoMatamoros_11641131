#ifndef PODER_H
#define PODER_H

#include <iostream>
#include <string>

using namespace std;

class Poder{
private:
	string nombre,nivel;
public:
	Poder(string,string);
	Poder();

	string getNombre();
	string getNivel();

	void setNivel(string);
	void setNombre(string);

};
#endif
