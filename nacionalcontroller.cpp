/*
 * nacionalcontroller.cpp
 *
 *  Created on: 23 feb. 2018
 *      Author: luis
 */

#include "nacionalcontroller.h"

nacionalcontroller::nacionalcontroller() {
	// TODO Auto-generated constructor stub

}

nacionalcontroller::~nacionalcontroller() {
	// TODO Auto-generated destructor stub
}


void nacionalcontroller::voto() {
	(new  nacionalviewer())->htmlVoto((new nacionaldao())->collection());
}

void nacionalcontroller::cargar() {
	(new  nacionalviewer())->htmlCargar((new nacionaldao())->collection());
}

void nacionalcontroller::modificar(){
  (new  nacionalviewer())->htmlModificar((new nacionaldao())->collection());
}
void nacionalcontroller::eliminar(){
	(new  nacionalviewer())->htmlEliminar((new nacionaldao())->collection());
}
void nacionalcontroller::fin(){
	(new  nacionalviewer())->htmlfin((new nacionaldao())->collectionfin());
}
void nacionalcontroller::cargardao(string lista, string nombre, string partido){

     nacionaldao::add(lista,nombre,partido);
}
void nacionalcontroller::modificardao(string lista, string nombre, string partido){
	nacionaldao::update(lista,nombre,partido);
}
void nacionalcontroller::eliminardao(string lista){
	nacionaldao::remove(lista);
}
void nacionalcontroller::estadistica(){
	(new  nacionalviewer())->htmlestadistica((new nacionaldao())->collectionfin());
}
bool nacionalcontroller::exist(string lista){
 return nacionaldao::exist(lista);
}


