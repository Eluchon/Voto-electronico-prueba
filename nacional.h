/*
 * partido.h
 *
 *  Created on: 23 feb. 2018
 *      Author: luis
 */

#ifndef PARTIDO_H_
#define PARTIDO_H_
#include <sstream>
using namespace std;
#include <sstream>
#include "myconnection.h"
#include "estadisticadao.h"


class nacional {
private:
	int lista;
	string nombre;
	string partido;
	int votos;


public:
	nacional();
	nacional(sql::ResultSet*);
	void fillObject(sql::ResultSet*);
    int getLista();
    void setLista(int);
    string getNombre();
    void setNombre(string);
    string getPartido();
    void setPartido(string);
    int getVotos();
    void setVotos(int);

    string toString();
    string toStringfin();
    string toStringest();
    string toStringvoto();
};

#endif /* PARTIDO_H_ */
