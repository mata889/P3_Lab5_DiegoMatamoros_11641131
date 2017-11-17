#include "Poder.h"
#include <iostream>
#include <string>

using namespace std;

Poder::Poder(){
	this->nombre=" ";
	this->nivel=" ";
}
Poder::Poder(string pNombre,string pNivel){
	nombre=pNombre;
	nivel=pNivel;
}

string Poder::getNivel(){
	return nivel;
}
string Poder::getNombre(){
	return nombre;
}

void Poder::setNombre(string pNombre){
	nombre=pNombre;
}
void Poder::setNivel(string pNivel){
	nivel=pNivel;
}
