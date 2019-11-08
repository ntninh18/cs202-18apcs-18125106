#ifndef HTTEACHER_H
#define HTEACHER_H
#include "Teacher.h"

class HTeacher : public Teacher {
private:
	int bonus = 500000;
public:
	int salary();
};

#endif