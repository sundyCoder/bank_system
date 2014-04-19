/*
 * menu.h
 *
 *  Created on: 2012-7-21
 *      Author: root
 */

#ifndef MENU_H_
#define MENU_H_

int showMenu(); //实现主菜单
void createMenu(); //收集开户信息，然后调用创建账户
void saveMenu();
void withdrawMenu();
void queryMenu();
void tipMenu(char *msg);
#endif /* MENU_H_ */
