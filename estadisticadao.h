/*
 * estadisticadao.h
 *
 *  Created on: 4 mar. 2018
 *      Author: luis
 */

#ifndef ESTADISTICADAO_H_
#define ESTADISTICADAO_H_
#include "myconnection.h"
#include <iostream>
#include <string>
#include <sstream>

class estadisticadao {
public:
	estadisticadao();
	static int count();
	virtual ~estadisticadao();
};

#endif /* ESTADISTICADAO_H_ */
