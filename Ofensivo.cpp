#include "Ofensivo.h"
#include <iostream>

using namespace std;

Ofensivo::Ofensivo(){
	this->rango=" ";
	this->fuerza=" ";
}
Ofensivo::Ofensivo(string pRango,string pFuerza){
	rango=pRango;
	fuerza=pFuerza;
}

string Ofensivo::getRango(){
	return rango;
}
string Ofensivo::getFuerza(){
	return fuerza;
}
void Ofensivo::getRango(string pRango){
	rango=pRango;
}
void Ofensivo::getFuerza(string pFuerza){
	fuerza=pFuerza;
}
