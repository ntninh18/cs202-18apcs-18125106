#include "Triangle.h"

void Triangle::display() {
	cout << a << "-" << b << "-" << c << " ";
}
bool Triangle::checkValid() {
	if (a + b > c && a + c > b && b + c > a)
		return true;
	else return false;
}
