#include "NVCN.h"

NVCN::NVCN()
{
	NV();
	numDay = 0;
}

NVCN::NVCN(int num)
{
	NV();
	numDay = num;
}

int NVCN::salary()
{
	return numDay * 300000;
}

void NVCN::input()
{
	NV::input();
	cout << "Enter number of days worked: ";
	cin >> numDay;
}

void NVCN::output()
{
	NV::output();
	cout << " Number of days worked: " << numDay << endl;
	cout << "-> Salary: " << salary() << endl;
}