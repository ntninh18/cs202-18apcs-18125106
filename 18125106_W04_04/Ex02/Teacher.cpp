#include "Teacher.h"

Teacher::Teacher()
{
	ID = nullptr;
	fullname = nullptr;
	payRate = 0;
	basicRate = 0;
	dayOff = 0;
}
Teacher::Teacher(char * id)
{
	ID = new char[strlen(id)+1];
	strcpy(ID, id);

	fullname = nullptr;
	payRate = 0;
	basicRate = 0;
	dayOff = 0;
}
Teacher::Teacher(char * id, char * name)
{
	ID = new char[strlen(id) + 1];
	strcpy(ID, id);

	fullname = new char[strlen(name) + 1];
	strcpy(fullname, name);

	payRate = 0;
	basicRate = 0;
	dayOff = 0;
}
Teacher::Teacher(char * id, char * name, int pay)
{
	ID = new char[strlen(id) + 1];
	strcpy(ID, id);

	fullname = new char[strlen(name) + 1];
	strcpy(fullname, name);

	payRate = pay;
	basicRate = 0;
	dayOff = 0;
}
Teacher::Teacher(char * id, char * name, int pay, int basic, int num)
{
	ID = new char[strlen(id) + 1];
	strcpy(ID, id);

	fullname = new char[strlen(name) + 1];
	strcpy(fullname, name);

	payRate = pay;
	basicRate = basic;
	dayOff = num;
}
int Teacher::salary()
{
	return payRate * basicRate - dayOff * 100000;
}
