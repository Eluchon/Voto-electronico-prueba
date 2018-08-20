/*
 * municipalviewer.cpp
 *
 *  Created on: 4 mar. 2018
 *      Author: luis
 */

#include "municipalviewer.h"

municipalviewer::municipalviewer() {
	// TODO Auto-generated constructor stub

}

municipalviewer::~municipalviewer() {
	// TODO Auto-generated destructor stub
}

void municipalviewer::htmlVoto(municipalqueue* queue) {
	map<string,string> Get;
			initializeGet(Get);

			if(Get["Votar"]=="") {
										    cout << "<div class='container'>" << endl;
											cout << "<h2>Votacion Municipal</h2>" << endl;
											cout << "<form dni='todo' method='GET'>" << endl;
										    queue->showvoto();
									        cout << "</div>" << endl;
											cout << " <section class='bpadmin'><input type='hidden' value='1'  name='Ir'><input type='hidden' value='" << Get["dni"] << "'  name='dni'><input type='hidden' value='1' name='Ingreso'> <button type='submit' name='Votar' value='1' >Votar</button></section></form>" << endl;
								}
			if((Get["Votar"]=="1") && !(Get["Vot"]=="")){
		cout << "<h2>Votacion Realizada</h2>" << endl;
		municipaldao::addvoto(Get["Vot"]);
		personadao::votoupdatemuni(Get["dni"]);

		cout << "<a href='http://localhost/cgi-bin/main?dni=" << Get["dni"] << "&Ingreso=1' title='Ir la página anterior'>Volver</a><" << endl;
					}
					if((Get["Votar"]=="1") && (Get["Vot"]=="")){
						cout << "<h2>Seleccione una opcion para votar</h2>" << endl;
						cout << "<a href='http://localhost/cgi-bin/main?dni=" << Get["dni"] << "&Ingreso=1&Ir=1' title='Ir la página anterior'>Volver</a><" << endl;
					}
		}



void municipalviewer::htmlCargar(municipalqueue* queue){
	map<string,string> Get;
		initializeGet(Get);
			if(Get["Agregar"]=="" || Get["Volver"]=="") {
		    cout << "<div class='container'>" << endl;
			cout << "<h2>Base de datos</h2>" << endl;
			cout << "<table class='table'>" << endl;
			cout << "<thead>" << endl;
			cout << " <tr>" << endl;
			cout << "<th>Lista</th>" << endl;
			cout << "<th>Partido</th>" << endl;
			cout << "<th>Nombre</th>" << endl;
			cout << "<th>Municipio</th>" << endl;
			cout << " </tr>" << endl;
			cout << "</thead>" << endl;
		    cout << "<tbody>" << endl;
		    queue->show();
			cout << "</tbody>" << endl;
            cout << "</table>" << endl;
	        cout << "</div>" << endl;
			cout << "<h2>Agregar</h2>" << endl;
			cout << "<p>Ingrese la lista</p>	" << endl;
			cout << "<form dni='todo' method='GET'>" << endl;
			cout<<"<input type='number' name='lista' class='form-control' placeholder='Ingrese la lista del candidato' required autofocus>"<<endl;
			cout << "<p>Ingrese el nombre</p>	" << endl;
			cout << "<form dni='todo' method='GET'>" << endl;
			cout<<"<input type='string' name='nombre' class='form-control' placeholder='Ingrese el nombre del candidato' required autofocus>"<<endl;
			cout << "<p>Ingrese el partido</p>	" << endl;
			cout << "<form dni='todo' method='GET'>" << endl;
			cout<<"<input type='string' name='partido' class='form-control' placeholder='Ingrese el partido del candidato' required autofocus>"<<endl;
			cout << "<p>Ingrese el municipio</p>	" << endl;
											cout << "<form dni='todo' method='GET'>" << endl;
											cout<<"<input type='string' name='municipio' class='form-control' placeholder='Ingrese el municipio del candidato' required autofocus>"<<endl;
			cout << "<br/><br/>" << endl;
			cout << "<form><input type='hidden' value='1' name='Panel'><input type='hidden' value='1' name='Carmuni'> <section class='bpadmin'> <button type='submit' name='Agregar' value='1' >Agregar</button></section></form>" << endl;
			cout << "<a href='http://localhost/cgi-bin/main?Panel=1' title='Ir la página anterior'>Volver</a><" << endl;
			}
			if(Get["Agregar"]=="1")  {
if(municipalcontroller::exist(Get["lista"])) {

		cout << "<h2>El candidato ya existe</h2>" << endl;

}
else {

	municipalcontroller::cargardao(Get["lista"], Get["nombre"], Get["partido"], Get["municipio"]);

	cout << "<h2>Agregado</h2>" << endl;
	cout << "<META HTTP-EQUIV='REFRESH' CONTENT='5;URL=http://localhost/cgi-bin/main?Panel=1&Carmuni=1'>"<< endl;
}

}

		}


