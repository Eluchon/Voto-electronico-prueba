/*
 * estadisticadaop.h
 *
 *  Created on: 5 mar. 2018
 *      Author: luis
 */

#ifndef ESTADISTICADAOP_H_
#define ESTADISTICADAOP_H_
#include "myconnection.h"
#include <iostream>
#include <string>
#include <sstream>

class estadisticadaop {
public:
	estadisticadaop();
	static int count(string);
	virtual ~estadisticadaop();
};

#endif /* ESTADISTICADAOP_H_ */
