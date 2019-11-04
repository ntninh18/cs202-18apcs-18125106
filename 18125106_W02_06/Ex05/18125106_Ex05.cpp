#include "Time.h"

int main() {
	Time d;
	d.input();
	Time add = d.addSec();
	Time sub = d.subSec();
	cout << "-" << endl;
	cout << "Your time: "; d.output();
	cout << "Add 1 sec: "; add.output();
	cout << "Subtract 1 sec: "; sub.output();
	system("pause");
	return 0;
}