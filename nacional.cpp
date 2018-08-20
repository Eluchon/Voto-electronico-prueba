/*
 * partido.cpp
 *
 *  Created on: 23 feb. 2018
 *      Author: luis
 */

#include "nacional.h"

nacional::nacional() {

	lista=0;
	nombre="";
	partido="";
    votos=0;

}
nacional::nacional(sql::ResultSet* res){

	this->fillObject(res);
}

void nacional::fillObject(sql::ResultSet* rs){

	this->setLista(rs->getInt("lista"));
	this->setNombre(rs->getString("nombre"));
	this->setPartido(rs->getString("partido"));
	this->setVotos(rs->getInt("votos"));
}

void nacional::setLista(int lista){
	this ->lista=lista;
}
int nacional::getLista(){
	return this->lista;
}
void nacional::setNombre(string nombre){
	this->nombre=nombre;
}
string nacional::getNombre(){
	return this->nombre;
}

void nacional::setPartido(string partido){
	this->partido=partido;
}
string nacional::getPartido(){
	return this->partido;
}
void nacional::setVotos(int votos){
	this ->votos=votos;
}
int nacional::getVotos(){
	return this->votos;
	}
string nacional::toString(){
    stringstream ss;
    ss << this->getLista();
    return "<td>"+ ss.str() + "</td>" +"<td>"+this->getPartido() +"</td>"+"<td>"+ this->getNombre()+"</td>";
}

string nacional::toStringfin(){
    stringstream ss;
    ss << this->getVotos();
    return "<td>"+ ss.str() + "</td>" +"<td>"+this->getPartido() +"</td>"+"<td>"+ this->getNombre()+ "</td>";
}

 string nacional::toStringest(){
	 stringstream ss;
	 int u;

	 u=0;

	u= estadisticadao::count();

	    ss << (this->getVotos())*(100/u) ;
	    return "<td>"+ ss.str()+ "%</td>" +"<td>"+this->getPartido() +"</td>"+"<td>"+ this->getNombre()+ "</td>";
}
 string nacional::toStringvoto(){
     stringstream ss;
     ss << this->getLista();
    // return <input type="radio" name="gender" value="male"> Male<br>
    // return "<input type='radio' name='Vot' value='" + ss.str() +"'>"+ ss.str()+ "  "+ this->getPartido() +" <br>";
     return "<input type='radio' name='Vot' value='" + ss.str() +"'>"+ ss.str()+ "  "+ this->getPartido() +"  "+ this->getNombre() +" <br>";
 }
