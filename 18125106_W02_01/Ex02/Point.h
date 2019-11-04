#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(int X, int Y) {
		x = X;
		y = Y;
	}
	void display();
	float distance(Point b);
	void input();
};
class PointArray {
private:
	vector <Point> arr;
public:
	bool loadArray(const char *path);
	void showArray();
	Point max(Point b);
};