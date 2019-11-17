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

void Teacher::input()
{
	cout << endl;
	cout << "Enter teacher ID: ";
	delete[] ID;
	char* id = new char[100];
	cin.ignore();
	cin.getline(id, 100);
	ID = new char[strlen(id) + 1];
	strcpy(ID, id);
	delete[] id;

	cout << "Enter fullname: ";
	delete[] fullname;
	char* name = new char[100];
	cin.getline(name, 100);
	fullname = new char[strlen(name) + 1];
	strcpy(fullname, name);
	delete[] name;

	cout << "Enter pay rate: "; cin >> payRate;
	cout << "Enter basic rate: "; cin >> basicRate;
	cout << "Enter days absent: "; cin >> dayOff;
}
void Teacher::out() 
{
	cout << endl << "--Teacher info--" << endl;
	cout << " ID: " << ID << endl;
	cout << " Fullname: " << fullname << endl;
	cout << " Pay rate: " << payRate << endl;
	cout << " Basic rate: " << basicRate << endl;
}
void Teacher::output()
{
	out();
	cout << "-> Salary: " << salary() << endl;
}
