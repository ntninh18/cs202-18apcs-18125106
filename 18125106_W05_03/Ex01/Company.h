#ifndef COMPANY_H
#define _CRT_SECURE_NO_WARNINGS
#define COMPANY_H
#include <iostream>
#include <vector>
using namespace std;
class Date {
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int d, int m, int y);
	void input();
	void output();
	int getMonth() {
		return month;
	}
};
class NV {
private:
	char* staffID;
	char* fullname;
	Date dob;
	char* address;
public:
	NV();
	NV(char* id);
	NV(char* id, char* name);
	NV(char* id, char* name, Date bday);
	NV(char* id, char* name, Date bday, char* addr);
	~NV();
	virtual void input();
	virtual void output();
	virtual int salary();
	virtual int type();
	char* getID() {
		return staffID;
	};
	char* getName() {
		return fullname;
	}
	int getBmonth() {
		return dob.getMonth();
	}
};
class Company {
private:
	vector<NV*> a;
public:
	void inputList();
	void outputList();
	int sumSalary();
	NV* highestSalary();
	int countNVCN();
	int countNVSX();
	float avgSalary();
	void lowSalaryList();
	void findByID();
	void findByName();
	int countDOB();
};
#endif
