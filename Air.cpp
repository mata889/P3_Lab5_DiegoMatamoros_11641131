#include "Air.h"
#include "Poder.h"
Air::Air(){
	this->cantidadpelos="";
	this->color="";
	this->poder=new Poder();
}
Air::Air(string pCantidadpelos,string pColor,Poder* pPoder,string nacion,string nombre,string sexo,string edad):Personas(nacion,nombre,sexo,edad){
	cantidadpelos=pCantidadpelos;
	color=pColor;
	poder=pPoder;
}
string Air::getCantidadpelos(){
	return cantidadpelos;
}
string Air::getColor(){
	return color;
}
Poder* Air::getPoder(){
	return poder;
}
void Air::setPoder(Poder* pPoder){
	poder=pPoder;
}
void Air::setColor(string pColor){
	color=pColor;
}
void Air::setCantidadpelos(string pCantidadpelos){
	cantidadpelos=pCantidadpelos;
}
Air::~Air(){
	delete poder;
}
