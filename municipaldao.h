/*
 * municipaldao.h
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#ifndef MUNICIPALDAO_H_
#define MUNICIPALDAO_H_
#include "myconnection.h"
#include <iostream>
#include <string>
#include <sstream>
#include "municipalqueue.h"
using namespace std;




class municipaldao {
private:

public:
	municipaldao();
	static bool exist(string);
		static bool existmuni(string);
		static void add(string,string,string,string);
		static void update(string,string,string,string);
		static void remove(string);
		static int count();
		static municipalqueue* collection();
		static municipalqueue* collectionfin();
		static municipalqueue* collectionest(string);
		static void addvoto(string);
	virtual ~municipaldao();
};

#endif /* MUNICIPALDAO_H_ */
