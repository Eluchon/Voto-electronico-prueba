/*
 * personaviewer.h
 *
 *  Created on: 9 feb. 2018
 *      Author: luis
 */

#ifndef PERSONAVIEWER_H_
#define PERSONAVIEWER_H_
#include "personacontroller.h"
#include "persona.h"
#include "personadao.h"
#include "nacionalcontroller.h"
#include "provincialcontroller.h"
#include "municipalcontroller.h"

class personaviewer {

public:
	personaviewer();
	static	 void htmlIngreso();
	static   void htmlPaneladministrable();
	static   void htmlOpcionelec();
	static   void htmlVoto();
    static   void htmlcargarper();

};

#endif /* PERSONAVIEWER_H_ */
