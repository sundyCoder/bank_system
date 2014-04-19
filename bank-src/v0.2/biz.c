/*
 * biz.c
 *
 *  Created on: 2012-7-21
 *      Author: root
 */

#include <stdio.h>
#include <string.h>
#include "biz.h"

PERSON per[20];

long create(long id,char *name,long pass,long balance){
	per[id].Id = id;
	strcpy(per[id].name,name);
	per[id].passwd = pass;
	per[id].balance = balance;
	return id;
}

void save(long id,long sum){
	per[id].balance += sum;
}
int withdraw(long id,double sum,long passwd){
	if(passwd!=per[id].passwd){
		return -1;
	}

	if(sum>per[id].balance){
		return -1;
	}
	per[id].balance-=sum;
	return 0;
}

double query(long id,long passwd){
	return per[id].balance;
}


