#include <iostream>
#include <time.h>
using namespace std;

class Date {
private:
	int d, m, y;
public:
	Date();
	Date(int day, int month, int year);
	void input();
	bool checkLeapYear();
	bool validDate();
	Date tomorrow();
	Date yesterday();
	void output();
};