#include "NVSX.h"

int NVSX::salary()
{
	return numProduct * 300000;
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