#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class Fraction {
private:
	int nu;
	int de;
public:
	Fraction() {
		nu = 0;
		de = 1;
	}
	Fraction(int n, int d) {
		nu = n;
		de = d;
	}
	void display();
	Fraction & operator+= (const Fraction & b);
	int compare(Fraction p2);
	Fraction reduce();
};

class FractionArray {
private:
	vector <Fraction> arr;
public:
	bool loadArray(const char *path);
	void showArray();
	Fraction sum();
	Fraction max();
	void sortAsc();
};