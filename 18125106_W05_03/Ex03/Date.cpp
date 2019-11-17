#include "Date.h"

Date::Date()
{
	day = 1;
	month = 1;
	year = 1990;
}
Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}
void Date::input() {
	cout << "- day: "; cin >> day;
	cout << "- month: "; cin >> month;
	cout << "- year: "; cin >> year;
}
void Date::output() {
	cout << day << "/" << month << "/" << year;
}