#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Air.h"
#include "Curativos.h"
#include "Defensivo.h"
#include "Earth.h"
#include "Fire.h"
#include "Invocacion.h"
#include "NoBender.h"
#include "Ofensivo.h"
#include "Personas.h"
#include "Poder.h"
#include "Water.h"
#include <typeinfo>


using namespace std;

int  main() {
	cout<<"Bienvenido a Avatar:Crea Tu Personaje de Avatar"<<endl;
	int menu;
	vector<Personas>lista;


	do {
		cout<<"1.agregar personas"<<endl;
		cout<<"2.Listar personas"<<endl;
		cout<<"3.Eliminar Personas"<<endl;
		cout<<"4.Guardar en archivo"<<endl;
		cout<<"5.Salir"<<endl;
		cin>>menu;
		switch (menu) {

			case 1:{
				string Nombre="",sexo="",nacion="",edad="";
				cout<<"Introduzca su nombre"<<endl;
				cin>>Nombre;
				cout<<"Introduzca su sexo"<<endl;
				cin>>sexo;
				cout<<"Introduzca su nacionalidad"<<endl;
				cin>>nacion;
				cout<<"Introduzca su edad"<<endl;
				cin>>edad;
				int maestros;
				cout<<"1.Maestros"<<endl;
				cout<<"2.NoSabeELBROTHER CONTROLAR LOS ELEMENTOS"<<endl;
				cin>>maestros;

				if (maestros==1) {
					int tipo;
					cout<<"1.Aire"<<endl;
					cout<<"2.Agua"<<endl;
					cout<<"3.Fuego"<<endl;
					cout<<"4.Tierra"<<endl;
					cin>>tipo;
					if (tipo==1) {

						string cantidadpelos="",color="";
						cout<<"Tipo aire"<<endl;
						cout<<"Cantidad de pelos"<<endl;
						cin>>cantidadpelos;
						cout<<"color"<<endl;
						cin>>color;
						//copy paste
						Poder*p;
						string nacion="",nombre="",sexo="",edad="";
						cout<<"nacion"<<endl;
						cin>>nacion;
						cout<<"Nombre"<<endl;
						cin>>nombre;
						cout<<"Sexo"<<endl;
						cin>>sexo;
						cout<<"edad"<<endl;
						cin>>edad;
						//PODERES CLASES
						string nivel="";
						cout<<"Nivel de poderes"<<endl;
						cin>>nivel;

						int poderes;
						cout<<"Escoja su Poder"<<endl;
						cout<<"1.Curativos"<<endl;
						cout<<"2.Invocacion"<<endl;
						cout<<"3.Ofensivo"<<endl;
						cout<<"4.Defensivo"<<endl;
						cin>>poderes;

						if (poderes==1) {
							string tipocuracion="";
							cout<<"Tipo de curacion"<<endl;
							cin>>tipocuracion;
							p=new Curativos(tipocuracion,nombre,nivel);

						}
						if (poderes==2) {
							string InvoNombre="",InvoEspecie="",InvoHabi="",InvoTipo="";
							cout<<"Nombre de invo"<<endl;
							cin>>InvoNombre;
							cout<<"Nombre de especie"<<endl;
							cin>>InvoEspecie;
							cout<<"Nombre de habilidad"<<endl;
							cin>>InvoHabi;
							int tipoDom;
							cout<<"Nombre de tipo:\n1.domestica- 2.Guerra"<<endl;
							if (tipoDom==1) {
								InvoTipo="Domestica";
							}else{
								cout<<"Ha escogido GUERRA";
								InvoTipo="Guerra";
							}
							p=new Invocacion(InvoNombre,InvoEspecie,InvoHabi,InvoTipo,nombre,nivel);
						}
						if (poderes==3) {
							string Rango="",fuerza="";
							cout<<"El maximo de rango"<<endl;
							cin>>Rango;
							cout<<"El maximo de fuerza"<<endl;
							cin>>fuerza;
							p=new Ofensivo(Rango,fuerza,nombre,nivel);
						}
						if (poderes==4) {
							string Resistencia="",Duracion="";
							cout<<"Introduzca la resistencia"<<endl;
							cin>>Resistencia;
							cout<<"Introduzca la Duracion"<<endl;
							cin>>Duracion;
							p=new Defensivo(Resistencia,Duracion,nombre,nivel);
						}
						Personas aire= Air(cantidadpelos,color,p,nacion,nombre,sexo,edad);
						lista.push_back(aire);

					}//fin de aire

					if (tipo==2){
						string tribu="",arma="";
						cout<<"Introduza su tribu"<<endl;
						cin>>tribu;
						cout<<"Introduza su arma"<<endl;
						cin>>arma;
						//copy paste
						Poder*p;
						string nacion="",nombre="",sexo="",edad="";
						cout<<"nacion"<<endl;
						cin>>nacion;
						cout<<"Nombre"<<endl;
						cin>>nombre;
						cout<<"Sexo"<<endl;
						cin>>sexo;
						cout<<"edad"<<endl;
						cin>>edad;
						//PODERES CLASES
						string nivel="";
						cout<<"Nivel de poderes"<<endl;
						cin>>nivel;

						int poderes;
						cout<<"Escoja su Poder"<<endl;
						cout<<"1.Curativos"<<endl;
						cout<<"2.Invocacion"<<endl;
						cout<<"3.Ofensivo"<<endl;
						cout<<"4.Defensivo"<<endl;
						cin>>poderes;

						if (poderes==1) {
							string tipocuracion="";
							cout<<"Tipo de curacion"<<endl;
							cin>>tipocuracion;
							p=new Curativos(tipocuracion,nombre,nivel);

						}
						if (poderes==2) {
							string InvoNombre="",InvoEspecie="",InvoHabi="",InvoTipo="";
							cout<<"Nombre de invo"<<endl;
							cin>>InvoNombre;
							cout<<"Nombre de especie"<<endl;
							cin>>InvoEspecie;
							cout<<"Nombre de habilidad"<<endl;
							cin>>InvoHabi;
							int tipoDom;
							cout<<"Nombre de tipo:\n1.domestica- 2.Guerra"<<endl;
							if (tipoDom==1) {
								InvoTipo="Domestica";
							}else{
								cout<<"Ha escogido GUERRA";
								InvoTipo="Guerra";
							}
							p=new Invocacion(InvoNombre,InvoEspecie,InvoHabi,InvoTipo,nombre,nivel);
						}
						if (poderes==3) {
							string Rango="",fuerza="";
							cout<<"El maximo de rango"<<endl;
							cin>>Rango;
							cout<<"El maximo de fuerza"<<endl;
							cin>>fuerza;
							p=new Ofensivo(Rango,fuerza,nombre,nivel);
						}
						if (poderes==4) {
							string Resistencia="",Duracion="";
							cout<<"Introduzca la resistencia"<<endl;
							cin>>Resistencia;
							cout<<"Introduzca la Duracion"<<endl;
							cin>>Duracion;
							p=new Defensivo(Resistencia,Duracion,nombre,nivel);
						}
						Personas water= Water(tribu,arma,p,nacion,nombre,sexo,edad);
						lista.push_back(water);
					}//fin de agua
					if(tipo==3){
						string cicatrices="",victorias="";
						cout<<"Cuantas cicatrices"<<endl;
						cin>>cicatrices;
						cout<<"Cuantas victorias"<<endl;
						cin>>victorias;
						//copy paste
						Poder*p;
						string nacion="",nombre="",sexo="",edad="";
						cout<<"nacion"<<endl;
						cin>>nacion;
						cout<<"Nombre"<<endl;
						cin>>nombre;
						cout<<"Sexo"<<endl;
						cin>>sexo;
						cout<<"edad"<<endl;
						cin>>edad;
						//PODERES CLASES
						string nivel="";
						cout<<"Nivel de poderes"<<endl;
						cin>>nivel;

						int poderes;
						cout<<"Escoja su Poder"<<endl;
						cout<<"1.Curativos"<<endl;
						cout<<"2.Invocacion"<<endl;
						cout<<"3.Ofensivo"<<endl;
						cout<<"4.Defensivo"<<endl;
						cin>>poderes;

						if (poderes==1) {
							string tipocuracion="";
							cout<<"Tipo de curacion"<<endl;
							cin>>tipocuracion;
							p=new Curativos(tipocuracion,nombre,nivel);

						}
						if (poderes==2) {
							string InvoNombre="",InvoEspecie="",InvoHabi="",InvoTipo="";
							cout<<"Nombre de invo"<<endl;
							cin>>InvoNombre;
							cout<<"Nombre de especie"<<endl;
							cin>>InvoEspecie;
							cout<<"Nombre de habilidad"<<endl;
							cin>>InvoHabi;
							int tipoDom;
							cout<<"Nombre de tipo:\n1.domestica- 2.Guerra"<<endl;
							if (tipoDom==1) {
								InvoTipo="Domestica";
							}else{
								cout<<"Ha escogido GUERRA";
								InvoTipo="Guerra";
							}
							p=new Invocacion(InvoNombre,InvoEspecie,InvoHabi,InvoTipo,nombre,nivel);
						}
						if (poderes==3) {
							string Rango="",fuerza="";
							cout<<"El maximo de rango"<<endl;
							cin>>Rango;
							cout<<"El maximo de fuerza"<<endl;
							cin>>fuerza;
							p=new Ofensivo(Rango,fuerza,nombre,nivel);
						}
						if (poderes==4) {
							string Resistencia="",Duracion="";
							cout<<"Introduzca la resistencia"<<endl;
							cin>>Resistencia;
							cout<<"Introduzca la Duracion"<<endl;
							cin>>Duracion;
							p=new Defensivo(Resistencia,Duracion,nombre,nivel);
						}
						Personas fuego= Fire(cicatrices,victorias,p,nacion,nombre,sexo,edad);
						lista.push_back(fuego);
					}//fin de fuego
					if (tipo==4) {
						string Durabilidad="",Graduacion="";
						cout<<"Cuanta Durabilidad?"<<endl;
						cin>>Durabilidad;
						cout<<"Cuanta la Graduacion"<<endl;
						cin>>Graduacion;
						//copy paste
						Poder*p;
						string nacion="",nombre="",sexo="",edad="";
						cout<<"nacion"<<endl;
						cin>>nacion;
						cout<<"Nombre"<<endl;
						cin>>nombre;
						cout<<"Sexo"<<endl;
						cin>>sexo;
						cout<<"edad"<<endl;
						cin>>edad;
						//PODERES CLASES
						string nivel="";
						cout<<"Nivel de poderes"<<endl;
						cin>>nivel;

						int poderes;
						cout<<"Escoja su Poder"<<endl;
						cout<<"1.Curativos"<<endl;
						cout<<"2.Invocacion"<<endl;
						cout<<"3.Ofensivo"<<endl;
						cout<<"4.Defensivo"<<endl;
						cin>>poderes;

						if (poderes==1) {
							string tipocuracion="";
							cout<<"Tipo de curacion"<<endl;
							cin>>tipocuracion;
							p=new Curativos(tipocuracion,nombre,nivel);

						}
						if (poderes==2) {
							string InvoNombre="",InvoEspecie="",InvoHabi="",InvoTipo="";
							cout<<"Nombre de invo"<<endl;
							cin>>InvoNombre;
							cout<<"Nombre de especie"<<endl;
							cin>>InvoEspecie;
							cout<<"Nombre de habilidad"<<endl;
							cin>>InvoHabi;
							int tipoDom;
							cout<<"Nombre de tipo:\n1.domestica- 2.Guerra"<<endl;
							if (tipoDom==1) {
								InvoTipo="Domestica";
							}else{
								cout<<"Ha escogido GUERRA";
								InvoTipo="Guerra";
							}
							p=new Invocacion(InvoNombre,InvoEspecie,InvoHabi,InvoTipo,nombre,nivel);
						}
						if (poderes==3) {
							string Rango="",fuerza="";
							cout<<"El maximo de rango"<<endl;
							cin>>Rango;
							cout<<"El maximo de fuerza"<<endl;
							cin>>fuerza;
							p=new Ofensivo(Rango,fuerza,nombre,nivel);
						}
						if (poderes==4) {
							string Resistencia="",Duracion="";
							cout<<"Introduzca la resistencia"<<endl;
							cin>>Resistencia;
							cout<<"Introduzca la Duracion"<<endl;
							cin>>Duracion;
							p=new Defensivo(Resistencia,Duracion,nombre,nivel);
						}
						Personas earth= Earth(Durabilidad,Graduacion,p,nacion,nombre,sexo,edad);
						lista.push_back(earth);
					}//fin de tierra
					if (tipo==5 || tipo!=1 || tipo!=2 || tipo!=3 || tipo!=4) {

					}
				}else{
					string trabajo="",fuerza="",velocidad="";
					cout<<"trabajo"<<endl;
					cin>>trabajo;
					cout<<"fuerza"<<endl;
					cin>>fuerza;
					cout<<"velocidad"<<endl;
					cin>>velocidad;
					//copy paste
					Poder*p;
					string nacion="",nombre="",sexo="",edad="";
					cout<<"nacion"<<endl;
					cin>>nacion;
					cout<<"Nombre"<<endl;
					cin>>nombre;
					cout<<"Sexo"<<endl;
					cin>>sexo;
					cout<<"edad"<<endl;
					cin>>edad;
					//PODERES CLASES
					string nivel="";
					cout<<"Nivel de poderes"<<endl;
					cin>>nivel;

					int poderes;
					cout<<"Escoja su Poder"<<endl;
					cout<<"1.Curativos"<<endl;
					cout<<"2.Invocacion"<<endl;
					cout<<"3.Ofensivo"<<endl;
					cout<<"4.Defensivo"<<endl;
					cin>>poderes;

					if (poderes==1) {
						string tipocuracion="";
						cout<<"Tipo de curacion"<<endl;
						cin>>tipocuracion;
						p=new Curativos(tipocuracion,nombre,nivel);

					}
					if (poderes==2) {
						string InvoNombre="",InvoEspecie="",InvoHabi="",InvoTipo="";
						cout<<"Nombre de invo"<<endl;
						cin>>InvoNombre;
						cout<<"Nombre de especie"<<endl;
						cin>>InvoEspecie;
						cout<<"Nombre de habilidad"<<endl;
						cin>>InvoHabi;
						int tipoDom;
						cout<<"Nombre de tipo:\n1.domestica- 2.Guerra"<<endl;
						if (tipoDom==1) {
							InvoTipo="Domestica";
						}else{
							cout<<"Ha escogido GUERRA";
							InvoTipo="Guerra";
						}
						p=new Invocacion(InvoNombre,InvoEspecie,InvoHabi,InvoTipo,nombre,nivel);
					}
					if (poderes==3) {
						string Rango="",fuerza="";
						cout<<"El maximo de rango"<<endl;
						cin>>Rango;
						cout<<"El maximo de fuerza"<<endl;
						cin>>fuerza;
						p=new Ofensivo(Rango,fuerza,nombre,nivel);
					}
					if (poderes==4) {
						string Resistencia="",Duracion="";
						cout<<"Introduzca la resistencia"<<endl;
						cin>>Resistencia;
						cout<<"Introduzca la Duracion"<<endl;
						cin>>Duracion;
						p=new Defensivo(Resistencia,Duracion,nombre,nivel);
					}
					Personas no= NoBender(trabajo,fuerza,velocidad,p,nacion,nombre,sexo,edad);
					lista.push_back(no);

				}

			}break;
			case 2:{
				cout<<"-----------Listado-------"<<endl;
				cout<<"====Agua"<<endl;
				for (size_t i = 0; i < lista.size(); i++) {
					/*	if (dynamic_cast<Personas>(lista.at(i))) {

				}
				cout<<"- "<<  typeid(Water).name()<<endl;
			}*/
		}break;
		case 3:{
			cout<<"Se ha eliminado"<<endl;
		}break;
		case 4:{
			ofstream myfile ("personas.txt");
			if (myfile.is_open()){
				for (int i = 0; i < lista.size(); i++) {
					myfile<< lista.at(i).getNacion()<<", "<<lista.at(i).getNombre()<<", "<<lista.at(i).getEdad()<<", "<<lista.at(i).getSexo()<<"\n";
				}
				myfile.close();
				cout<<"guardado"<<endl;

			}
			else cout << "Unable to open file";
		}break;

	}
}
} while(menu!=5);




return 0;
}
