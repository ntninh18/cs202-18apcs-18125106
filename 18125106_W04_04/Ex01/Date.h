#ifndef DATE_H
#define DATE_H
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