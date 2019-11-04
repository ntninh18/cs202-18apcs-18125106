#include <iostream>
#include <vector>
using namespace std;

class IntArray
{
private:
	int n;
	int *arr;

public:
	friend istream &operator>>(istream &cin, IntArray &a);
	friend ostream &operator<<(ostream &cout, const IntArray &a);

	IntArray();
	IntArray(int size);
	IntArray(int *a, const int &size);
	IntArray(const IntArray &a);
	~IntArray();

	IntArray &operator=(const IntArray &a);
	int &operator[](int i);
	operator int();
};
