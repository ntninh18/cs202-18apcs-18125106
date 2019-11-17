#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

class University {
private:
	vector <Teacher*> a;
public:
	void inputList();
	void outputList();
	int sumSalary();
	Teacher* highestPaid();
	int countTeacher();
	int countHTeacher();
	float avgSalary();
	void highSalaryList();
	void findByID();
	void findByName();
	int countDaysOff();
};

#endif