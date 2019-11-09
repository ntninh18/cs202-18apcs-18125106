#ifndef READER_H
#define READER_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Date {
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int d, int m, int y);
	void input();
	void output();
};
class Reader {
private:
	char*ID;
	char*fullname;
	Date dueDate;
	char*gender;
public:
	Reader();
	Reader(char*id);
	Reader(char*id, char*name);
	Reader(char*id, char*name, Date date);
	Reader(char*id, char*name, Date date, char* sex);
	void input();
	void output();
};

#endif