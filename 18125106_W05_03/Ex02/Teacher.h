#ifndef TEACHER_H
#define TEACHER_H
#include "University.h"

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
	char* getID() { return ID; };
	char* getName() { return fullname; };
	int getDayOff() { return dayOff; };
	virtual int salary();
	virtual void input();
	virtual void output();
	virtual int type() { return 1; };
	void out();
};

#endif