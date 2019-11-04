#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
	int hour;
	int minute;
	int second;
public:
	Time() {
		hour = 0;
		minute = 0;
		second = 0;
	}
	Time(int h, int m, int s) {
		hour = h;
		minute = m;
		second = s;
	}
	void input();
	bool validTime();
	Time addSec();
	Time subSec();
	void output();
};