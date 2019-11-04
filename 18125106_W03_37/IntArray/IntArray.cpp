#include"IntArray.h"

IntArray::IntArray()
{
	n = 0; 
	arr = nullptr;
}

IntArray::IntArray(int size)
{
	n = size;
	delete[] arr;
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = 0;
	}
}

IntArray::IntArray(int *a, const int &size)
{
	n = size;
	delete[] arr;
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = a[i];
	}
}

IntArray::IntArray(const IntArray &a)
{
	n = a.n;
	delete[] arr;
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = a.arr[i];
	}
}

IntArray::~IntArray()
{
	n = 0;
	delete[] arr;
}

IntArray &IntArray::operator=(const IntArray &a)
{
	n = a.n;
	delete[] arr;
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = a.arr[i];
	}
	return *this;
}

int &IntArray::operator[](int i)
{
	return arr[i];
}

IntArray::operator int()
{
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += arr[i];
	}
	return ans;
}

istream &operator>>(istream &cin, IntArray &a)
{
	cout << "Enter number of elements: ";
	cin >> a.n;
	delete[] a.arr;
	a.arr = new int[a.n];
	for (int i = 0; i < a.n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a.arr[i];
	}
	return cin;
}

ostream &operator<<(ostream &cout, const IntArray &a)
{
	cout << "Input array: ";
	for (int i = 0; i < a.n; i++) {
		cout << a.arr[i] << " ";
	}
	cout << endl;
	return cout;
}