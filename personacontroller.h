/*
 * personacontroller.h
 *
 *  Created on: 9 feb. 2018
 *      Author: luis
 */

#ifndef PERSONACONTROLLER_H_
#define PERSONACONTROLLER_H_
#include <sstream>

using namespace std;
#include <sstream>

class personacontroller {


public:
	personacontroller();
static	void inicio();
static	void votoingreso();
static	void paneladministrable();
static  void cargarper();
static	void opcioneleccion();
static	bool exist(string);
//static void personacargar(string,string,string,string,string,string);


};

#endif /* PERSONACONTROLLER_H_ */
