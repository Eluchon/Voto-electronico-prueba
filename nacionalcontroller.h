/*
 * nacionalcontroller.h
 *
 *  Created on: 23 feb. 2018
 *      Author: luis
 */

#ifndef NACIONALCONTROLLER_H_
#define NACIONALCONTROLLER_H_
#include "myconnection.h"
#include "nacionalviewer.h"
#include "nacionaldao.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;

class nacionalcontroller {
public:
	nacionalcontroller();

	static void voto();
	static void cargar();
	static void modificar();
	static void eliminar();
	static void fin();
	static void cargardao(string,string,string);
	static bool exist(string);
	static void modificardao(string,string,string);
	static void eliminardao(string);
	virtual ~nacionalcontroller();
	static void estadistica();

};

#endif /* NACIONALCONTROLLER_H_ */
