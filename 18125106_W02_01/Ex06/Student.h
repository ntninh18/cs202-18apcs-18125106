#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

class Student {
private:
	string ID;
	string firstname;
	string lastname;
	string address;
	string DoB;
	int mark;
public:
	Student();
	Student(string id, string first, string last, string add, string dob, int gpa);
	bool saveStudent(const char* path);
	string last();
};

class StudentArray {
private:
	vector <Student> arr;
public:
	bool loadArray(const char* path);
	StudentArray sortArray();
	void save(const char* path);
	void clrtxt();
};