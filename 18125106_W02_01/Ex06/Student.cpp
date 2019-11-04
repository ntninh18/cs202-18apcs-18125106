#include "Student.h"

Student::Student() {
	ID = "";
	firstname = "";
	lastname = "";
	address = "";
	DoB = "";
	mark = 0;
}
Student::Student(string id, string first, string last, string addr, string dob, int gpa) {
	ID = id;
	firstname = first;
	lastname = last;
	address = addr;
	DoB = dob;
	mark = gpa;
}
bool Student::saveStudent(const char *path) {
	ifstream fin;
	ofstream fout;
	fin.open(path);
	fout.open(path, ios::app);
	if (!fin.is_open())
		return false;
	fout << "ID: " << ID << endl;
	fout << "Firstname: " << firstname << endl;
	fout << "Lastname: " << lastname << endl;
	fout << "Address: " << address << endl;
	fout << "Date of Birth: " << DoB << endl;
	fout << "Mark: " << mark << endl;
	fout << "-" << endl;
	fin.close();
	fout.close();
	return true;
}

string Student::last() {
	return lastname;
}