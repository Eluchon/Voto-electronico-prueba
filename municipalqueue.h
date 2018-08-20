/*
 * municipalqueue.h
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#ifndef MUNICIPALQUEUE_H_
#define MUNICIPALQUEUE_H_
#include "municipalnode.h"

class municipalqueue {
private:
	municipalnode* qstart;
	municipalnode* qend;
public:
	municipalqueue();
	void setQStart(municipalnode*);
	municipalnode* getQStart();
			void setQEnd(municipalnode*);
			municipalnode* getQEnd();
			void qstore(municipal*);
			municipal* qretrieve();
			void free();
			void show();
			void showfin();
			void showest();
			void showvoto();
	virtual ~municipalqueue();
};

#endif /* MUNICIPALQUEUE_H_ */
