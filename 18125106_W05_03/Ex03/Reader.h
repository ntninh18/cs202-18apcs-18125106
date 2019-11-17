#ifndef READER_H
#define READER_H
#define _CRT_SECURE_NO_WARNINGS
#include "Date.h"

class Reader {
private:
	char*ID;
	char*fullname;
	Date dueDate;
	char*gender;
	int numBook;
public:
	Reader();
	Reader(char*id);
	Reader(char*id, char*name);
	Reader(char*id, char*name, Date date);
	Reader(char*id, char*name, Date date, char* sex);
	Reader(char*id, char*name, Date date, char* sex, int num);
	int fee();
	void input();
	void out();
	void output();
};

#endif