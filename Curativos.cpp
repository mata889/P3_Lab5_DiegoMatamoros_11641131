#include "Curativos.h"
#include "Poder.h"

using namespace std;
Curativos::Curativos(){
	this->tipo=" ";
}
Curativos::Curativos(string pTipo,string nombre,string nivel):Poder(nombre,nivel){
	tipo=pTipo;
}

string Curativos::getTipo(){
	return tipo;
}
void Curativos::setTipo(string pTipo){
	tipo=pTipo;
}
/*Curativos::~Curativos(){

}*/
