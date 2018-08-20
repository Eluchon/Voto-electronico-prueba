/*
 * personaviewer.cpp
 *
 *  Created on: 9 feb. 2018
 *      Author: luis
 */
#include "getpost.h"
#include "personaviewer.h"
#include "personacontroller.h"
#include <iostream>
#include <string>
using namespace std;

personaviewer::personaviewer() {
	// TODO Auto-generated constructor stub

}
void personaviewer::htmlIngreso() {
	map<string,string> Get;
	initializeGet(Get);

	cout << "Content-type: text/html"<<endl <<endl;
	cout << "<!DOCTYPE HTML>" << endl;
	cout << "<META CHARSET='UTF-8'>" << endl;
	cout << "<title>Voto</title>" << endl;
	cout << "<link rel='stylesheet' href='../bootstrap.css' integrity='sha384-/Y6pD6FV/Vv2HJnA6t+vslU6fwYXjCFtcEpHbNJ0lyAFsXTsjBbfaDjzALeQsN6M' crossorigin='anonymous'>" << endl;
	cout << "<link rel='stylesheet' type='text/css' href='../hola.css' >" << endl;
	cout << "</head>" << endl;

	cout << "<body background='../Argentina.jpg';  >" << endl;
	cout << "<center>" << endl;


	int dni = atoi(Get["dni"].c_str());

	if(!dni && Get["Panel"]=="") {
	cout << "<h2>¿Preparado para votar?</h2>" << endl;
	cout << "<p>Ingrese su dni</p>	" << endl;
	cout << "<form dni='todo' method='GET'>" << endl;
	cout<<"<input type='number' name='dni' class='form-control' placeholder='Ingrese su Dni' required autofocus>"<<endl;

	cout << "<br/><br/>" << endl;
	cout << "<form> <section class='bpadmin'> <button type='submit' name='Ingreso' value='1' >Ingresar</button></section></form>" << endl;
	cout << "<form> <section class='bpadmin'> <button type='submit' name='Panel' value='1'>Panel Administrable</button></section></form>" << endl;

	}


	if(Get["Ingreso"]=="1") {
	 personacontroller::votoingreso();
	}
	else

	if(Get["Panel"]=="1") {
		personacontroller::paneladministrable();
	}

	cout << "</center>" << endl;
	cout << "</body>" << endl;
}

