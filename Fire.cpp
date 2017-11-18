#include "Fire.h"
#include "Poder.h"

Fire::Fire(){
	this->cicatrices="";
	this->victorias="";
	this->poder=new Poder();
}
Fire::Fire(string pCicatrices,string pVictorias,Poder* pPoder,string nacion,string nombre,string sexo,string edad):Personas(nacion,nombre,sexo,edad){
	cicatrices=pCicatrices;
	victorias=pVictorias;
	poder=pPoder;
}
string Fire::getCicatrices(){
	return cicatrices;
}
string Fire::getVictorias(){
	return victorias;
}
Poder* Fire::getPoder(){
	return poder;
}
void Fire::setCicatrices(string pCicatrices){
	cicatrices=pCicatrices;
}
void Fire::setVictorias(string pVictorias){
	victorias=pVictorias;
}
void Fire::setPoder(Poder* pPoder){
	poder=pPoder;
}
Fire::~Fire(){
	delete poder;
}
