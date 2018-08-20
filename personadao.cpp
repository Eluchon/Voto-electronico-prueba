/*
 * personadao.cpp
 *
 *  Created on: 11 feb. 2018
 *      Author: luis
 */

#include "personadao.h"


personadao::personadao() {
	// TODO Auto-generated constructor stub

}


void personadao::opcionesupdatenac(bool nacional){


    stringstream stringSQL;

if(nacional){
        stringSQL <<"UPDATE Opciones SET `nacional`='1' WHERE Opcion='1';";
}
else
	stringSQL <<"UPDATE Opciones SET `nacional`='0' WHERE Opcion='1';";
        MyConnection::instance()->execute(stringSQL.str());

}

void personadao::opcionesupdateprov(bool provincial){


    stringstream stringSQL;

    if(provincial){
            stringSQL <<"UPDATE Opciones SET `provincial`='1' WHERE Opcion='1';";
    }
    else
    	stringSQL <<"UPDATE Opciones SET `provincial`='0' WHERE Opcion='1';";
            MyConnection::instance()->execute(stringSQL.str());

}
void personadao::opcionesupdatemuni(bool municipal){


    stringstream stringSQL;
    if(municipal){
            stringSQL <<"UPDATE Opciones SET `municipal`='1' WHERE Opcion='1';";
    }
    else
    	stringSQL <<"UPDATE Opciones SET `municipal`='0' WHERE Opcion='1';";
            MyConnection::instance()->execute(stringSQL.str());
}


bool personadao::exist(string dni){

    string stringSQL;



    stringSQL = "SELECT * FROM Personas WHERE dni = " +dni;
    sql::ResultSet* res = MyConnection::instance()->query(stringSQL);

    return res->next();
}
bool personadao::opcionnac(){

    string stringSQL;

    stringSQL = "SELECT * FROM Opciones WHERE Opcion = '1'";
    sql::ResultSet* res = MyConnection::instance()->query(stringSQL);
    res->next();
    return res->getInt(2);
}
bool personadao::opcionprov(){

    string stringSQL;



    stringSQL = "SELECT * FROM Opciones WHERE Opcion = '1'";
       sql::ResultSet* res = MyConnection::instance()->query(stringSQL);
       res->next();
       return res->getInt(3);
}
bool personadao::opcionmuni(){

    string stringSQL;



    stringSQL = "SELECT * FROM Opciones WHERE Opcion = '1'";
       sql::ResultSet* res = MyConnection::instance()->query(stringSQL);
       res->next();
       return res->getInt(4);
}


void personadao::votoupdatenac(string dni){

    stringstream stringSQL;

        stringSQL <<"UPDATE Personas SET `nacional`='1' WHERE dni ="<<dni<<"; ";
        MyConnection::instance()->execute(stringSQL.str());
}
void personadao::votoupdateprov(string dni){

    stringstream stringSQL;

        stringSQL <<"UPDATE Personas SET `provincial`='1' WHERE dni ="<<dni<<"; ";
        MyConnection::instance()->execute(stringSQL.str());
}
void personadao::votoupdatemuni(string dni){

    stringstream stringSQL;

        stringSQL <<"UPDATE Personas SET `municipal`='1' WHERE dni ="<<dni<<"; ";
        MyConnection::instance()->execute(stringSQL.str());
}
bool personadao::votnac(string dni){

    string stringSQL;

    stringSQL = "SELECT * FROM Personas WHERE dni = " +dni;
    sql::ResultSet* res = MyConnection::instance()->query(stringSQL);

     res->next();
    return res->getInt(7);
}
bool personadao::votprov(string dni){

    string stringSQL;

    stringSQL = "SELECT * FROM Personas WHERE dni = " +dni;
    sql::ResultSet* res = MyConnection::instance()->query(stringSQL);

     res->next();
    return res->getInt(8);
}
bool personadao::votmuni(string dni){

    string stringSQL;

    stringSQL = "SELECT * FROM Personas WHERE dni = " +dni;
    sql::ResultSet* res = MyConnection::instance()->query(stringSQL);

     res->next();
    return res->getInt(9);
}

void personadao::add(string dni, string nombre, string apellido, string fecha, string lugar, string direccion){
	stringstream stringSQL;

	    stringSQL <<"INSERT INTO `Personas` ( `dni`, `nombre` ,`apellido`,`fecha`,`lugar`,`direccion`) VALUES ( '"<<dni<<"' , '"<<nombre<<"' , '"<<apellido<<"', '"<<fecha<<"', '"<<lugar<<"', '"<<direccion<<"');";
	    MyConnection::instance()->execute(stringSQL.str());
}
/*persona* personadao::finddni(int dni) {

	string stringSQL;

    stringstream ss;
    ss << dni;

    stringSQL = "SELECT * FROM Persona WHERE dni = " + ss.str();

    sql::ResultSet* res = MyConnection::instance()->query(stringSQL);

    if (res->next())
    {
        persona* a = new persona(res);
        delete res;
        return a;
    }

    delete res;
    return new persona();
}

void personadao::guardopciones(){

}*/
