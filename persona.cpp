/*
 * persona.cpp
 *
 *  Created on: 9 feb. 2018
 *      Author: luis
 */

#include "persona.h"

persona::persona() {
	dni=0;
	nombre="";
	apellido="";
	direccion="";
	fecha="";
	lugar="";
    nacional=0;
    provincial=0;
    municipal=0;
}

persona::persona(sql::ResultSet* res) {

   this->fillObject(res);
}

void persona::fillObject(sql::ResultSet* rs) {

  this->setDni(rs->getInt("dni"));
  this->setNombre(rs->getString("nombre"));
  this->setApellido(rs->getString("apellido"));
  this->setDireccion(rs->getString("direccion"));
  this->setFecha(rs->getString("fecha"));
  this->setLugar(rs->getString("lugar"));
  this->setNacional(rs->getBoolean("nacional"));
  this->setProvincial(rs->getBoolean("provincial"));
  this->setMunicipal(rs->getBoolean("municipal"));
}

void persona::setDni(int dni) {
	 this -> dni = dni;
}
int persona::getDni() {
    return this -> dni;
}

void persona::setNombre(string nombre) {
	  this -> nombre = nombre;
}
string persona::getNombre() {
    return this -> nombre;
}

void persona::setApellido(string apellido) {
	  this -> apellido = apellido;

}
string persona::getApellido() {
    return this -> apellido;
}

void persona::setDireccion(string direccion) {
	  this -> direccion = direccion;
}
string persona::getDireccion() {
	return this -> direccion;
}

void persona::setFecha(string fecha) {
	  this -> fecha = fecha;
}
string persona::getFecha() {
    return this -> fecha;
}

void persona::setLugar(string lugar) {
	  this -> lugar = lugar;
}
string persona::getLugar() {
    return this -> lugar;
}

void persona::setNacional(bool nacional) {
	this -> nacional = nacional;
}
bool persona::getNacional() {
	return this -> nacional;
}

void persona::setProvincial(bool provincial) {
	this -> provincial = provincial;
}
bool persona::getProvincial() {
	return this -> provincial;
}

void persona::setMunicipal(bool municipal) {
	this -> municipal = municipal;
}
bool persona::getMunicipal() {
	return this -> municipal;
}