void personaviewer::htmlPaneladministrable() {

map<string,string>Get;
initializeGet(Get);
if(Get["Cargnac"]=="" && Get["Carprov"]=="" && Get["Carmuni"]=="" && Get["Modnac"]=="" && Get["Modprov"]=="" && Get["Modmuni"]=="" && Get["Esnac"]=="" && Get["Esprov"]=="" && Get["Esmuni"]=="" && Get["Elegelec"]=="" && Get["Elimnac"]=="" && Get["Elimprov"]=="" && Get["Elimmuni"]==""){
			cout << "<div class='container'>" << endl;
			cout << "<h2>Bienvenido al Panel Administrable</h2>" << endl;
			cout << "<p>¿Que desea hacer?</p>	" << endl;

			cout << "<div class='container'>" << endl;
			cout << "<h2>Cargar Candidato</h2>" << endl;
			cout << "<form method='get' > " << endl;
		    cout << "<div class='btn-group'>" << endl;
			cout << "<form><input type='hidden' value='1' name='Panel'><section class='bpadmin'> <button type='submit' name='Cargnac' value='1'>Nacional</button></section></form>" << endl;
			cout << "<form><input type='hidden' value='1' name='Panel'><section class='bpadmin'> <button type='submit' name='Carprov' value='1'>Provincial</button></section></form>" << endl;
			cout << "<form><input type='hidden' value='1' name='Panel'><section class='bpadmin'> <button type='submit' name='Carmuni' value='1'>Municipal</button></section></form>" << endl;
			cout << "</form>" << endl;
			cout << "</div>" << endl;
			cout << "</div>" << endl;

			cout << "<div class='container'>" << endl;
			cout << "<h2>Modificar Candidato</h2>" << endl;
			cout << "<form method='get' > " << endl;
			cout << "<div class='btn-group'>" << endl;
			cout << "<form><input type='hidden' value='1' name='Panel'> <section class='bpadmin'> <button type='submit' name='Modnac' value='1'>Nacional</button></section></form>" << endl;
			cout << "<form><input type='hidden' value='1' name='Panel'><input type='hidden' value='1' name='Modprov'> <section class='bpadmin'> <button type='submit' name='Modrov' value='1'>Provincial</button></section></form>" << endl;
			cout << "<form><input type='hidden' value='1' name='Panel'> <section class='bpadmin'> <button type='submit' name='Modmuni' value='1'>Municipal</button></section></form>" << endl;
			cout << "</form>" << endl;
			cout << "</div>" << endl;
			cout << "</div>" << endl;

			cout << "<div class='container'>" << endl;
			cout << "<h2>Eliminar Candidato</h2>" << endl;
			cout << "<form method='get' > " << endl;
			cout << "<div class='btn-group'>" << endl;
			cout << "<form><input type='hidden' value='1' name='Panel'> <section class='bpadmin'> <button type='submit' name='Elimnac' value='1'>Nacional</button></section></form>" << endl;
			cout << "<form><input type='hidden' value='1' name='Panel'><input type='hidden' value='1' name='Modrov'> <section class='bpadmin'> <button type='submit' name='Elimprov' value='1'>Provincial</button></section></form>" << endl;
			cout << "<form><input type='hidden' value='1' name='Panel'> <section class='bpadmin'> <button type='submit' name='Elimmuni' value='1'>Municipal</button></section></form>" << endl;
			cout << "</form>" << endl;
			cout << "</div>" << endl;
			cout << "</div>" << endl;

			cout << "<div class='container'>" << endl;
			cout << "<h2>Estadisticas</h2>" << endl;
			cout << "<form method='get' > " << endl;
			cout << "<div class='btn-group'>" << endl;
			cout << "<form> <input type='hidden' value='1' name='Panel'><section class='bpadmin'> <button type='submit' name='Esnac' value='1'>Nacional</button></section></form>" << endl;
			cout << "<form><input type='hidden' value='1' name='Panel'> <section class='bpadmin'> <button type='submit' name='Esprov' value='1'>Provincial</button></section></form>" << endl;
			cout << "<form> <input type='hidden' value='1' name='Panel'><section class='bpadmin'> <button type='submit' name='Esmuni' value='1'>Municipal</button></section></form>" << endl;
			cout << "</form>" << endl;
			cout << "</div>" << endl;
			cout << "</div>" << endl;
			cout << "</div>" << endl;

			cout << "<div class='container'>" << endl;
			cout << "<h2>Menu elecciones</h2>" << endl;
			cout << "<form method='get' > " << endl;
			cout << "<div class='btn-group'>" << endl;
			cout << "<form><input type='hidden' value='1' name='Panel'> <section class='bpadmin'> <button type='submit' name='Elegelec' value='1'>Elegir Elecciones</button></section></form>" << endl;
			cout << "</form>" << endl;

			cout << "<div class='container'>" << endl;
						cout << "<h2>Cargar Persona</h2>" << endl;
						cout << "<form method='get' > " << endl;
						cout << "<div class='btn-group'>" << endl;
						cout << "<form><input type='hidden' value='1' name='Panel'> <section class='bpadmin'> <button type='submit' name='Carper' value='1'>Cargar Persona</button></section></form>" << endl;
						cout << "</form>" << endl;


			cout << "<div class='container'>" << endl;
			cout << "<form method='get' > " << endl;
			cout << "<div class='btn-group'>" << endl;
			cout << "<form> <section class='bpadmin'> <button type='submit' name='Volver' value='1'>Volver</button></section></form>" << endl;
			cout << "</form>" << endl;
}
else

			/*cout << "</div>" << endl;
			cout << "</div>" << endl;
			cout << "</div>" << endl;

			if(Get["Carnac"]=="1" && Get["Carprov"]=="" && Get["Carmuni"]=="" && Get["Modnac"]=="" && Get["Modrov"]=="" && Get["Modmuni"]=="" && Get["Esnac"]=="" && Get["Esprov"]=="" && Get["Esmuni"]=="" && Get["Elegelec"]==""){

			}*/
	        if(Get["Cargnac"]=="1") {

					nacionalcontroller::cargar();
				}

			if(Get["Carprov"]=="1") {
				provincialcontroller::cargar();
			}

			if(Get["Carmuni"]=="1") {
				municipalcontroller::cargar();
			}

			if( Get["Modnac"]=="1") {
				nacionalcontroller::modificar();
			}

			if(Get["Modprov"]=="1") {
				provincialcontroller::modificar();
			}

			if(Get["Modmuni"]=="1") {
				municipalcontroller::modificar();
			}
			if(Get["Elimnac"]=="1") {
				nacionalcontroller::eliminar();
			}

			if(Get["Elimprov"]=="1") {
				provincialcontroller::eliminar();
			}

			if(Get["Elimmuni"]=="1" ) {
				municipalcontroller::eliminar();
			}

			if(Get["Esnac"]=="1") {
				nacionalcontroller::estadistica();
			}

			if(Get["Esprov"]=="1") {
				provincialcontroller::estadistica();
			}

			if(Get["Esmuni"]=="1" ) {
				municipalcontroller::estadistica();

			}
			if(Get["Carper"]=="1") {

					  	personacontroller::cargarper();

												}


			if(Get["Elegelec"]=="1") {

		  	personacontroller::opcioneleccion();

									}

			if(Get["Volver"]=="1") {

		 personacontroller::inicio();

												}

}

