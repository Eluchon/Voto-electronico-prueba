/*
 * provincialqueue.h
 *
 *  Created on: 24 feb. 2018
 *      Author: luis
 */

#ifndef PROVINCIALQUEUE_H_
#define PROVINCIALQUEUE_H_
#include "provincialnode.h"

class provincialqueue {
	private:
	provincialnode* qstart;
	provincialnode* qend;
public:
	provincialqueue();
	void setQStart(provincialnode*);
	provincialnode* getQStart();
		void setQEnd(provincialnode*);
		provincialnode* getQEnd();
		void qstore(provincial*);
		provincial* qretrieve();
		void free();
		void show();
		void showfin();
		void showest();
		void showvoto();
	virtual ~provincialqueue();
};

#endif /* PROVINCIALQUEUE_H_ */
