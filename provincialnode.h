/*
 * provincialnode.h
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#ifndef PROVINCIALNODE_H_
#define PROVINCIALNODE_H_
#include "provincial.h"

class provincialnode {
private:
	provincial* prov;
		provincialnode* next;
public:
	provincialnode();

	void setElement(provincial*);
	provincial* getElement();
	void setNext(provincialnode*);
	provincialnode* getNext();

	virtual ~provincialnode();
};

#endif /* PROVINCIALNODE_H_ */
