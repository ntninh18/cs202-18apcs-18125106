#ifndef HTTEACHER_H
#define HTEACHER_H
#include "Teacher.h"

class HTeacher : public Teacher {
private:
	char* HClass;
	int bonus = 500000;
public:
	HTeacher();
	HTeacher(char* Class);
	HTeacher(char* Class, char *id, char* name);
	HTeacher(char* Class, char* id, char* name, int pay);
	HTeacher(char* Class, char* id, char* name, int pay, int basic, int num);
	int salary();
	void input();
	void output();
};

#endif