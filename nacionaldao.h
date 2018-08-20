/*
 * nacionaldao.h
 *
 *  Created on: 23 feb. 2018
 *      Author: luis
 */

#ifndef NACIONALDAO_H_
#define NACIONALDAO_H_
#include "myconnection.h"
#include <iostream>
#include <string>
#include <sstream>
#include "nacionalqueue.h"
using namespace std;

class nacionaldao {
public:
	nacionaldao();
	static bool exist(string);
	static void add(string,string,string);
	static void update(string,string,string);
	static void remove(string);
	static int count();
	static nacionalqueue* collection();
	static nacionalqueue* collectionfin();
	static void addvoto(string);
	virtual ~nacionaldao();
};

#endif /* NACIONALDAO_H_ */
