#ifndef NVSX_H
#define NVSX_H
#include "NhanVien.h"

class NVSX : public NV {
private:
	int numProduct;
public:
	NVSX();
	NVSX(int num);
	int salary();
	void input();
	void output();
};

#endif