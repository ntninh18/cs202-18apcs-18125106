#include "Fraction.h"

Fraction::Fraction() 
{
	nu = 0;
	de = 1;
}
Fraction::Fraction(int n, int d) 
{
	nu = n;
	de = d;
}
Fraction::~Fraction()
{
}
Fraction::Fraction(int n) {
	nu = n;
	de = 1;
}
Fraction & Fraction::operator+= (const Fraction &b) 
{
	nu = nu * b.de + de * b.nu;
	de = de * b.de;
	return *this;
}
Fraction & Fraction::operator-= (const Fraction &b) 
{
	nu = nu * b.de - de * b.nu;
	de = de * b.de;
	return *this;
}
Fraction & Fraction::operator*= (const Fraction &b) 
{
	nu = nu * b.nu;
	de = de * b.de;
	return *this;
}
Fraction & Fraction::operator/= (const Fraction &b) 
{
	nu = nu * b.de;
	de = de * b.nu;
	return *this;
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
Fraction& Fraction::operator++() {
	nu = de + nu;
	return *this;
}
Fraction& Fraction::operator--() {
	nu = de - nu;
	return *this;
}
Fraction Fraction::operator++(int) {
	Fraction res(*this);
	nu = de + nu;
	return res;
}
Fraction Fraction::operator--(int) {
	Fraction res(*this);
	nu = de - nu;
	return res;
}
bool Fraction::operator==(const Fraction &b) {
	return (nu*b.de == de * b.nu);
}
bool Fraction::operator<=(const Fraction &b) {
	return (nu*b.de <= de * b.nu);
}
bool Fraction::operator<(const Fraction &b) {
	return (nu*b.de < de * b.nu);
}
bool Fraction::operator>=(const Fraction &b) {
	return (nu*b.de >= de * b.nu);
}
bool Fraction::operator>(const Fraction &b) {
	return (nu*b.de > de * b.nu);
}
bool Fraction::operator!=(const Fraction &b) {
	return (nu*b.de != de * b.nu);
}
ostream & operator<<(ostream &cout, const Fraction &b) {
	cout << b.nu << "/" << b.de << endl;
	return cout;
}
Fraction operator+( Fraction &a,  Fraction &b) {
	Fraction ans(a);
	ans += b;
	return ans;
}
Fraction operator*(Fraction &a, Fraction &b) {
	Fraction ans(a);
	ans *= b;
	return ans;
}
Fraction::operator float () const {
	return (float)(nu / de);
}