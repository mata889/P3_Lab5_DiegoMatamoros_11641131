#include "NoBender.h"
#include "Poder.h"
#include "Personas.h"

NoBender::NoBender(){
	this->trabajo="";
	this->fuerza="";
	this->velocidad="";
	this->poder=new Poder();
}
NoBender::NoBender(string pTrabajo,string pFuerza,string pVelocidad,Poder* pPoder,string nacion,string nombre,string sexo,string edad):Personas(nacion,nombre,sexo,edad){
	trabajo=pTrabajo;
	fuerza=pFuerza;
	velocidad=pVelocidad;
	poder=pPoder;
}
string NoBender::getTrabajo(){
	return trabajo;
}
string NoBender::getFuerza(){
	return fuerza;
}
string NoBender::getVelocidad(){
	return velocidad;
}
Poder* NoBender::getPoder(){
	return poder;
}
void NoBender::setTrabajo(string pTrabajo){
	trabajo=pTrabajo;
}
void NoBender::setFuerza(string pFuerza){
	fuerza=pFuerza;
}
void NoBender::setVelocidad(string pVelocidad){
	velocidad=pVelocidad;
}
void NoBender::setPoder(Poder* pPoder){
	poder=pPoder;
}
NoBender::~NoBender(){
	delete poder;
}
