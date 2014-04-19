/*
 * biz.h
 *
 *  Created on: 2012-7-21
 *      Author: root
 */

#ifndef BIZ_H_
#define BIZ_H_

void generateId(); //得到唯一的ID号
long create(double balance ,int password); //创建账户
void save(int sum);   //存款
int withdraw(double sum ,int password); //取款
double query();       //查询余额
#endif /* BIZ_H_ */
