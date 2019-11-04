#include "Function.h"

int main() {
	Date d;
	d.input();
	Date tmr = d.tomorrow();
	Date ytd = d.yesterday();
	cout << "-" << endl;
	cout << "Your date:"; d.output();
	cout << "Tomorrow: "; tmr.output();
	cout << "Yesterday: "; ytd.output();
	system("pause");
	return 0;
}