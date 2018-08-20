/*
 * provincialnode.cpp
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#include "provincialnode.h"

provincialnode::provincialnode() {
	this->prov = NULL;
	this->next = NULL;

}
void provincialnode::setElement(provincial* prov){
	this->prov=prov;
}
provincial* provincialnode::getElement(){
	return this->prov;
}
void provincialnode::setNext(provincialnode* next){
	this->next = next;
}
provincialnode* provincialnode::getNext(){
	return this->next;
}
provincialnode::~provincialnode() {
	// TODO Auto-generated destructor stub
}

