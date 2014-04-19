/*
 * menu.c
 *
 *  Created on: 2012-7-21
 *      Author: root
 */

#include <stdio.h>
#include "menu.h"
#include "biz.h"

int showMenu() {
	printf("create account---------->1\n");
	printf("save          ---------->2\n");
	printf("withdraw      ---------->3\n");
	printf("query         ---------->4\n");
	printf("exit          ---------->0\n");
	printf("\tenter your choice:");
	int c;
	//scanf("%d", &c);
	while(scanf("%d",&c)!=1){
		scanf("%*[^\n]");//虚读，读直到\n结束
		printf("\tenter your choice>");
	}
	return c;
}

void createMenu() {
	printf("\tenter passworld>");
	int pass = 0;
	scanf("%d", &pass);
	printf("\tenter balance>");
	double balance = 0;
	scanf("%lf", &balance);
	long id = create(balance, pass);
	printf("===========================\n");
	printf("create account %ld successful!\n", id);
	printf("===========================\n");

}

void saveMenu() {
	printf("\tenter money>");
	double money = 0;
	scanf("%lf", &money);
	save(money);
	printf("===========================\n");
	printf("save %lf successful!\n", money);
	printf("===========================\n");
}

void withdrawMenu() {
	printf("\tenter passworld>");
	int pass = 0;
	scanf("%d", &pass);
	printf("\tenter balance>");
	double balance = 0;
	scanf("%lf", &balance);
	long ret = withdraw(balance, pass);
	if (-1 == ret) {
		printf("===========================\n");
		printf("passworld is invalid or no enough money\n");
		printf("===========================\n");
	} else {
		printf("===========================\n");
		printf("witdraw successful!\n");
		printf("===========================\n");
	}
}

void queryMenu() {
	double balance = query();
	printf("===========================\n");
	printf("your balance is $[%lf]!\n", balance);
	printf("===========================\n");
}

void tipMenu(char *msg) {
	printf("===========================\n");
	printf("%s\n",msg);
	printf("===========================\n");
}

