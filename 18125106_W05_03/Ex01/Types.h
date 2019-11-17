#ifndef NVCN_H
#define NVCN_H
#include "Company.h"

class NVCN : public NV {
private:
	int numDay;
public:
	NVCN();
	NVCN(int num);
	int salary();
	void input();
	void output();
	int type();
};

class NVSX : public NV {
private:
	int numProduct;
public:
	NVSX();
	NVSX(int num);
	int salary();
	void input();
	void output();
	int type();
};
#endif