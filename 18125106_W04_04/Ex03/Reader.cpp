#include "Reader.h"

Reader::Reader()
{
	ID = nullptr;
	fullname = nullptr;
	dueDate = Date();
	gender = nullptr;
	numBook = 0;
}
Reader::Reader(char*id) 
{
	ID = new char[strlen(id) + 1];
	strcpy(ID, id);
	delete[] id;

	fullname = nullptr;
	dueDate = Date();
	gender = nullptr;
	numBook = 0;
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
	numBook = 0;
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
	numBook = 0;
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

	numBook = 0;
}
Reader::Reader(char*id, char*name, Date date, char* sex, int num)
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

	numBook = num;
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

	cout << "Enter due date: " << endl;
	dueDate.input();

	cout << "Enter gender: ";
	delete[] gender;
	char* sex = new char[100];
	cin.ignore();
	cin.getline(sex, 100);
	gender = new char[strlen(sex) + 1];
	strcpy(gender, sex);
	delete[] sex;

	cout << "Enter number of books borrowed: "; cin >> numBook;
}
void Reader::out() {
	cout << endl << "--Reader info--" << endl;
	cout << " ID: " << ID << endl;
	cout << " Fullname: " << fullname << endl;
	cout << " Due date: "; dueDate.output();
	cout << endl << " Gender: " << gender << endl;
}
int Reader::fee() {
	return numBook * 5000;
}
void Reader::output() {
	out();
	cout << " Monthly fee: " << fee() << endl << endl;
}