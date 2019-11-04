#include "Function.h"

Date::Date() {
	d = 1;
	m = 1;
	y = 1900;
}
Date::Date(int day, int month, int year) {
	d = day;
	m = month;
	y = year;
}
void Date::input() {
	cout << "Day: "; cin >> d;
	cout << "Month: "; cin >> m;
	cout << "Year: "; cin >> y;
	if (!validDate()) {
		cout << "-" << endl;
		cout << "ERROR: INVALID DATE" << endl;
		input();
	}
}
bool Date::checkLeapYear() {
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		return true;
	else return false;
}
bool Date::validDate() {
	bool check = true;
	int num[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (checkLeapYear()) num[1] = 29;
	if (m < 1 || m > 12 || d < 1 || d > num[m - 1])
		check = false;
	return check;
}
Date Date::tomorrow() {
	Date tomorrow;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	if (d == 31 && m == 12) {
		tomorrow.d = 1;
		tomorrow.m = 1;
		tomorrow.y = y + 1;
	}
	else if (d == days[m - 1] + 1) {
		tomorrow.d = 1;
		tomorrow.m = m + 1;
		tomorrow.y = y;
	}
	else {
		tomorrow.d = d + 1;
		tomorrow.m = m;
		tomorrow.y = y;
	}
	return tomorrow;
}
Date Date::yesterday() {
	Date yesterday;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	if (d == 1 && m == 1) {
		yesterday.d = 31;
		yesterday.m = 12;
		yesterday.y = y - 1;

	}
	else if (d == 1) {
		yesterday.d = days[m - 2];
		yesterday.m = m - 1;
		yesterday.y = y;
	}
	else {
		yesterday.d = d - 1;
		yesterday.m = m;
		yesterday.y = y;
	}
	return yesterday;
}
void Date::output() {
	cout << d << "/" << m << "/" << y << endl;
}
