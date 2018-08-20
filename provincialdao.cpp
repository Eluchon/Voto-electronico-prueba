/*
 * provincialdao.cpp
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#include "provincialdao.h"

provincialdao::provincialdao() {
	// TODO Auto-generated constructor stub

}
bool provincialdao::exist(string lista){
	 string stringSQL;

	    stringSQL = "SELECT * FROM Provincial WHERE lista = " +lista;
	    sql::ResultSet* res = MyConnection::instance()->query(stringSQL);
	    return res->next();
}
bool provincialdao::existprov(string prov){
	 string stringSQL;

	    stringSQL = "SELECT * FROM Provincial WHERE provincia = " +prov;
	    sql::ResultSet* res = MyConnection::instance()->query(stringSQL);
	    return res->next();
}
void provincialdao::addvoto(string lista){
	stringstream stringSQL;
    sql::ResultSet* res = MyConnection::instance()->query("SELECT * FROM Provincial WHERE lista ="+lista+";");
    res->next();
		    stringSQL <<"UPDATE Provincial SET `votos` ='"<< res->getInt(4) + 1<<"' WHERE lista ="<<lista<<"; ";

		    MyConnection::instance()->execute(stringSQL.str());

}
void provincialdao::add(string lista, string nombre, string partido, string provincia){
	stringstream stringSQL;

	    stringSQL <<"INSERT INTO `Provincial` ( `lista`, `nombre` ,`partido` ,`provincia`) VALUES ( '"<<lista<<"' , '"<<nombre<<"' , '"<<partido<<"', '"<<provincia<<"');";
	    MyConnection::instance()->execute(stringSQL.str());
}
void provincialdao::update(string lista, string nombre, string partido,string provincia){
	stringstream stringSQL;


    stringSQL <<"UPDATE Provincial SET `lista` ='"<<lista<<"', `nombre` ='"<<nombre<<"',`partido` ='"<<partido<<"',`provincia` ='"<<provincia<<"'  WHERE lista ="<<lista<<";";
    MyConnection::instance()->execute(stringSQL.str());
}

void provincialdao::remove(string lista){
	stringstream stringSQL;


	    stringSQL <<"DELETE FROM Provincial WHERE lista ="<<lista<<";";
	    MyConnection::instance()->execute(stringSQL.str());

}

provincialqueue* provincialdao::collection(){
	  stringstream stringSQL;
	  provincialqueue* queue = new provincialqueue();
	    stringSQL <<"SELECT * FROM Provincial ORDER BY lista ASC;";
	    sql::ResultSet* res = MyConnection::instance()->query(stringSQL.str());

	    while (res->next()){
	    	provincial* prov = new provincial(res);
	        queue->qstore(prov);
	    }

	    delete res;

	    return queue;
}
provincialqueue* provincialdao::collectionfin(){
	  stringstream stringSQL;
	  provincialqueue* queue = new provincialqueue();
	    stringSQL <<"SELECT * FROM Provincial ORDER BY votos DESC;";
	    sql::ResultSet* res = MyConnection::instance()->query(stringSQL.str());

	    while (res->next()){
	    	provincial* provin = new provincial(res);
	        queue->qstore(provin);
	    }

	    delete res;

	    return queue;
}

provincialqueue* provincialdao::collectionest(string prov){
	  stringstream stringSQL;
	  provincialqueue* queue = new provincialqueue();
	    stringSQL <<"SELECT * FROM Provincial ORDER BY votos DESC WERE provincia= " +prov;
	    sql::ResultSet* res = MyConnection::instance()->query(stringSQL.str());

	    while (res->next()){
	    	provincial* provin = new provincial(res);
	        queue->qstore(provin);
	    }

	    delete res;

	    return queue;
}



provincialdao::~provincialdao() {
	// TODO Auto-generated destructor stub
}

