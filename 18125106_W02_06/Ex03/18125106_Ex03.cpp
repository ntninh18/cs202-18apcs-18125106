#include "Triangle.h"

int main() {
	TriangleArray a;
	TriangleArray b;
	bool ans = a.loadArray("input.txt");
	if (ans) {
		cout << "Array of triangles from data: "; a.showArray();
		cout << endl << "Invalid triangles removed: "; 
		b = a.remove(); b.showArray();
		cout << endl << "- Triangles removed: " << a.countType(0) << endl;
		cout << "- Equilateral: " << b.countType(1) << endl;
		cout << "- Right-isosceles: " << b.countType(2) << endl;
		cout << "- Right: " << b.countType(3) << endl;
		cout << "- Acute: " << b.countType(4) << endl;
		cout << "- Obtuse: " << b.countType(5) << endl;
	}
	else {
		cout << "Unable to load data" << endl;
	}
	system("pause");
	return 0;
}