#include "Company.h"
#include "Types.h"

void Company::inputList() {
	int n;
	int type;
	NV *p;
	cout << "Enter number of staff: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Enter staff number " << i + 1 << "'s info: " << endl;
		cout << "Staff type (1: NVSX; 2: NVCN): ";
		cin >> type;

		p = NULL;

		if (type == 1) {
			p = new NVSX;
		}
		else if (type == 2) {
			p = new NVCN;
		}

		p->input();
		a.push_back(p);
	}
}

int Company::sumSalary() {
	int sum = 0;
	for (int i = 0; i < a.size(); i++) {
		sum += a[i]->salary();
	}
	return sum;
}

NV* Company::highestSalary()
{
	NV* max = a[0];
	for (int i = 0; i < a.size(); i++) {
		if (a[i]->salary() > max->salary()) max = a[i];
	}
	return max;
}

int Company::countNVCN()
{
	int count = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i]->type() == 2) count++;
	}
	return count;
}

int Company::countNVSX()
{
	int count = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i]->type() == 1) count++;
	}
	return count;
}

float Company::avgSalary()
{
	float avg = 0;
	for (int i = 0; i < a.size(); i++) {
		avg += a[i]->salary();
	}
	avg = avg / a.size();
	return avg;
}

void Company::outputList()
{
	for (int i = 0; i < a.size(); i++)
		a[i]->output();
}

void Company::lowSalaryList()
{
	cout << "Staffs with low salary: " << endl;
	for (int i = 0; i < a.size(); i++) {
		if (a[i]->salary() < 3000000)
			a[i]->output();
	}
}

void Company::findByID()
{
	char* id = new char[100];
	cout << "enter staff ID: "; 
	cin.ignore(1); 
	cin.getline(id, 100);
	for (int i = 0; i < a.size(); i++) {
		if (strcmp(a[i]->getID(), id) == 0) {
			delete[]id;
			a[i]->output();
			return;
		}
	}
	cout << "  ERROR: Staff not found" << endl;
}

void Company::findByName()
{
	char* name = new char[100];
	cout << "enter staff name: ";
	cin.ignore(1);
	cin.getline(name, 100);
	for (int i = 0; i < a.size(); i++) {
		if (strcmp(a[i]->getName(), name) == 0) {
			delete[]name;
			a[i]->output();
			return;
		}
	}
	cout << "  ERROR: Staff not found" << endl;
}

int Company::countDOB()
{
	int count = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i]->getBmonth() == 5) count++;
	}
	return count;
}

Date::Date()
{
	day = 1;
	month = 1;
	year = 1990;
}
Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}
void Date::input() {
	cout << "- day: "; cin >> day;
	cout << "- month: "; cin >> month;
	cout << "- year: "; cin >> year;
}
void Date::output() {
	cout << day << "/" << month << "/" << year;
}
NV::NV()
{
	staffID = nullptr;
	fullname = nullptr;
	dob = Date();
	address = nullptr;
}

NV::NV(char * id)
{
	staffID = new char[strlen(id) + 1];
	strcpy(staffID, id);

	fullname = nullptr;
	dob = Date();
	address = nullptr;
}

NV::NV(char * id, char * name)
{
	staffID = new char[strlen(id) + 1];
	strcpy(staffID, id);

	fullname = new char[strlen(name) + 1];
	strcpy(fullname, name);

	dob = Date();
	address = nullptr;
}

NV::NV(char * id, char * name, Date bday)
{
	staffID = new char[strlen(id) + 1];
	strcpy(staffID, id);

	fullname = new char[strlen(name) + 1];
	strcpy(fullname, name);

	dob = bday;
	address = nullptr;
}

NV::NV(char * id, char *name, Date bday, char *addr)
{
	staffID = new char[strlen(id) + 1];
	strcpy(staffID, id);

	fullname = new char[strlen(name) + 1];
	strcpy(fullname, name);

	dob = bday;

	address = new char[strlen(addr) + 1];
	strcpy(address, addr);
}
NV::~NV()
{
	delete[] staffID;
	staffID = nullptr;
	delete[] fullname;
	fullname = nullptr;
	delete[] address;
	fullname = nullptr;
}
void NV::input()
{
	cout << endl;
	cout << "Enter staff ID: ";
	char *id = new char[100];
	cin.ignore();
	cin.getline(id, 100);
	delete[] staffID;
	staffID = new char[strlen(id) + 1];
	strcpy(staffID, id);
	delete[] id;

	cout << "Enter fullname: ";
	char *name = new char[100];
	cin.getline(name, 100);
	delete[] fullname;
	fullname = new char[strlen(name) + 1];
	strcpy(fullname, name);
	delete[] name;

	cout << "Enter date of birth: " << endl;
	dob.input();

	cout << "Enter address: ";
	char *addr = new char[100];
	cin.ignore();
	cin.getline(addr, 100);
	delete[] address;
	address = new char[strlen(addr) + 1];
	strcpy(address, addr);
	delete[] addr;
}

void NV::output()
{
	cout << endl;
	cout << " ID: " << staffID << endl;
	cout << " Fullname: " << fullname << endl;
	cout << " DOB: "; dob.output(); cout << endl;
	cout << " Address: " << address << endl;
}

int NV::salary()
{
	return 0;
}

int NV::type()
{
	return 0;
}
