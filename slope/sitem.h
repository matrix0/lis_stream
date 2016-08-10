/*
 * sitem.h
 *
 *  Created on: 2016��8��7��
 *      Author: liyouhuan
 */

#ifndef SITEM_H_
#define SITEM_H_
#include "../util/util.h"
class sitem{
public:
	sitem(int _v, int _t, int _winsize);
	~sitem();
	int to_size();


	int timestamp;
	int val;
	int win_size;
	int rank;
	double slope_backtrack;
	sitem* backtrack;
	sitem* next;
	sitem* prev;
};



#endif /* SITEM_H_ */
