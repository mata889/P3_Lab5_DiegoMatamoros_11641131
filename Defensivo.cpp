#include "Defensivo.h"
#include <string>

using namespace std;

Defensivo::Defensivo(){
	this->resistencia="";
	this->duracion="";
}
Defensivo::Defensivo(string pResistencia,string pDuracion,string nombre,string nivel):Poder(nombre,nivel){
	resistencia=pResistencia;
	duracion=pDuracion;
}
string Defensivo::getResistencia(){
	return resistencia;
}
string Defensivo::getDuracion(){
	return duracion;
}
void Defensivo::setResistencia(string pResistencia){
	resistencia=pResistencia;
}
void Defensivo::setDuracion(string pDuracion){
	duracion=pDuracion;
}
