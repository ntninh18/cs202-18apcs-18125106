#pragma once
#ifndef BIKE_H
#define BIKE_H
#include <iostream>
using namespace std;

class Bike
{
private:
	char *brand; // hiệu xe
public:
	Bike();
	Bike(char *_brand);
	~Bike();
	virtual void move(int t1) {
		cout << brand << ":" << t1 * 12 << " ";
	};
};

class EBike : public Bike
{
public:
	EBike() {};
	EBike(char *_brand) : Bike(_brand) {};
	void move(int t2) {
		Bike::move(t2 * 2);
	};
};

void display(Bike &a, EBike &b);
#endif