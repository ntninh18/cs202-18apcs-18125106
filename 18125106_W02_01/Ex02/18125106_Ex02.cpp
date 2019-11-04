#include "Point.h"

int main() {
	PointArray a;
	Point b;
	bool ans = a.loadArray("input.txt");
	if (ans) {
		cout << "Array of points from data: "; a.showArray();
		b.input();
		cout << "The point that has the longest distance to your point is "; a.max(b).display();
	}
	else {
		cout << "Unable to load data" << endl;
	}
	system("pause");
	return 0;
}