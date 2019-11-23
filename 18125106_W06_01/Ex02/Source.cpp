#include "Bike.h"

void display(Bike &a, EBike &b)
{
	a.move(2);
	b.move(2);
}

int main() {
	char a[] = "Honda";
	char b[] = "Yamaha";
	EBike b1(a), b2(b);
	display(b1, b2);
	system("pause");
	return 0;
}