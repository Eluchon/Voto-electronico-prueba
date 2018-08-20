/*
 * provincial.h
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#ifndef PROVINCIAL_H_
#define PROVINCIAL_H_
#include <sstream>
using namespace std;
#include <sstream>
#include "myconnection.h"
#include "estadisticadao.h"

class provincial {
private:
	int lista;
	string nombre;
	string partido;
	string provincia;
    int votos;
public:
	provincial();

	provincial(sql::ResultSet*);
	void fillObject(sql::ResultSet*);
	int getLista();
	void setLista(int);
	string getNombre();
	void setNombre(string);
	string getPartido();
	void setPartido(string);
	string getProvincia();
	void setProvincia(string);
	int getVotos();
	void setVotos(int);

	string toString();
	    string toStringfin();
	    string toStringest();
	    string toStringvoto();


};

#endif /* PROVINCIAL_H_ */
