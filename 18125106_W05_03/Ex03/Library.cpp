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
