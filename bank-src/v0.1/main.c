/*
 * main.c
 *
 *  Created on: 2012-7-21
 *      Author: root
 */

#include <stdio.h>
#include "menu.h"

int main(void) {
	int c;
	do {
		c = showMenu();
		switch (c) {
		case 1:
			createMenu();
			break;
		case 2:
			saveMenu();
			break;
		case 3:
			withdrawMenu();
			break;
		case 4:
			queryMenu();
			break;
		case 0:
			tipMenu("welcome come back\n");
			break;
		default:
			tipMenu("invalid input choice!\n");
			break;
		}
	} while (0 != c);
	return 0;
}
