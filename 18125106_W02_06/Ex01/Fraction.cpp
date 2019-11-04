#include "Fraction.h"

void Fraction::display() {
	cout << nu << "/" << de << " ";
}

Fraction & Fraction::operator+= (const Fraction & b) {
	nu = nu * b.de + de * b.nu;
	de = de * b.de;
	return *this;
}
int Fraction::compare( Fraction p2) {
	double val1 = 1.0 * nu / de;
	double val2 = 1.0 * p2.nu / p2.de;
	if (val1 < val2)
		return -1;
	else if (val1 == val2)
		return 0;
	else
		return 1;

}
Fraction Fraction::reduce() {
	Fraction b;
	for (int i = de * nu; i > 1; i--) {
		if ((de % i == 0) && (nu % i == 0)) {
			b.de /= i;
			b.nu /= i;
		}
	}
	return b;
}

