/*
 * municipal.cpp
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#include "municipal.h"

municipal::municipal() {
	lista=0;
	nombre="";
	partido="";
	municipio="";
    votos=0;
}
municipal::municipal(sql::ResultSet* res){

	this->fillObject(res);
}

void municipal::fillObject(sql::ResultSet* rs){

	this->setLista(rs->getInt("lista"));
	this->setNombre(rs->getString("nombre"));
	this->setPartido(rs->getString("partido"));
	this->setMunicipio(rs->getString("municipio"));
	this->setVotos(rs->getInt("votos"));
}


void municipal::setLista(int lista){
	this ->lista=lista;
}
int municipal::getLista(){
	return this->lista;
}
void municipal::setNombre(string nombre){
	this->nombre=nombre;
}
string municipal::getNombre(){
	return this->nombre;
}

void municipal::setPartido(string partido){
	this->partido=partido;
}
string municipal::getPartido(){
	return this->partido;
}
void municipal::setMunicipio(string municipio){
	this->municipio=municipio;
}
string municipal::getMunicipio(){
	return this->municipio;
}
void municipal::setVotos(int votos){
	this ->votos=votos;
}
int municipal::getVotos(){
	return this->votos;
	}

string municipal::toString(){
    stringstream ss;
    ss << this->getLista();


    return "<td>"+ss.str() +"</td><td>"+this->getPartido()+"</td><td>"+  this->getNombre() +"</td><td>"+this->getMunicipio()+"</td>";
}

string municipal::toStringfin(){
    stringstream ss;
    ss << this->getVotos();
    return "<td>"+ ss.str() + "</td>" +"<td>"+this->getPartido() +"</td>"+"<td>"+ this->getNombre()+ "</td>";
}

 string municipal::toStringest(){
	 stringstream ss;

	 int u;

	 u=0;

	u= estadisticadao::count();

	    ss << (this->getVotos())*(100/u) ;
	    return "<td>"+ ss.str()+ "%</td>" +"<td>"+this->getPartido() +"</td>"+"<td>"+ this->getNombre()+ "</td>";
}

 string  municipal::toStringvoto(){
     stringstream ss;
     ss << this->getLista();
    // return <input type="radio" name="gender" value="male"> Male<br>
     return "<input type='radio' name='Vot' value='" + ss.str() +"'>"+ ss.str()+ "  "+ this->getPartido()+ "  "+ this->getNombre() +" <br>";
 }
