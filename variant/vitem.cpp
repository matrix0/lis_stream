/*
 * vitem.cpp
 *
 *  Created on: 2015��9��27��
 *      Author: liyouhuan
 */
#include "vitem.h"
vitem::vitem(Vtype _v, int _ts){
	this->val = _v;
	this->ptr = NULL;
	this->rn = NULL;
	this->next = NULL;
	this->dptr_most = NULL;
	this->timestamp = _ts;
	this->dn = NULL;
	this->un = NULL;
}
vitem::~vitem(){

}


bool vitem::partial(vitem* vit){
	return this->timestamp < vit->timestamp && this->val <= vit->val;
}

string vitem::to_str(){
	return "";
}

int vitem::to_size(){
	int sz = 0;

	sz += sizeof(vitem);


	return sz;
}
