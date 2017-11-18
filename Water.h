#ifndef WATER_H
#define WATER_H

#include "Personas.h"
#include "Poder.h"

class Water:public Personas{
private:
		string tribu;
		string arma;
		Poder* poder;
	public:
		Water();
		Water(string,string,Poder*,string,string,string,string);
		string getTribu();
		string getArma();
		Poder* getPoder();

		void setTribu(string);
		void setArma(string);
		void setPoder(Poder*);
	~Water();
};
#endif