void personaviewer::htmlOpcionelec(){

	map<string,string>Get;
	initializeGet(Get);



if(Get["guardar"]==""){
	            cout << "<div class='container'>" << endl;
				cout << "<h2>Opciones de Elecciones</h2>" << endl;
				cout << "<p>Elija la clase de elecciones que se realizaran en esta votacion</p>	" << endl;
				cout << "<p>(Nota:si estan todos vacios acaban las elecciones)</p>	" << endl;
				cout << "<form>"<< endl;
				if(personadao::opcionnac()){
				cout << " <input type='checkbox' name='nacional' value='1' checked>Nacional"<< endl;
				}
				else{
					cout << " <input type='checkbox' name='nacional' value='1'>Nacional"<< endl;
				}
				cout << "<br>" << endl;
				if(personadao::opcionprov()){
				cout << "<input type='checkbox' name='provincial' value='1' checked>Provincial" << endl;
				}
				else{
					cout << "<input type='checkbox' name='provincial' value='1' >Provincial" << endl;
				}
				cout << "<br>" << endl;
				if(personadao::opcionmuni()){
				cout << "<input type='checkbox' name='municipal' value='1' checked>Municipal "<< endl;
				}
				else{
				cout << "<input type='checkbox' name='municipal' value='1'>Municipal "<< endl;
				}

				cout << "</div>" << endl;
			    cout << "<div class='container'>" << endl;
				cout << "<input type='hidden' value='1' name='Panel'><input type='hidden' value='1' name='Elegelec'><button type='submit' name='guardar' value='1'>Guardar</button>" << endl;
				cout << "</form>"<< endl;
				cout << "</div>" << endl;
				cout << "<a href='http://localhost/cgi-bin/main?Panel=1' title='Ir la página anterior'>Volver</a><" << endl;

}
if(Get["guardar"]=="1"){
	personadao::opcionesupdatenac(atoi(Get["nacional"].c_str()));

	personadao::opcionesupdateprov(atoi(Get["provincial"].c_str()));

	personadao::opcionesupdatemuni(atoi(Get["municipal"].c_str()));

	cout << "<h2>Guardado</h2>" << endl;
	cout << "<a href='http://localhost/cgi-bin/main?Panel=1&Elegelec=1' title='Ir la página anterior'>Volver</a><" << endl;
}


}

