/*
 * municipalnode.cpp
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#include "municipalnode.h"

municipalnode::municipalnode() {
	this->mun = NULL;
	this->next = NULL;

}
void municipalnode::setElement(municipal* mun){
	this->mun=mun;
}
municipal* municipalnode::getElement(){
	return this->mun;
}
void municipalnode::setNext(municipalnode* next){
	this->next = next;
}
municipalnode* municipalnode::getNext(){
	return this->next;
}
municipalnode::~municipalnode() {
	// TODO Auto-generated destructor stub
}

