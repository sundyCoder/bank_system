/*
 * biz.c
 *
 *  Created on: 2012-7-21
 *      Author: root
 */
//业务逻辑层
#include "biz.h"

static long id;
static int password;
static double balance;

void generateId(){
	static long myid = 0;
	id = ++myid;
}

long create(double b ,int p){
	generateId();
	password = p;
	balance = b;
	return id;
}

void save(int sum){
	balance+=sum;
}

int withdraw(double sum ,int p){
	if(p!=password){
		//printf("passworld is invalid.\n");
		return -1;
	}

	if(sum>balance){
		//printf("No enough money.\n");
		return -1;
	}
	balance-=sum;
	return 0;
}

double query(){
	return balance;
}












