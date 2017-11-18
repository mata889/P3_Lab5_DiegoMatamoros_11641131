#include "Water.h"
#include "Poder.h"

Water::Water(){
	this->tribu="";
	this->arma="";
	this->poder=new Poder();
}
Water::Water(string pTribu,string pArma,Poder* pPoder,string nacion,string nombre,string sexo,string edad):Personas(nacion,nombre,sexo,edad){
	tribu=pTribu;
	arma=pArma;
	poder=pPoder;
}
string Water::getTribu(){
	return tribu;
}
string Water::getArma(){
	return arma;
}
Poder* Water::getPoder(){
	return poder;
}
void Water::setTribu(string pTribu){
	tribu=pTribu;
}
void Water::setArma(string pArma){
	arma=pArma;
}
void Water::setPoder(Poder* pPoder){
	poder=pPoder;
}
Water::~Water(){
	delete poder;
}
