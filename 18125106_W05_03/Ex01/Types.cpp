#include "Types.h"

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
int NVCN::type()
{
	return 2;
}

NVSX::NVSX()
{
	NV();
	numProduct = 0;
}
NVSX::NVSX(int num)
{
	NV();
	numProduct = num;
}
int NVSX::salary()
{
	return numProduct * 20000;
}
void NVSX::input()
{
	NV::input();
	cout << "Enter number of products: ";
	cin >> numProduct;
}
void NVSX::output()
{
	NV::output();
	cout << " Number of products made: " << numProduct << endl;
	cout << "-> Salary: " << salary() << endl;
}

int NVSX::type()
{
	return 1;
}
