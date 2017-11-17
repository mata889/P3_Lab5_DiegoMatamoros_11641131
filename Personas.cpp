#include "Personas.h"
#include <string>
#include <iostream>

using namespace std;

Personas::Personas(){
	this->nacion =" ";
	this->nombre=" ";
	this->sexo=" ";
	this->edad=" ";
}
Personas::Personas(string pNacion, string pNombre, string pSexo, string pEdad){
	nacion=pNacion;
	nombre=pNombre;
	sexo=pSexo;
	edad=pEdad;
}


string Personas::getEdad(){
	return edad;
}
string Personas::getNombre(){
	return nombre;
}
string Personas::getSexo(){
	return sexo;
}
string Personas::getNacion(){
	return nacion;
}

void Personas::setNacion(string pNacion){
	nacion=pNacion;
}
void Personas::setNombre(string pNombre){
	nombre=pNombre;
}
void Personas::setSexo(string pSexo){
	sexo=pSexo;
}
Personas::~Personas(){

}
