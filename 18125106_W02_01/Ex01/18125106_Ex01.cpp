#include "Fraction.h"

int main() {
	FractionArray a;
	bool ans = a.loadArray("input.txt");
	if (ans) {
		a.showArray();
		cout << endl << "Sum = "; a.sum().reduce().display();
		cout << endl << "Max = "; a.max().display();
		cout << endl; a.sortAsc();
		cout << "Sorted array: "; a.showArray();
	}
	else {
		cout << "Unable to load data" << endl;
	}
	system("pause");
	return 0;
}