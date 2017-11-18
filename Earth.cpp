#include "Earth.h"
#include "Poder.h"

Earth::Earth(){
	this->Durabilidad="";
	this->Graduacion="";
	this->poder=new Poder();
}
Earth::Earth(string pDurabilidad,string pGraduacion,Poder* pPoder,string nacion,string nombre,string sexo,string edad):Personas(nacion,nombre,sexo,edad){
	Durabilidad=pDurabilidad;
	Graduacion=pGraduacion;
	poder=pPoder;
}
string Earth::getDurabilidad(){
	return Durabilidad;
}
string Earth::getGraduacion(){
	return Graduacion;
}
Poder* Earth::getPoder(){
	return poder;
}
void Earth::setDurabilidad(string pDurabilidad){
	Durabilidad=pDurabilidad;
}
void Earth::setGraduacion(string pGraduacion){
	Graduacion=pGraduacion;
}
void Earth::setPoder(Poder* pPoder){
	poder=pPoder;
}
Earth::~Earth(){
	delete poder;
}
