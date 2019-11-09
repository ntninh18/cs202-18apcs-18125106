#include "Reader.h"

Reader::Reader()
{
	ID = nullptr;
	fullname = nullptr;
	dueDate = Date();
	gender = nullptr;
}
Reader::Reader(char*id) 
{
	ID = new char[strlen(id) + 1];
	strcpy(ID, id);
	delete[] id;

	fullname = nullptr;
	dueDate = Date();
	gender = nullptr;
}
Reader::Reader(char*id, char*name) 
{
	ID = new char[strlen(id) + 1];
	strcpy(ID, id);
	delete[] id;

	ID = new char[strlen(name) + 1];
	strcpy(ID, name);
	delete[] name;

	dueDate = Date();
	gender = nullptr;
}
Reader::Reader(char * id, char * name, Date date)
{
	ID = new char[strlen(id) + 1];
	strcpy(ID, id);
	delete[] id;

	ID = new char[strlen(name) + 1];
	strcpy(ID, name);
	delete[] name;

	dueDate = date;
	gender = nullptr;
}
Reader::Reader(char*id, char*name, Date date, char* sex)
{
	ID = new char[strlen(id) + 1];
	strcpy(ID, id);
	delete[] id;

	ID = new char[strlen(name) + 1];
	strcpy(ID, name);
	delete[] name;

	dueDate = date;

	gender = new char[strlen(sex) + 1];
	strcpy(gender, sex);
	delete[] sex;
}

void Reader::input()
{
	cout << "Enter reader ID: ";
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
	cin.ignore();
	cin.getline(name, 100);
	fullname = new char[strlen(name) + 1];
	strcpy(fullname, name);
	delete[] name;


}
