#include "Bike.h"


Bike::Bike(char *_brand)
{
	brand = new char[strlen(_brand) + 1];
	strcpy(brand, _brand);
}

Bike::~Bike()
{
	delete [] brand;
}
