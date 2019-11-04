#include "Point.h"

bool PointArray::loadArray(const char *path) {
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
		return false;
	int n, x, y;
	fin >> n;
	for (int i = 0; i < n; i++) {
		fin >> x >> y;
		arr.push_back(Point(x, y));
	}
	fin.close();
	return true;
}
void PointArray::showArray() {
	for (int i = arr.size() - 1; i >= 0; i--) {
		arr[i].display();
	}
	cout << endl;
}
Point PointArray::max(Point b) {
	Point ans;
	float max = arr[0].distance(b);
	for (int i = 0; i < arr.size(); i++) {
		if (max < arr[i].distance(b)) {
			max = arr[i].distance(b);
			ans = arr[i];
		}
	}
	return ans;
}