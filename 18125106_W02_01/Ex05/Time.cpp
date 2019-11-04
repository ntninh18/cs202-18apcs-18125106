#include "Time.h"

void Time::input() {
	cout << "Hour: "; cin >> hour;
	cout << "Minute: "; cin >> minute;
	cout << "Second: "; cin >> second;
	if (!validTime()) {
		cout << "ERROR: INVALID TIME" << endl;
		cout << "-" << endl;
		input();
	}
}
bool Time::validTime() {
	bool check = true;
	if (hour < 0 || hour > 23 || minute < 0 || minute > 59 || second < 0 || second > 59)
		check = false;
	return check;
}
Time Time::addSec() {
	Time ans;
	if (hour == 23 && minute == 59 && second == 59) {
		ans.hour = 0;
		ans.minute = 0;
		ans.second = 0;
	}
	else if (minute == 59 && second == 59) {
		ans.hour = hour + 1;
		ans.minute = 0;
		ans.second = 0;
	}
	else if (second == 59) {
		ans.hour = hour;
		ans.minute = minute + 1;
		ans.second = 0;
	}
	else {
		ans.hour = hour;
		ans.minute = minute;
		ans.second = second + 1;
	}
	return ans;
}
Time Time::subSec() {
	Time ans;
	if (hour == 0 && minute == 0 && second == 0) {
		ans.hour = 23;
		ans.minute = 59;
		ans.second = 59;
	}
	else if (minute == 0 && second == 0) {
		ans.hour = hour - 1;
		ans.minute = 59;
		ans.second = 59;
	}
	else if (second == 0) {
		ans.hour = hour;
		ans.minute = minute - 1;
		ans.second = 59;
	}
	else {
		ans.hour = hour;
		ans.minute = minute;
		ans.second = second - 1;
	}
	return ans;
}
void Time::output() {
	cout << setw(2) << setfill('0') << hour << ":";
	cout << setw(2) << setfill('0') << minute << ":";
	cout << setw(2) << setfill('0') << second << endl;
}