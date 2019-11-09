#include "NhanVien.h"


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
	cout << "--Staff info--" << endl;
	cout << " ID: " << staffID << endl;
	cout << " Fullname: " << fullname << endl;
	cout << " DOB: "; dob.output(); cout << endl;
	cout << " Address: " << address << endl;
}

