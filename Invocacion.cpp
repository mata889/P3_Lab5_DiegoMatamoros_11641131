#include "Invocacion.h"
Invocacion::Invocacion(){
	this->nombre="";
	this->especie="";
	this->habilidad="";
	this->tipo="";
}
Invocacion::Invocacion(string pNombre,string pEspecie,string pHabilidad,string pTipo,string nomnbre,string nivel):Poder(nombre,nivel){
	nombre=pNombre;
	especie=pEspecie;
	habilidad=pHabilidad;
	tipo=pTipo;
}
string Invocacion::getNombre(){
	return nombre;
}
string Invocacion::getEspecie(){
	return especie;
}
string Invocacion::getHabilidad(){
	return habilidad;
}
string Invocacion::getTipo(){
	return tipo;
}
void Invocacion::setNombre(string pNombre){
	nombre=pNombre;
}
void Invocacion::setEspecie(string pEspecie){
	especie=pEspecie;
}
void Invocacion::setHabilidad(string pHabilidad){
	habilidad=pHabilidad;
}
void Invocacion::setTipo(string pTipo){
	tipo=pTipo;
}
