#ifndef FIRE_H
#define FIRE_H
#include <string>
#include "Personas.h"
#include "Poder.h"

class Fire: public Personas{
protected:
		string cicatrices;
		string victorias;
		Poder* poder;
public:
	Fire();
	Fire(string,string,Poder*,string,string,string,string);
	string getCicatrices();
	string getVictorias();
	Poder* getPoder();

	void setCicatrices(string);
	void setVictorias(string);
	void setPoder(Poder*);

	~Fire();

};
#endif
