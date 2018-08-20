/*
 * nacionalnode.h
 *
 *  Created on: 23 feb. 2018
 *      Author: luis
 */

#ifndef NACIONALNODE_H_
#define NACIONALNODE_H_
#include "nacional.h"

class nacionalnode {
private:
	nacional* nac;
	nacionalnode* next;
public:
	nacionalnode();
		void setElement(nacional*);
		nacional* getElement();
		void setNext(nacionalnode*);
		nacionalnode* getNext();

	virtual ~nacionalnode();
};

#endif /* NACIONALNODE_H_ */