void personaviewer::htmlVoto() {
	map<string,string>Get;
	initializeGet(Get);


if(personacontroller::exist(Get["dni"])){
	if(personadao::votnac(Get["dni"]) && personadao::votprov(Get["dni"]) && personadao::votmuni(Get["dni"])){

	    cout << "<h2>¡Voto Exitoso!</h2>" << endl;
	    cout <<"<a href='http://localhost/cgi-bin/main' title='Ir la página anterior'>Volver</a><"<< endl;
	}
	else{
		if( (!personadao::votnac(Get["dni"]) && personadao::opcionnac()) || (!personadao::votprov(Get["dni"]) && personadao::opcionprov()) || (!personadao::votmuni(Get["dni"]) && personadao::opcionmuni())){
	if(Get["Ir"]==""){
    cout << "<div class='container'>" << endl;
    	cout << "<h2>Bienvenido</h2>" << endl;
	cout << "<div class='container'>" << endl;
	cout << "<p>Las votaciones a realizar son:</p>	" << endl;
	if(personadao::opcionnac() && !personadao::votnac(Get["dni"])){
		cout << "<p>Nacional</p>	" << endl;
	}
	if(personadao::opcionprov() && !personadao::votprov(Get["dni"])){
			cout << "<p>Provincial</p>	" << endl;
		}
	if(personadao::opcionmuni() && !personadao::votmuni(Get["dni"])){
			cout << "<p>Municipal</p>	" << endl;
		}

	cout << "<form> <section class='bpadmin'><input type='hidden' value='" << Get["dni"] << "'  name='dni'><input type='hidden' value='1' name='Ingreso'><button type='submit' name='Ir' value='1'>ir a Votar</button></section></form>" << endl;
}
	if(Get["Ir"]=="1" && personadao::opcionnac() && !personadao::votnac(Get["dni"]) ){

		nacionalcontroller::voto();
	}
	else{
	if(Get["Ir"]=="1"  && personadao::opcionprov() && !personadao::votprov(Get["dni"]) ){
		provincialcontroller::voto();
	}

	else{
	if(Get["Ir"]=="1"  && personadao::opcionmuni() && !personadao::votmuni(Get["dni"])){
			municipalcontroller::voto();
		}

	}

	}



	}
		else {
			  cout << "<h2>¡Voto Exitoso!</h2>" << endl;
				    cout <<"<a href='http://localhost/cgi-bin/main' title='Ir la página anterior'>Volver</a><"<< endl;
		}
    }
	}

else{

   if(Get["Error"]=="") {
	cout << "<h2>La persona no esta en el padron</h2>" << endl;
	cout << "<form> <section class='bpadmin'> <button type='submit' name='Error' value='1'>Volver</button></section></form>" << endl;
   }
if(Get["Error"]=="1") {
	  	personacontroller::inicio();
				}

}
}
void personaviewer::htmlcargarper(){
	map<string,string> Get;
		initializeGet(Get);
			if(Get["Agregar"]=="" || Get["Volver"]=="") {

			cout << "<h2>Agregar</h2>" << endl;
			cout << "<p>Ingrese el dni</p>	" << endl;
			cout << "<form dni='todo' method='GET'>" << endl;
			cout<<"<input type='number' name='dni' class='form-control' placeholder='Ingrese el dni a agregar' required autofocus>"<<endl;
			cout << "<p>Ingrese el nombre</p>	" << endl;
			cout << "<form dni='todo' method='GET'>" << endl;
			cout<<"<input type='string' name='nombre' class='form-control' placeholder='Ingrese el nombre de la persona' required autofocus>"<<endl;
			cout << "<p>Ingrese el apellido</p>	" << endl;
			cout << "<form dni='todo' method='GET'>" << endl;
			cout<<"<input type='string' name='apellido' class='form-control' placeholder='Ingrese el apellido de la persona' required autofocus>"<<endl;
			cout << "<p>Ingrese su fecha de nacimiento</p>	" << endl;
						cout << "<form dni='todo' method='GET'>" << endl;
						cout<<"<input type='string' name='fecha' class='form-control' placeholder='Ingrese su fecha de nacimiento' required autofocus>"<<endl;
						cout << "<p>Ingrese su lugar de nacimiento</p>	" << endl;
									cout << "<form dni='todo' method='GET'>" << endl;
									cout<<"<input type='string' name='lugar' class='form-control' placeholder='Ingrese su lugar de nacimiento' required autofocus>"<<endl;
									cout << "<p>Ingrese su direccion</p>	" << endl;
												cout << "<form dni='todo' method='GET'>" << endl;
												cout<<"<input type='string' name='direccion' class='form-control' placeholder='Ingrese su direccion' required autofocus>"<<endl;
									cout << "<br/><br/>" << endl;
			cout << "<form><input type='hidden' value='1' name='Panel'><input type='hidden' value='1' name='Carper'> <section class='bpadmin'> <button type='submit' name='Agregar' value='1' >Agregar</button></section></form>" << endl;
			cout << "<a href='http://localhost/cgi-bin/main?Panel=1' title='Ir la página anterior'>Volver</a><" << endl;
			}
			if(Get["Agregar"]=="1")  {
if(nacionalcontroller::exist(Get["dni"])) {

		cout << "<h2>La persona ya existe/h2>" << endl;

}
else {

	personadao::add(Get["dni"], Get["nombre"], Get["apellido"], Get["fecha"], Get["lugar"], Get["direccion"]);

	cout << "<h2>Agregado</h2>" << endl;
	cout << "<META HTTP-EQUIV='REFRESH' CONTENT='5;URL=http://localhost/cgi-bin/main?Panel=1'>"<< endl;
}

}

		}



