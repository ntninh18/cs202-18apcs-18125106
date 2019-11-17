#include "Library.h"
#include "Reader.h"
#include "VIPReader.h"
#include "Date.h"

void Library::inputList()
{
	int n;
	int type;
	Reader *p;
	cout << "Enter number of staff: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Enter staff number " << i + 1 << "'s info: " << endl;
		cout << "Staff type (1: Regular reader; 2: VIP reader): ";
		cin >> type;

		p = NULL;

		if (type == 1) {
			p = new Reader;
		}
		else if (type == 2) {
			p = new VIPReader;
		}
		p->input();
		a.push_back(p);
	}
}
void Library::outputList() 
{
	for (int i = 0; i < a.size(); i++)
		a[i]->output();
}

int Library::totalFee()
{
	int sum = 0;
	for (int i = 0; i < a.size(); i++) {
		sum += a[i]->fee();
	}
	return sum;
}

Reader * Library::highestFee()
{
	Reader* max = a[0];
	for (int i = 0; i < a.size(); i++) {
		if (a[i]->fee() > max->fee()) max = a[i];
	}
	return max;
}
int Library::countReader()
{
	int count = 0;
	for (int i = 0; i < a.size(); i++) count++;
	return count;
}

int Library::countVIPReader()
{
	int count = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i]->type() == 2) count++;
	}
	return count;
}

float Library::avgFee()
{
	float avg = 0;
	for (int i = 0; i < a.size(); i++) {
		avg += a[i]->fee();
	}
	avg = avg / a.size();
	return avg;
}

void Library::highFeeList()
{
	cout << "Readers with high fee: " << endl;
	for (int i = 0; i < a.size(); i++) {
		if (a[i]->fee() > 10000000)
			a[i]->output();
	}
}

void Library::findByID()
{
	char* id = new char[100];
	cout << "enter reader ID: ";
	cin.ignore(1);
	cin.getline(id, 100);
	for (int i = 0; i < a.size(); i++) {
		if (strcmp(a[i]->getID(), id) == 0) {
			delete[]id;
			a[i]->output();
			return;
		}
	}
	cout << "  ERROR: Reader not found" << endl;
}

void Library::findByName()
{
	char* name = new char[100];
	cout << "enter reader name: ";
	cin.ignore(1);
	cin.getline(name, 100);
	for (int i = 0; i < a.size(); i++) {
		if (strcmp(a[i]->getName(), name) == 0) {
			delete[]name;
			a[i]->output();
			return;
		}
	}
	cout << "  ERROR: Reader not found" << endl;
}

int Library::countDayOut()
{
	int count = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i]->getDueDate() == 2017) count++;
	}
	return count;
}
