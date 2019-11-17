#ifndef LIBRARY_H
#define LIBRARY_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

class Library {
private:
	vector <Reader*> a;
public:
	void inputList();
	void outputList();
	int totalFee();
	Reader* highestFee();
	int countReader();
	int countVIPReader();
	float avgFee();
	void highFeeList();
	void findByID();
	void findByName();
	int countDayOut();
};
#endif