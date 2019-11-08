#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <iostream>
#include <string.h>
using namespace std;

class Date {
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int day, int month, int year);
	void input();
	void output();
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
	void input();
	void output();
};

#endif
