/*
 * municipal.h
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#ifndef MUNICIPAL_H_
#define MUNICIPAL_H_
#include <sstream>
using namespace std;
#include <sstream>
#include "myconnection.h"
#include "estadisticadao.h"

class municipal {
private:
	int lista;
	string nombre;
	string partido;
	string municipio;
    int votos;

public:
	municipal();
	municipal(sql::ResultSet*);
	void fillObject(sql::ResultSet*);
	int getLista();
    void setLista(int);
	string getNombre();
	void setNombre(string);
	string getPartido();
	void setPartido(string);
	string getMunicipio();
	void setMunicipio(string);
	int getVotos();
	void setVotos(int);

	string toString();
	string toStringfin();
    string toStringest();
	string toStringvoto();



};

#endif /* MUNICIPAL_H_ */
