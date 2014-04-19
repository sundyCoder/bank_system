#ifndef BIZ_H_
#define BIZ_H_

long create(long id,char *name,long pass,long balance);
void save(long id,long sum);
int withdraw(long id,double sum,long passwd);
double query(long id,long passwd);

typedef struct{
	long Id;
	char name[20];
	long passwd;
	double balance;
}PERSON;

#endif
