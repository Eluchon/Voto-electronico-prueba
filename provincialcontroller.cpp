/*
 * provincialcontroller.cpp
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#include "provincialcontroller.h"

provincialcontroller::provincialcontroller() {
	// TODO Auto-generated constructor stub

}
void provincialcontroller::voto() {
	(new  provincialviewer())->htmlVoto((new provincialdao())->collection());
}

void provincialcontroller::cargar() {
	(new  provincialviewer())->htmlCargar((new provincialdao())->collection());
}

void provincialcontroller::modificar(){
  (new  provincialviewer())->htmlModificar((new provincialdao())->collection());
}
void provincialcontroller::eliminar(){
	(new  provincialviewer())->htmlEliminar((new provincialdao())->collection());
}
void provincialcontroller::fin(){
	(new  provincialviewer())->htmlfin((new provincialdao())->collectionfin());
}
void provincialcontroller::cargardao(string lista, string nombre, string partido, string provincia){

	provincialdao::add(lista,nombre,partido,provincia);
}
void provincialcontroller::modificardao(string lista, string nombre, string partido,string provincia){
	provincialdao::update(lista,nombre,partido,provincia);
}
void provincialcontroller::eliminardao(string lista){
	provincialdao::remove(lista);
}
void provincialcontroller::estadistica(){
	(new  provincialviewer())->htmlestadistica((new provincialdao())->collectionfin());
}

bool provincialcontroller::exist(string lista){
 return provincialdao::exist(lista);
}
provincialcontroller::~provincialcontroller() {
	// TODO Auto-generated destructor stub
}

