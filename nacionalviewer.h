/*
 * nacionalviewer.h
 *
 *  Created on: 23 feb. 2018
 *      Author: luis
 */
#include "getpost.h"
#include "nacionalcontroller.h"
#include "nacionalqueue.h"
#include <iostream>
#include <string>
using namespace std;
#include "personacontroller.h"
#include "personadao.h"
#ifndef NACIONALVIEWER_H_
#define NACIONALVIEWER_H_

class nacionalviewer {

public:
	         nacionalviewer();
static	void htmlfin(nacionalqueue*);
static  void htmlModificar(nacionalqueue*);
static  void htmlEliminar(nacionalqueue*);
static	void htmlVoto(nacionalqueue*);
static	void htmlCargar(nacionalqueue*);
static	void exito();
static  void htmlestadistica(nacionalqueue*);
	virtual ~nacionalviewer();



};

#endif /* NACIONALVIEWER_H_ */
