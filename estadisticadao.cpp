/*
 * estadisticadao.cpp
 *
 *  Created on: 4 mar. 2018
 *      Author: luis
 */

#include "estadisticadao.h"

estadisticadao::estadisticadao() {
	// TODO Auto-generated constructor stub

}

estadisticadao::~estadisticadao() {
	// TODO Auto-generated destructor stub
}

int estadisticadao::count(){
	  stringstream stringSQL;

	int u;
	u=0;
    sql::ResultSet* res = MyConnection::instance()->query("SELECT * FROM Personas");
    while (res->next()){
		    u=u+1;
    }
return u;

}
