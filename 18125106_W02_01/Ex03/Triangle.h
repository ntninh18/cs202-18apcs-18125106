#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Triangle {
private:
	int a, b, c;
public:
	Triangle() {
		a = 0;
		b = 0;
		c = 0;
	}
	Triangle(int A, int B, int C) {
		a = A;
		b = B;
		c = C;
	}
	void display();
	bool checkValid();
	int checkType();
};

class TriangleArray {
private:
	vector <Triangle> arr;
public:
	bool loadArray(const char* path);
	void showArray();
	TriangleArray remove();
	int countType(int num);
};