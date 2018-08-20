/*
 * provincial.cpp
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#include "provincial.h"

provincial::provincial() {
	lista=0;
	nombre="";
	partido="";
	provincia="";
    votos=0;
}
provincial::provincial(sql::ResultSet* res){

	this->fillObject(res);
}

void provincial::fillObject(sql::ResultSet* rs){

	this->setLista(rs->getInt("lista"));
	this->setNombre(rs->getString("nombre"));
	this->setPartido(rs->getString("partido"));
	this->setProvincia(rs->getString("provincia"));
	this->setVotos(rs->getInt("votos"));
}

void provincial::setLista(int lista){
	this ->lista=lista;
}
int provincial::getLista(){
	return this->lista;
}
void provincial::setNombre(string nombre){
	this->nombre=nombre;
}
string provincial::getNombre(){
	return this->nombre;
}

void provincial::setPartido(string partido){
	this->partido=partido;
}
string provincial::getPartido(){
	return this->partido;
}
void provincial::setProvincia(string provincia){
	this->provincia=provincia;
}
string provincial::getProvincia(){
	return this->provincia;
}
void provincial::setVotos(int votos){
	this ->votos=votos;
}
int provincial::getVotos(){
	return this->votos;
	}

string provincial::toString(){
    stringstream ss;
    ss << this->getLista();


    return "<td>"+ss.str() +"</td><td>"+this->getPartido()+"</td><td>"+  this->getNombre() +"</td><td>"+this->getProvincia()+"</td>";
}

string provincial::toStringfin(){
    stringstream ss;
    ss << this->getVotos();
    return "<td>"+ ss.str() + "</td>" +"<td>"+this->getPartido() +"</td>"+"<td>"+ this->getNombre()+ "</td>";
}

 string provincial::toStringest(){
	 stringstream ss;

	 int u;

	 u=0;

	u= estadisticadao::count();

	    ss << (this->getVotos())*(100/u) ;
	    return "<td>"+ ss.str()+ "%</td>" +"<td>"+this->getPartido() +"</td>"+"<td>"+ this->getNombre()+ "</td>";
}

 string  provincial::toStringvoto(){
     stringstream ss;
     ss << this->getLista();
    // return <input type="radio" name="gender" value="male"> Male<br>
     return "<input type='radio' name='Vot' value='" + ss.str() +"'>"+ ss.str()+ "  "+ this->getPartido() +"  "+ this->getNombre() +" <br>";
 }

