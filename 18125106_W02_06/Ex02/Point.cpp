#include "Point.h"

void Point::input() {
	cout << "X: "; cin >> x;
	cout << "Y: "; cin >> y;
}
void Point::display() {
	cout << "(" << x << "," << y << ") ";
}
float Point::distance(Point b) {
	return sqrt((x - b.x)*(x - b.x) + (y - b.y)*(y - b.y));
}