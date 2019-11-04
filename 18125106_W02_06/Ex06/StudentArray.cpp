#include "Student.h"

bool StudentArray::loadArray(const char *path) {
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
		return false;
	int n; 
	fin >> n;
	string id, first, last, add, dob; 
	int gpa;
	for (int i = 0; i < n; i++) {
		fin >> id;
		getline(fin, first);
		getline(fin, first);
		getline(fin, last);
		getline(fin, add);
		getline(fin, dob);
		fin >> gpa;
		arr.push_back(Student(id, first, last, add, dob, gpa));
	}
	fin.close();
	return true;
}

StudentArray StudentArray::sortArray() {
	StudentArray a = *this;
	int n = arr.size();
	string temp;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a.arr[i].last() > a.arr[j].last()) {
				temp = a.arr[i].last();
				a.arr[i].last() = a.arr[j].last();
				a.arr[j].last() = temp;
			}
		}
	}
	return a;
}
void StudentArray::save(const char* path) {
	for (int i = 0; i < arr.size(); i++) {
		arr[i].saveStudent(path);
	}
}
void StudentArray::clrtxt() {
	ofstream fout;
	fout.open("output.txt", ofstream::out | ofstream::trunc);
	fout.close();
}