#include "HTeacher.h"

HTeacher::HTeacher()
{
	HClass = nullptr;
	Teacher();
}
HTeacher::HTeacher(char * Class)
{
	HClass = new char[strlen(Class) + 1];
	strcpy(HClass, Class);
	Teacher();
}
HTeacher::HTeacher(char * Class, char * id, char * name)
{
	HClass = new char[strlen(Class) + 1];
	strcpy(HClass, Class);
	Teacher(id, name);
}
HTeacher::HTeacher(char * Class, char * id, char * name, int pay)
{
	HClass = new char[strlen(Class) + 1];
	strcpy(HClass, Class);
	Teacher(id, name, pay);
}
HTeacher::HTeacher(char * Class, char * id, char * name, int pay, int basic, int num)
{
	HClass = new char[strlen(Class) + 1];
	strcpy(HClass, Class);
	Teacher(id, name, pay, basic, num);
}
int HTeacher::salary()
{
	return Teacher::salary() + bonus;
}
