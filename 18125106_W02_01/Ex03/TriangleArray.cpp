#include"Triangle.h"

bool TriangleArray::loadArray(const char* path) {
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
		return false;
	int n, a, b, c;
	fin >> n;
	for (int i = 0; i < n; i++) {
		fin >> a >> b >> c;
		arr.push_back(Triangle(a, b, c));
	}
	fin.close();
	return true;
}
void TriangleArray::showArray() {
	for (int i = arr.size() - 1; i >= 0; i--) {
		arr[i].display();
	}
}
TriangleArray TriangleArray::remove() {
	TriangleArray ans;
	ans.arr = arr;
	for (int i = 0; i < ans.arr.size(); i++) {
		if (!ans.arr[i].checkValid())
			ans.arr.erase(ans.arr.begin() + i);
	}
	return ans;
}
int Triangle::checkType() {
	if (!checkValid()) return 0; // invalid
	else if (a == b && b == c) return 1; // equilateral
	else if ((a == b && a*a + b * b == c * c) || (a == c && a*a + c * c == b * b) || (b == c && b*b + c * c == a * a)) return 2; // right-isosceles
	else if ((a*a + b * b == c * c) || (a*a + c * c == b * b) || (b*b + c * c == a * a)) return 3; // right
	else if ((a*a + b * b > c * c) || (a*a + c * c > b * b) || ((b*b + c * c > a * a))) return 4; // acute
	else return 5; // obtuse
}
int TriangleArray::countType(int num) {
	int invalid = 0, equilateral = 0, right_isosceles = 0, right = 0, acute = 0, obtuse = 0;
	for (int i = 0; i < arr.size(); i++) {
		switch (arr[i].checkType()) {
		case 0: {
			invalid++; 
			break; 
		}
		case 1: {
			equilateral++;
			break;
		}
		case 2: {
			right_isosceles++;
			break;
		}
		case 3: {
			right++;
			break;
		}
		case 4: {
			acute++;
			break;
		}
		case 5: {
			obtuse++;
			break;
		}
		}
	}
	switch (num) {
	case 0: return invalid;
	case 1: return equilateral;
	case 2: return right_isosceles;
	case 3: return right;
	case 4: return acute;
	case 5: return obtuse;
	}
}