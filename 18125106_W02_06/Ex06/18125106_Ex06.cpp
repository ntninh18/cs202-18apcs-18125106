#include "Student.h"

int main() {
	StudentArray a;
	StudentArray b;
	bool ans = a.loadArray("input.txt");
	if (ans) {
		a.clrtxt();
		b = a.sortArray();
		b.save("output.txt");
		cout << "Successfully saved" << endl;
	}
	else {
		cout << "Unable to load data" << endl;
	}
	system("pause");
	return 0;
}