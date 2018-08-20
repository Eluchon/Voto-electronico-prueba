/*
 * personadao.h
 *
 *  Created on: 11 feb. 2018
 *      Author: luis
 */

#ifndef PERSONADAO_H_
#define PERSONADAO_H_
#include "myconnection.h"
#include <iostream>
#include <string>
#include <sstream>
#include "persona.h"

using namespace std;

class personadao {
public:
	personadao();
	static	void opcionesupdatenac(bool);
	static	void opcionesupdateprov(bool);
	static	void opcionesupdatemuni(bool);
	static	bool exist(string);
	static	bool votnac(string);
	static	bool votprov(string);
	static	bool votmuni(string);
	static bool opcionnac();
	static bool opcionprov();
	static bool opcionmuni();
	static void votoupdatenac(string);
	static void votoupdateprov(string);
	static void votoupdatemuni(string);
	static void add(string,string,string,string,string,string);

	//void guardopciones();
};

#endif /* PERSONADAO_H_ */
