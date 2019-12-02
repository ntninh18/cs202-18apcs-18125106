
#include <iostream>
#include <string>
using namespace std;

class Fraction {
private:
	int nu;
	int de;
public:
	Fraction();
	Fraction(int);
	Fraction(int, int);

	Fraction operator+(const Fraction & b);
	Fraction operator-(const Fraction & b);
	Fraction operator*(const Fraction & b);
	Fraction operator/(const Fraction & b);

	Fraction operator+(int x);
	Fraction operator-(int x);

	bool operator == (Fraction & b);
	bool operator < (Fraction & b);
	bool operator > (Fraction & b);
	friend ostream & operator<<  (ostream & cout, Fraction const & b);
};
