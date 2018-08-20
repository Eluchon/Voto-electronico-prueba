/*
 * provincialqueue.cpp
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#include "provincialqueue.h"

provincialqueue::provincialqueue() {
	 qstart = qend = NULL;
}
void provincialqueue::setQStart(provincialnode* qstart){
	 this->qstart = qstart;
}
provincialnode* provincialqueue::getQStart(){
	return this->qstart;
}
void provincialqueue::setQEnd(provincialnode* qend){
	 this->qend = qend;
}
provincialnode* provincialqueue::getQEnd(){
	return this->qend;
}
void provincialqueue::qstore(provincial* element){
	provincialnode* newnacionalnode=new provincialnode();
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
provincial* provincialqueue::qretrieve(){

	if (this->qstart == NULL)
        return NULL;
    provincial* aux = this->qstart->getElement();
    provincialnode* nx = this->qstart;

    this->qstart = nx->getNext();

    if (this->qstart == NULL)
        this->qend = NULL;

    delete nx;

    return aux;
}

void provincialqueue::free(){
	while (this->qretrieve() != NULL);
}


void provincialqueue::show()
{
    if (this->qstart == NULL)
        return;

    provincialnode* prov = this->qstart;

    while (prov != NULL)
    {
    	 cout <<"<tr>"<< endl;
        cout << prov->getElement()->toString() << endl;
        cout <<"</tr>"<< endl;
        prov = prov->getNext();
    }

    cout << endl;
}
void provincialqueue::showfin()
{
    if (this->qstart == NULL)
        return;

    provincialnode* prov = this->qstart;

    while (prov != NULL)
    {
    	 cout <<"<tr>"<< endl;
        cout << prov->getElement()->toStringfin() << endl;
        cout <<"<tr>"<< endl;
        prov = prov->getNext();
    }

    cout << endl;
}
void provincialqueue::showest(){
	 if (this->qstart == NULL)
		        return;

		    provincialnode* nac = this->qstart;

		    while (nac != NULL)
		    {
		    	 cout <<"<tr>"<< endl;
		        cout << nac->getElement()->toStringest() << endl;
		        cout <<"<tr>"<< endl;
		        nac = nac->getNext();
		    }

		    cout << endl;
	}

void provincialqueue::showvoto(){
	 if (this->qstart == NULL)
		        return;

		    provincialnode* nac = this->qstart;

		    while (nac != NULL)
		    {

		        cout << nac->getElement()->toStringvoto() << endl;
		        nac = nac->getNext();
		    }

		    cout << endl;
}
provincialqueue::~provincialqueue() {
	// TODO Auto-generated destructor stub
}

