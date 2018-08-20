/*
 * provincialdao.h
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#ifndef PROVINCIALDAO_H_
#define PROVINCIALDAO_H_
#include "myconnection.h"
#include <iostream>
#include <string>
#include <sstream>
#include "provincialqueue.h"
using namespace std;

class provincialdao {
public:
	provincialdao();
		static bool exist(string);
		static bool existprov(string);
		static void add(string,string,string,string);
		static void addvoto(string);
		static void update(string,string,string,string);
		static void remove(string);
		static int count();
		static provincialqueue* collection();
		static provincialqueue* collectionfin();
		static provincialqueue* collectionest(string);
	    virtual ~provincialdao();
};

#endif /* PROVINCIALDAO_H_ */
