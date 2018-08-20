/*
 * provincialcontroller.h
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#ifndef PROVINCIALCONTROLLER_H_
#define PROVINCIALCONTROLLER_H_
#include "myconnection.h"
#include "provincialviewer.h"
#include "provincialdao.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;

class provincialcontroller {
public:
	provincialcontroller();
	static void voto();
		static void cargar();
		static void modificar();
		static void eliminar();
		static void fin();
		static void cargardao(string,string,string,string);
		static bool exist(string);
		static void modificardao(string,string,string,string);
		static void eliminardao(string);
		static void estadistica();
	virtual ~provincialcontroller();
};

#endif /* PROVINCIALCONTROLLER_H_ */
