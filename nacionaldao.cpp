/*
 * nacionaldao.cpp
 *
 *  Created on: 23 feb. 2018
 *      Author: luis
 */

#include "nacionaldao.h"

nacionaldao::nacionaldao() {
	// TODO Auto-generated constructor stub

}


bool nacionaldao::exist(string lista){
	 string stringSQL;

	    stringSQL = "SELECT * FROM Nacional WHERE lista = " +lista;
	    sql::ResultSet* res = MyConnection::instance()->query(stringSQL);
	    return res->next();
}

void nacionaldao::add(string lista, string nombre, string partido){
	stringstream stringSQL;

	    stringSQL <<"INSERT INTO `Nacional` ( `lista`, `nombre` ,`partido`) VALUES ( '"<<lista<<"' , '"<<nombre<<"' , '"<<partido<<"');";
	    MyConnection::instance()->execute(stringSQL.str());
}
void nacionaldao::update(string lista, string nombre, string partido){
	stringstream stringSQL;


    stringSQL <<"UPDATE Nacional SET `lista` ='"<<lista<<"', `nombre` ='"<<nombre<<"',`partido` ='"<<partido<<"'  WHERE lista ="<<lista<<";";
    MyConnection::instance()->execute(stringSQL.str());
}

void nacionaldao::remove(string lista){
	stringstream stringSQL;


	    stringSQL <<"DELETE FROM Nacional WHERE lista ="<<lista<<";";
	    MyConnection::instance()->execute(stringSQL.str());

}

nacionalqueue* nacionaldao::collection(){
	  stringstream stringSQL;
	   nacionalqueue* queue = new nacionalqueue();
	    stringSQL <<"SELECT * FROM Nacional ORDER BY lista ASC;";
	    sql::ResultSet* res = MyConnection::instance()->query(stringSQL.str());

	    while (res->next()){
	        nacional* nacio = new nacional(res);
	        queue->qstore(nacio);
	    }

	    delete res;

	    return queue;
}
nacionalqueue* nacionaldao::collectionfin(){
	  stringstream stringSQL;
	   nacionalqueue* queue = new nacionalqueue();
	    stringSQL <<"SELECT * FROM Nacional ORDER BY votos DESC;";
	    sql::ResultSet* res = MyConnection::instance()->query(stringSQL.str());

	    while (res->next()){
	        nacional* nacio = new nacional(res);
	        queue->qstore(nacio);
	    }

	    delete res;

	    return queue;
}

void nacionaldao::addvoto(string lista){
	stringstream stringSQL;
    sql::ResultSet* res = MyConnection::instance()->query("SELECT * FROM Nacional WHERE lista ="+lista+";");
    res->next();
		    stringSQL <<"UPDATE Nacional SET `votos` ='"<< res->getInt(4) + 1<<"' WHERE lista ="<<lista<<"; ";

		    MyConnection::instance()->execute(stringSQL.str());

}


nacionaldao::~nacionaldao() {
	// TODO Auto-generated destructor stub
}

