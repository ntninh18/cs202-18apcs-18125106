#include "Fraction.h"


Fraction::Fraction()
{
	nu = 0;
	de = 1;
}
Fraction::Fraction(int num)
{
	nu = num;
	de = 1;
}
Fraction::Fraction(int num, int den)
{
	nu = num;
	de = den;
}
bool Fraction::operator==(Fraction & b)
{
	return (nu*b.de == de * b.nu);
}
bool Fraction::operator<(Fraction & b)
{
	return ((float)nu / (float)de) < ((float)b.de / (float)b.nu);
}
bool Fraction::operator>(Fraction & b)
{
	return ((float)nu / (float)de) > ((float)b.de / (float)b.nu);
}
Fraction Fraction::operator+ (const Fraction &b)
{
	Fraction ans;
	ans.nu = nu * b.de + de * b.nu;
	ans.de = de * b.de;
	return ans;
}
Fraction Fraction::operator- (const Fraction &b)
{
	Fraction ans;
	ans.nu = nu * b.de - de * b.nu;
	ans.de = de * b.de;
	return ans;
}
Fraction Fraction::operator* (const Fraction &b)
{
	Fraction ans;
	ans.nu = nu * b.nu;
	ans.de = de * b.de;
	return ans;
}
Fraction Fraction::operator/ (const Fraction &b)
{
	Fraction ans;
	ans.nu = nu * b.de;
	ans.de = de * b.nu;
	return ans;
}
Fraction Fraction::operator+(int x)
{
	Fraction ans;
	ans.nu = nu + x * de;
	ans.de = de;
	return ans;
}
Fraction Fraction::operator-(int x)
{
	Fraction ans;
	ans.nu = nu - x * de;
	ans.de = de;
	return ans;
}
ostream & operator<<(ostream & cout, Fraction const & b)
{
	cout << b.nu << "/" << b.de;
	return cout;
}
