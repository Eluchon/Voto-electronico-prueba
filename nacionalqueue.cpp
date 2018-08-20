	/*
 * nacionalqueue.cpp
 *
 *  Created on: 23 feb. 2018
 *      Author: luis
 */

#include "nacionalqueue.h"

nacionalqueue::nacionalqueue() {
	 qstart = qend = NULL;
}
void nacionalqueue::setQStart(nacionalnode* qstart){
	 this->qstart = qstart;
}
nacionalnode* nacionalqueue::getQStart(){
	return this->qstart;
}
void nacionalqueue::setQEnd(nacionalnode* qend){
	 this->qend = qend;
}
nacionalnode* nacionalqueue::getQEnd(){
	return this->qend;
}
void nacionalqueue::qstore(nacional* element){
	nacionalnode* newnacionalnode=new nacionalnode();
	newnacionalnode->setElement(element);
	newnacionalnode->setNext(NULL);

    if (qstart == NULL)
    {
        qstart = qend = newnacionalnode;
        return;
    }

    qend->setNext(newnacionalnode);

    qend = newnacionalnode;
}
nacional* nacionalqueue::qretrieve(){

	if (this->qstart == NULL)
        return NULL;
    nacional* aux = this->qstart->getElement();
    nacionalnode* nx = this->qstart;

    this->qstart = nx->getNext();

    if (this->qstart == NULL)
        this->qend = NULL;

    delete nx;

    return aux;
}

void nacionalqueue::free(){
	while (this->qretrieve() != NULL);
}


void nacionalqueue::show()
{
    if (this->qstart == NULL)
        return;

    nacionalnode* nac = this->qstart;

    while (nac != NULL)
    {
    	 cout <<"<tr>"<< endl;
        cout << nac->getElement()->toString() << endl;
        cout <<"<tr>"<< endl;
        nac = nac->getNext();
    }

    cout << endl;
}
void nacionalqueue::showfin()
{
    if (this->qstart == NULL)
        return;

    nacionalnode* nac = this->qstart;

    while (nac != NULL)
    {
    	 cout <<"<tr>"<< endl;
        cout << nac->getElement()->toStringfin() << endl;
        cout <<"<tr>"<< endl;
        nac = nac->getNext();
    }

    cout << endl;
}
void nacionalqueue::showest(){
	  if (this->qstart == NULL)
	        return;

	    nacionalnode* nac = this->qstart;

	    while (nac != NULL)
	    {
	    	 cout <<"<tr>"<< endl;
	        cout << nac->getElement()->toStringest() << endl;
	        cout <<"<tr>"<< endl;
	        nac = nac->getNext();
	    }

	    cout << endl;
}
void nacionalqueue::showvoto(){
	 if (this->qstart == NULL)
		        return;

		    nacionalnode* nac = this->qstart;

		    while (nac != NULL)
		    {

		        cout << nac->getElement()->toStringvoto() << endl;
		        nac = nac->getNext();
		    }

		    cout << endl;
}
nacionalqueue::~nacionalqueue() {
	// TODO Auto-generated destructor stub
}

