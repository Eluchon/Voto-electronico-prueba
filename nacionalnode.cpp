/*
 * nacionalnode.cpp
 *
 *  Created on: 23 feb. 2018
 *      Author: luis
 */

#include "nacionalnode.h"

nacionalnode::nacionalnode() {
	this->nac = NULL;
	this->next = NULL;

}
void nacionalnode::setElement(nacional* nac){
	this->nac=nac;
}
nacional* nacionalnode::getElement(){
	return this->nac;
}
void nacionalnode::setNext(nacionalnode* next){
	this->next = next;
}
nacionalnode* nacionalnode::getNext(){
	return this->next;
}
nacionalnode::~nacionalnode() {
	// TODO Auto-generated destructor stub
}

