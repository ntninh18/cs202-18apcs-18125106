#include "Bike.h"

Bike::Bike()
{
	brand = nullptr;
}

Bike::Bike(char *_brand)
{
	brand = new char[strlen(_brand) + 1];
	strcpy(brand, _brand);
}

Bike::~Bike()
{
	delete brand;
}

void display(Bike &a, EBike &b)
{
	a.move(2);
	b.move(2);
}
