#ifndef DATE_H
#define DATE_H
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

#endif