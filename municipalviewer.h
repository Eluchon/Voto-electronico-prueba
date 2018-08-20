/*
 * municipalviewer.h
 *
 *  Created on: 4 mar. 2018
 *      Author: luis
 */
#include "getpost.h"
#include "municipalcontroller.h"
#include "municipalqueue.h"
#include <iostream>
#include <string>
using namespace std;
#include "personadao.h"
#include "personacontroller.h"
#ifndef MUNICIPALVIEWER_H_
#define MUNICIPALVIEWER_H_

class municipalviewer {
public:
	municipalviewer();
	static	void htmlfin(municipalqueue*);
		static  void htmlModificar(municipalqueue*);
		static  void htmlEliminar(municipalqueue*);
		static	void htmlVoto(municipalqueue*);
		static	void htmlCargar(municipalqueue*);
		static	void exito();
		static  void htmlestadistica(municipalqueue*);
	virtual ~municipalviewer();
};

#endif /* MUNICIPALVIEWER_H_ */
