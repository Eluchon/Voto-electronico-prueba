/*
 * municipalnode.h
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#ifndef MUNICIPALNODE_H_
#define MUNICIPALNODE_H_
#include "municipal.h"

class municipalnode {
private:
	municipal* mun;
	municipalnode* next;
public:
	municipalnode();

		void setElement(municipal*);
		municipal* getElement();
		void setNext(municipalnode*);
		municipalnode* getNext();
	virtual ~municipalnode();
};

#endif /* MUNICIPALNODE_H_ */
