#include <iostream>
using namespace std;



class Fraction {
private:
	int nu;
	int de;
public:
	Fraction();
	Fraction(int n);
	Fraction(int n, int d);
	~Fraction();

	Fraction & operator+= (const Fraction & b);
	Fraction & operator-= (const Fraction & b);
	Fraction & operator*= (const Fraction & b);
	Fraction & operator/= (const Fraction & b);

	Fraction operator+(const Fraction & b);
	Fraction operator-(const Fraction & b);
	Fraction operator*(const Fraction & b);
	Fraction operator/(const Fraction & b);

	Fraction operator+(int x);
	Fraction operator-(int x);

	Fraction& operator++();
	Fraction& operator--();
	Fraction operator++(int);
	Fraction operator--(int);

	bool operator==(const Fraction &b);
	bool operator<=(const Fraction &b);
	bool operator< (const Fraction &b);
	bool operator>=(const Fraction &b);
	bool operator> (const Fraction &b);
	bool operator!=(const Fraction &b);

	operator float () const;

	friend ostream & operator<<(ostream &cout, const Fraction & b);
	friend Fraction operator+(Fraction &a, Fraction &b);
	friend Fraction operator*(Fraction &a, Fraction &b);
};