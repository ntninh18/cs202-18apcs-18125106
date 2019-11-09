#ifndef TEACHER_H
#define TEACHER_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Teacher {
private:
	char*ID;
	char*fullname;
	int payRate;
	int basicRate;
	int dayOff;
public:
	Teacher();
	Teacher(char*id);
	Teacher(char*id, char*name);
	Teacher(char*id, char*name, int pay);
	Teacher(char*id, char*name, int pay, int basic, int num);
	int salary();
	void input();
	void out();
	void output();
};

#endif