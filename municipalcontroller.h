/*
 * municipalcontroller.h
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#ifndef MUNICIPALCONTROLLER_H_
#define MUNICIPALCONTROLLER_H_

#include "myconnection.h"
#include "municipalviewer.h"
#include "municipaldao.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;


class municipalcontroller {
public:
	municipalcontroller();
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
	virtual ~municipalcontroller();
};

#endif /* MUNICIPALCONTROLLER_H_ */
