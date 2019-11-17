#include "University.h"
#include "Teacher.h"
#include "HTeacher.h"

void University::inputList()
{
	int n;
	int type;
	Teacher *p;
	cout << "Enter number of teachers: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << endl << "Enter teacher number " << i + 1 << "'s info: " << endl;
		cout << "Teacher type (1: Teacher; 2: Homeroom teacher): ";
		cin >> type;

		p = NULL;

		if (type == 1) {
			p = new Teacher;
		}
		else if (type == 2) {
			p = new HTeacher;
		}
		p->input();
		a.push_back(p);
	}
}
void University::outputList()
{
	for (int i = 0; i < a.size(); i++)
		a[i]->output();
}

int University::sumSalary()
{
	int sum = 0;
	for (int i = 0; i < a.size(); i++) {
		sum += a[i]->salary();
	}
	return sum;
}
Teacher * University::highestPaid()
{
	Teacher* max = a[0];
	for (int i = 0; i < a.size(); i++) {
		if (a[i]->salary() > max->salary()) max = a[i];
	}
	return max;
}
int University::countTeacher()
{
	int count = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i]->type() == 1) count++;
	}
	return count;
}
int University::countHTeacher()
{
	int count = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i]->type() == 2) count++;
	}
	return count;
}
float University::avgSalary()
{
	float avg = 0;
	for (int i = 0; i < a.size(); i++) {
		avg += a[i]->salary();
	}
	avg = avg / a.size();
	return avg;
}
void University::highSalaryList()
{
	cout << "Teachers with high salary: " << endl;
	for (int i = 0; i < a.size(); i++) {
		if (a[i]->salary() > 10000000)
			a[i]->output();
	}
}
void University::findByID()
{
	char* id = new char[100];
	cout << "enter teacher ID: ";
	cin.ignore(1);
	cin.getline(id, 100);
	for (int i = 0; i < a.size(); i++) {
		if (strcmp(a[i]->getID(), id) == 0) {
			delete[]id;
			a[i]->output();
			return;
		}
	}
	cout << "  ERROR: Teacher not found" << endl;
}
void University::findByName()
{
	char* name = new char[100];
	cout << "enter teacher name: ";
	cin.ignore(1);
	cin.getline(name, 100);
	for (int i = 0; i < a.size(); i++) {
		if (strcmp(a[i]->getName(), name) == 0) {
			delete[]name;
			a[i]->output();
			return;
		}
	}
	cout << "  ERROR: Teacher not found" << endl;
}
int University::countDaysOff()
{
	int count = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i]->getDayOff() > 4) count++;
	}
	return count;
}
