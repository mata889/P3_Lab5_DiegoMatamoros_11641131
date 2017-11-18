#include "Ofensivo.h"
#include <iostream>
#include <string>
#include "Poder.h"


using namespace std;

Ofensivo::Ofensivo(){
	this->rango=" ";
	this->fuerza=" ";
}
Ofensivo::Ofensivo(string pRango,string pFuerza,string nombre,string nivel):Poder(nombre,nivel){
	rango=pRango;
	fuerza=pFuerza;

}

string Ofensivo::getRango(){
	return rango;
}
string Ofensivo::getFuerza(){
	return fuerza;
}
void Ofensivo::setRango(string pRango){
	rango=pRango;
}
void Ofensivo::setFuerza(string pFuerza){
	fuerza=pFuerza;
}
