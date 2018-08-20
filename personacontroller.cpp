/*
 * personacontroller.cpp
 *
 *  Created on: 9 feb. 2018
 *      Author: luis
 */
#include "personaviewer.h"
#include "personacontroller.h"
//#include "personadao.h"
#include "nacionalcontroller.h"


personacontroller::personacontroller() {
	// TODO Auto-generated constructor stub

}

void personacontroller::inicio() {
personaviewer::htmlIngreso();

}

void personacontroller::paneladministrable() {
personaviewer::htmlPaneladministrable();
}
bool personacontroller::exist(string dni){
	return personadao::exist(dni);
}


void personacontroller::opcioneleccion(){
	personaviewer::htmlOpcionelec();
}
void personacontroller::votoingreso() {
	personaviewer::htmlVoto();
}
void personacontroller::cargarper(){
	personaviewer::htmlcargarper();
}
