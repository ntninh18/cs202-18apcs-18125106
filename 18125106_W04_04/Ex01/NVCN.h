#ifndef NVCN_H
#define NVCN_H
#include "NhanVien.h"

class NVCN : public NV {
private:
	int numDay;
public:
	NVCN() {};
	NVCN(char* id) {};
	int salary();
	void input();
	void output();
};

#endif