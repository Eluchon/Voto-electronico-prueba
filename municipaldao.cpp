/*
 * municipaldao.cpp
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#include "municipaldao.h"

municipaldao::municipaldao() {
	// TODO Auto-generated constructor stub

}
bool municipaldao::exist(string lista){
	 string stringSQL;

	    stringSQL = "SELECT * FROM Municipal WHERE lista = " +lista;
	    sql::ResultSet* res = MyConnection::instance()->query(stringSQL);
	    return res->next();
}
bool municipaldao::existmuni(string munic){
	 string stringSQL;

	    stringSQL = "SELECT * FROM Municipal WHERE municipio = " +munic;
	    sql::ResultSet* res = MyConnection::instance()->query(stringSQL);
	    return res->next();
}
void municipaldao::add(string lista, string nombre, string partido, string municipio){
	stringstream stringSQL;

	    stringSQL <<"INSERT INTO `Municipal` ( `lista`, `nombre` ,`partido` ,`municipio`) VALUES ( '"<<lista<<"' , '"<<nombre<<"' , '"<<partido<<"', '"<<municipio<<"');";
	    MyConnection::instance()->execute(stringSQL.str());
}
void municipaldao::update(string lista, string nombre, string partido,string municipio){

	stringstream stringSQL;

    stringSQL <<"UPDATE Municipal SET `lista` ='"<<lista<<"', `nombre` ='"<<nombre<<"',`partido` ='"<<partido<<"',`municipio` ='"<<municipio<<"'  WHERE lista ="<<lista<<";";
    MyConnection::instance()->execute(stringSQL.str());
}

void municipaldao::remove(string lista){
	stringstream stringSQL;


	    stringSQL <<"DELETE FROM Municipal WHERE lista ="<<lista<<";";
	    MyConnection::instance()->execute(stringSQL.str());

}

municipalqueue* municipaldao::collection(){
	  stringstream stringSQL;
	  municipalqueue* queue = new municipalqueue();
	    stringSQL <<"SELECT * FROM Municipal ORDER BY lista ASC;";
	    sql::ResultSet* res = MyConnection::instance()->query(stringSQL.str());

	    while (res->next()){
	    	municipal* munic = new municipal(res);
	        queue->qstore(munic);
	    }

	    delete res;

	    return queue;
}
municipalqueue* municipaldao::collectionfin(){
	  stringstream stringSQL;
	  municipalqueue* queue = new municipalqueue();
	    stringSQL <<"SELECT * FROM Municipal ORDER BY votos DESC;";
	    sql::ResultSet* res = MyConnection::instance()->query(stringSQL.str());

	    while (res->next()){
	    	municipal* municip = new municipal(res);
	        queue->qstore(municip);
	    }

	    delete res;

	    return queue;
}

municipalqueue* municipaldao::collectionest(string munic){
	  stringstream stringSQL;
	  municipalqueue* queue = new municipalqueue();
	    stringSQL <<"SELECT * FROM Municipal ORDER BY votos DESC WERE municipio= " +munic;
	    sql::ResultSet* res = MyConnection::instance()->query(stringSQL.str());

	    while (res->next()){
	    	municipal* munic = new municipal(res);
	        queue->qstore(munic);
	    }

	    delete res;

	    return queue;
}
void municipaldao::addvoto(string lista){
	stringstream stringSQL;
    sql::ResultSet* res = MyConnection::instance()->query("SELECT * FROM Municipal WHERE lista ="+lista+";");
    res->next();
		    stringSQL <<"UPDATE Municipal SET `votos` ='"<< res->getInt(4) + 1<<"' WHERE lista ="<<lista<<"; ";

		    MyConnection::instance()->execute(stringSQL.str());

}

municipaldao::~municipaldao() {
	// TODO Auto-generated destructor stub
}