void municipalviewer::exito() {
	map<string,string> Get;
			initializeGet(Get);


	if(Get["Volver"]==""){
		cout << "<p>Exito</p>" << endl;
	cout << "<form> <section class='bpadmin'> <button type='submit' name='Volver' value='1' >Volver</button></section></form>" << endl;
}
	else
		personacontroller::inicio();
}
void municipalviewer::htmlModificar(municipalqueue* queue){
	map<string,string> Get;
			initializeGet(Get);

				if(Get["Modificar"]=="" || Get["Volver"]=="") {
					cout << "<div class='container'>" << endl;
					cout << "<h2>Base de datos</h2>" << endl;
					cout << "<table class='table'>" << endl;
					cout << "<thead>" << endl;
					cout << " <tr>" << endl;
					cout << "<th>Lista</th>" << endl;
					cout << "<th>Partido</th>" << endl;
					cout << "<th>Nombre</th>" << endl;
					cout << "<th>Municipio</th>" << endl;
					cout << " </tr>" << endl;
					cout << "</thead>" << endl;
					cout << "<tbody>" << endl;
					  queue->show();
					  cout << "</tbody>" << endl;
					  cout << "</table>" << endl;
					  cout << "</div>" << endl;
					  cout << "<h2>Ingresar</h2>" << endl;
				cout << "<p>Ingrese la lista del candidato a modificar</p>	" << endl;
				cout << "<form dni='todo' method='GET'>" << endl;
				cout<<"<input type='number' name='lista' class='form-control' placeholder='Ingrese la lista del candidato' required autofocus>"<<endl;
				cout << "<h2>Modificar</h2>" << endl;
				cout << "<p>Cambiar Nombre</p>	" << endl;
				cout << "<form dni='todo' method='GET'>" << endl;
				cout<<"<input type='string' name='nombre' class='form-control' placeholder='Cambiar el nombre' required autofocus>"<<endl;
				cout << "<p>Cambiar Partido</p>	" << endl;
				cout << "<form dni='todo' method='GET'>" << endl;
				cout<<"<input type='string' name='partido' class='form-control' placeholder='Cambiar el partido' required autofocus>"<<endl;
				cout << "<p>Cambiar Municipio</p>	" << endl;
								cout << "<form dni='todo' method='GET'>" << endl;
								cout<<"<input type='string' name='municipio' class='form-control' placeholder='Cambiar el municipio' required autofocus>"<<endl;
				cout << "<br/><br/>" << endl;
				cout << "<form><input type='hidden' value='1' name='Panel'><input type='hidden' value='1' name='Modmuni'> <section class='bpadmin'> <button type='submit' name='Modificar' value='1' >Modificar</button></section></form>" << endl;
				cout << "<a href='http://localhost/cgi-bin/main?Panel=1' title='Ir la página anterior'>Volver</a><" << endl;
				}
				if(Get["Modificar"]=="1"){
	if(municipalcontroller::exist(Get["lista"])) {

		municipalcontroller::modificardao(Get["lista"], Get["nombre"], Get["partido"],Get["municipio"] );

				cout << "<h2>Modificado</h2>" << endl;
				cout << "<META HTTP-EQUIV='REFRESH' CONTENT='5;URL=http://localhost/cgi-bin/main?Panel=1&Modmuni=1'>"<< endl;
	}
	else {

					cout << "<h2>El candidato no existe</h2>" << endl;

	}

	}

	}

