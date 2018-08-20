/*
 * persona.h
 *
 *  Created on: 9 feb. 2018
 *      Author: luis
 */

#ifndef PERSONA_H_
#define PERSONA_H_
#include <sstream>
#include "myconnection.h"
using namespace std;
#include <sstream>

class persona {
private:
	int dni;
	string nombre;
    string apellido;
    string direccion;
    string fecha;
    string lugar;
    bool nacional;
    bool provincial;
	bool municipal;

public:
	persona();
	persona(sql::ResultSet*);
	void fillObject(sql::ResultSet*);
    void setDni(int);
    int getDni();
    void setNombre(string);
    string getNombre();
    void setApellido(string);
    string getApellido();
    void setDireccion(string);
    string getDireccion();
    void setFecha(string);
    string getFecha();
    void setLugar(string);
    string getLugar();
    void setNacional(bool);
    bool getNacional();
    void setProvincial(bool);
    bool getProvincial();
    void setMunicipal(bool);
    bool getMunicipal();




};

#endif /* PERSONA_H_ */
