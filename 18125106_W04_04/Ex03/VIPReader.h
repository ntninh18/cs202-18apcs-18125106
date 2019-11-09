#ifndef VIPREADER_H
#define VIPREADER_H
#define _CRT_SECURE_NO_WARNINGS
#include "Reader.h"

class VIPReader : public Reader {
private:
	int _fee = 50000;
public:
	VIPReader();
	VIPReader(char*id);
	VIPReader(char*id, char*name);
	VIPReader(char*id, char*name, Date date);
	VIPReader(char*id, char*name, Date date, char* sex);
	int fee();
	void output();
};

#endif