/*
 * municipalqueue.cpp
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#include "municipalqueue.h"

municipalqueue::municipalqueue() {
	 qstart = qend = NULL;

}

void municipalqueue::setQStart(municipalnode* qstart){
	 this->qstart = qstart;
}
municipalnode* municipalqueue::getQStart(){
	return this->qstart;
}
void municipalqueue::setQEnd(municipalnode* qend){
	 this->qend = qend;
}
municipalnode* municipalqueue::getQEnd(){
	return this->qend;
}
void municipalqueue::qstore(municipal* element){
	municipalnode* newnacionalnode=new municipalnode();
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
municipal* municipalqueue::qretrieve(){

	if (this->qstart == NULL)
        return NULL;
	municipal* aux = this->qstart->getElement();
	municipalnode* nx = this->qstart;

    this->qstart = nx->getNext();

    if (this->qstart == NULL)
        this->qend = NULL;

    delete nx;

    return aux;
}

void municipalqueue::free(){
	while (this->qretrieve() != NULL);
}


void municipalqueue::show()
{
    if (this->qstart == NULL)
        return;

    municipalnode* prov = this->qstart;

    while (prov != NULL)
    {
    	 cout <<"<tr>"<< endl;
        cout << prov->getElement()->toString() << endl;
        cout <<"</tr>"<< endl;
        prov = prov->getNext();
    }

    cout << endl;
}
void municipalqueue::showfin()
{
    if (this->qstart == NULL)
        return;

    municipalnode* prov = this->qstart;

    while (prov != NULL)
    {
    	 cout <<"<tr>"<< endl;
        cout << prov->getElement()->toStringfin() << endl;
        cout <<"<tr>"<< endl;
        prov = prov->getNext();
    }

    cout << endl;
}
void municipalqueue::showest(){
	 if (this->qstart == NULL)
		        return;

	 municipalnode* nac = this->qstart;

		    while (nac != NULL)
		    {
		    	 cout <<"<tr>"<< endl;
		        cout << nac->getElement()->toStringest() << endl;
		        cout <<"<tr>"<< endl;
		        nac = nac->getNext();
		    }

		    cout << endl;
	}

void municipalqueue::showvoto(){
	 if (this->qstart == NULL)
		        return;

	 municipalnode* nac = this->qstart;

		    while (nac != NULL)
		    {

		        cout << nac->getElement()->toStringvoto() << endl;
		        nac = nac->getNext();
		    }

		    cout << endl;
}
municipalqueue::~municipalqueue() {
	// TODO Auto-generated destructor stub
}

