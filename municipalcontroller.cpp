/*
 * municipalcontroller.cpp
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#include "municipalcontroller.h"

municipalcontroller::municipalcontroller() {
	// TODO Auto-generated constructor stub

}

municipalcontroller::~municipalcontroller() {
	// TODO Auto-generated destructor stub
}

void municipalcontroller::voto() {
	(new  municipalviewer())->htmlVoto((new municipaldao())->collection());
}

void municipalcontroller::cargar() {
	(new  municipalviewer())->htmlCargar((new municipaldao())->collection());
}

void municipalcontroller::modificar(){
  (new  municipalviewer())->htmlModificar((new municipaldao())->collection());
}
void municipalcontroller::eliminar(){
	(new  municipalviewer())->htmlEliminar((new municipaldao())->collection());
}
void municipalcontroller::fin(){
	(new  municipalviewer())->htmlfin((new municipaldao())->collectionfin());
}
void municipalcontroller::cargardao(string lista, string nombre, string partido, string municipio){

	municipaldao::add(lista,nombre,partido,municipio);
}
void municipalcontroller::modificardao(string lista, string nombre, string partido,string municipio){
	municipaldao::update(lista,nombre,partido,municipio);
}
void municipalcontroller::eliminardao(string lista){
	municipaldao::remove(lista);
}
void municipalcontroller::estadistica(){
	(new  municipalviewer())->htmlestadistica((new municipaldao())->collectionfin());
}

bool municipalcontroller::exist(string lista){
 return municipaldao::exist(lista);
}

