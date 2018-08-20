/*
 * nacionalqueue.h
 *
 *  Created on: 23 feb. 2018
 *      Author: luis
 */

#ifndef NACIONALQUEUE_H_
#define NACIONALQUEUE_H_
#include "nacionalnode.h"


class nacionalqueue {
private:
	nacionalnode* qstart;
	nacionalnode* qend;
public:
	nacionalqueue();
	void setQStart(nacionalnode*);
    nacionalnode* getQStart();
	void setQEnd(nacionalnode*);
    nacionalnode* getQEnd();
	void qstore(nacional*);
	nacional* qretrieve();
	void free();
	void show();
	void showfin();
	void showest();
	void showvoto();
	virtual ~nacionalqueue();
};

#endif /* NACIONALQUEUE_H_ */