void municipalviewer::htmlEliminar(municipalqueue* queue){
	map<string,string> Get;
			initializeGet(Get);
				if(Get["Eliminar"]=="" || Get["Volver"]=="") {
				cout << "<div class='container'>" << endl;
				cout << "<h2>Base de datos</h2>" << endl;
				cout << "<table class='table'>" << endl;
				cout << "<thead>" << endl;
				cout << " <tr>" << endl;
				cout << "<th>Lista</th>" << endl;
				cout << "<th>Partido</th>" << endl;
				cout << "<th>Nombre</th>" << endl;
				cout << " </tr>" << endl;
				cout << "</thead>" << endl;
				cout << "<tbody>" << endl;
				queue->show();
				cout << "</tbody>" << endl;
				cout << "</table>" << endl;
				cout << "</div>" << endl;
			    cout << "<h2>Eliminar</h2>" << endl;
				cout << "<p>Ingrese la lista</p>	" << endl;
				cout << "<form dni='todo' method='GET'>" << endl;
				cout<<"<input type='number' name='lista' class='form-control' placeholder='Eliminar candidato' required autofocus>"<<endl;
				cout << "<br/><br/>" << endl;
				cout << "<form><input type='hidden' value='1' name='Panel'><input type='hidden' value='1' name='Elimmuni'> <section class='bpadmin'> <button type='submit' name='Eliminar' value='1' >Eliminar</button></section></form>" << endl;
				cout << "<a href='http://localhost/cgi-bin/main?Panel=1' title='Ir la página anterior'>Volver</a><" << endl;
				}
				if(Get["Eliminar"]=="1") {
					if(municipalcontroller::exist(Get["lista"])){
						municipalcontroller::eliminardao(Get["lista"]);
										cout << "<h2>Eliminado</h2>" << endl;
										cout << "<META HTTP-EQUIV='REFRESH' CONTENT='5;URL=http://localhost/cgi-bin/main?Panel=1&Elimmuni=1'>"<< endl;
					}
					else
						cout << "<h2>No existe</h2>" << endl;
				}
				}

void municipalviewer::htmlfin(municipalqueue* queue) {
	map<string,string> Get;
				initializeGet(Get);

						cout << "<div class='container'>" << endl;
										cout << "<h2></h2>" << endl;
										cout << "<table class='table'>" << endl;
										cout << "<thead>" << endl;
										cout << " <tr>" << endl;
										cout << "<th>Votos</th>" << endl;
										cout << "<th>Partido</th>" << endl;
										cout << "<th>Nombre</th>" << endl;
										cout << " </tr>" << endl;
										cout << "</thead>" << endl;
										cout << "<tbody>" << endl;
										queue->showfin();
										cout << "</tbody>" << endl;
										cout << "</table>" << endl;
										cout << "</div>" << endl;


				cout << "<a href='http://localhost/cgi-bin/main' title='Ir la página anterior'>Volver</a><" << endl;
					}
void municipalviewer::htmlestadistica(municipalqueue* queue){
	map<string,string> Get;
	initializeGet(Get);
	cout << "<div class='container'>" << endl;
												cout << "<h2>Estadisticas Municipales</h2>" << endl;
												cout << "<table class='table'>" << endl;
												cout << "<thead>" << endl;
												cout << " <tr>" << endl;
												cout << "<th>Porcentaje</th>" << endl;
												cout << "<th>Partido</th>" << endl;
												cout << "<th>Nombre</th>" << endl;
												cout << "</tr>" << endl;
												cout << "</thead>" << endl;
												cout << "<tbody>" << endl;
												queue->showest();
												cout << "</tbody>" << endl;
												cout << "</table>" << endl;
												cout << "</div>" << endl;
	cout << "<a href='http://localhost/cgi-bin/main?Panel=1' title='Ir la página anterior'>Volver</a><" << endl;
}
