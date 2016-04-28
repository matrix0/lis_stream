/*
 * runtime.h
 *
 *  Created on: 2015��9��24��
 *      Author: liyouhuan
 */

#ifndef UTIL_RUNTIME_H_
#define UTIL_RUNTIME_H_
#include "util.h"

class runtime{
public:
	runtime();
	void initial();
	void begin();
	void end();
	double getsum();
	double getcur();
	double getavg();
	int  getnum();
private:
	long long int sum;
	long long int cur;
	int dup_num;
};




#endif /* UTIL_RUNTIME_H_ */
