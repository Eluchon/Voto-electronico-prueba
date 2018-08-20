/*
 * provincialviewer.h
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */
#include "getpost.h"
#include "provincialcontroller.h"
#include "provincialqueue.h"
#include <iostream>
#include <string>
using namespace std;
#include "personacontroller.h"
#include "personadao.h"
#ifndef PROVINCIALVIEWER_H_
#define PROVINCIALVIEWER_H_


class provincialviewer {
public:
	provincialviewer();
	static	void htmlfin(provincialqueue*);
	static  void htmlModificar(provincialqueue*);
	static  void htmlEliminar(provincialqueue*);
	static	void htmlVoto(provincialqueue*);
	static	void htmlCargar(provincialqueue*);
	static	void exito();
	static  void htmlestadistica(provincialqueue*);
	virtual ~provincialviewer();
};

#endif /* PROVINCIALVIEWER_H_ */
