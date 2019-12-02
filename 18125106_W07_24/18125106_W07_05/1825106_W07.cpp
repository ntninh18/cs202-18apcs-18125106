#pragma once
#include "Fraction.h"

template<class T>
class MyVector {
private:
	T *arr;
	int size;
public:
	// empty array
	MyVector();
	// n zeros
	MyVector(int n);
	MyVector(T *a, int n);
	MyVector(const MyVector &v);
	~MyVector();
	int getSize();
	T getItem(int index);
	void setItem(T value, int index);
	void add(T value);
	void addRange(T *a, int n);
	void clear();
	bool contains(T value);
	void toArray(T *arr, int &n);
	bool equals(const MyVector &v);
	int indexOf(T value);
	int lastIndexOf(T value);
	void insert(T value, int index);
	void remove(T value);
	void removeAt(int index);
	void reverse();
	string toString();
	void sortAsc();
	void sortDesc();
	
	void print();
	void swap(T &a, T&b);
};

template<class T>
MyVector<T>::MyVector()
{
	arr = nullptr;
	size = 0;
}

template<class T>
MyVector<T>::MyVector(int n)
{
	arr = new MyVector[n];
	for (int i = 0; i < n; i++)
		arr[i] = 0;
	size = n;
}

template<class T>
MyVector<T>::MyVector(T * a, int n)
{
	arr = new MyVector[n];
	for (int i = 0; i < n; i++)
		arr[i] = a[i];
	size = n;
}

template<class T>
MyVector<T>::MyVector(const MyVector & v)
{
	size = v.size;
	arr = new MyVector[size];
	for (int i = 0; i < size; i++)
		arr[i] = v[i];
}

template<class T>
MyVector<T>::~MyVector()
{
	delete[] arr;
}

template<class T>
int MyVector<T>::getSize()
{
	return size;
}

template<class T>
T MyVector<T>::getItem(int index)
{
	return arr[index];
}

template<class T>
void MyVector<T>::setItem(T value, int index)
{
	arr[index] = value;
}

template<class T>
void MyVector<T>::add(T value)
{
	T *b = new T[size+1];
	for (int i = 0; i < size; i++) {
		b[i] = arr[i];
	}
	b[size] = value;
	delete[]arr;
	arr = b;
	size++;
	
}

template<class T>
void MyVector<T>::addRange(T * a, int n)
{
	T *tmp = new T[n+size];
	for (int i = 0; i < size; i++)
		tmp[i] = arr[i];
	for (int i = size; i <n+size ; i++)
		tmp[i] = a[i-size];
	delete[] arr;
	arr = tmp;
	delete[]tmp;
}

template<class T>
void MyVector<T>::clear()
{
	delete[] arr;
	size = 0;
}

template<class T>
bool MyVector<T>::contains(T value)
{
	for (int i = 0; i < size; i++) {
		if (value == arr[i]) {
			return true;
		}
	}
	return false;
}

template<class T>
void MyVector<T>::toArray(T * arr, int & n)
{
}

template<class T>
bool MyVector<T>::equals(const MyVector & v)
{
	if ((arr == v.arr) && size == v.size)
		return true;
	else return false;
}

template<class T>
int MyVector<T>::indexOf(T value)
{
	for (int i = 0; i < size; i++) {
		if (value == arr[i]) {
			return i;
		}
	}
	return -1;
}

template<class T>
int MyVector<T>::lastIndexOf(T value)
{
	return arr[size - 1];
}

template<class T>
void MyVector<T>::insert(T value, int index)
{
	if (index > size)
		return;
	else {
		T *tmp = new T[size + 1];
		size += 1;
		for (int i = 0; i < index; i++)
			tmp[i] = arr[i];
		tmp[index] = value;
		for (int i = index + 1; i <= size; i++)
			tmp[i] = arr[i - 1];
		delete[] arr;
		arr = tmp;
	}
}

template<class T>
void MyVector<T>::remove(T value)
{
	for (int i = 0; i < size; i++) {
		if (arr[i] == value) {
			removeAt(i);
			return;
		}
	}
	//cout << "Element not found!" << endl;
}

template<class T>
void MyVector<T>::removeAt(int index)
{
	for (int i = index; i < size - 1; i++)
		arr[i] = arr[i + 1];
	arr[size - 1] = 0;
	size--;
}

template<class T>
void MyVector<T>::reverse()
{
	T * tmp = new T[size + 1];

	for (int i = 0; i < (size / 2); i++)
	{
		tmp[i] = arr[i];
		arr[i] = arr[(size - 1) - i];
		arr[(size - 1) - i] = tmp[i];
	}

	delete[] tmp;
}


template<class T>
string MyVector<T>::toString()
{
	string ret = "";
	for (int i = 0; i < size; i++) {
		ret += to_string(arr[i]);
		if (i == size - 1) return ret;
		else ret += ", ";
	}
	return ret;
}

template<class T>
void MyVector<T>::sortAsc()
{
	int i, j;
	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

template<class T>
void MyVector<T>::sortDesc()
{
	int i, j;
	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - i - 1; j++)
			if (arr[j] < arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

template<class T>
void MyVector<T>::print()
{
	if (size == 0) {
		cout << "Empty array" << endl;
	}
	else {
		for (int i = 0; i < size; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
}

template<class T>
void MyVector<T>::swap(T & a, T & b)
{
	T tmp = a;
	a = b;
	b = tmp;

}

int main() {
	MyVector<int> v1;

	v1.add(10);
	v1.add(20);
	v1.add(30);
	v1.add(25);
	v1.add(80);
	v1.add(65);
	v1.print();

	v1.insert(15, 1);
	v1.print();
	v1.remove(25);
	v1.print();
	v1.reverse();
	v1.print();
	v1.sortAsc();
	v1.print();
	v1.sortDesc();
	v1.indexOf(10);
	v1.print();
	cout << "To string: " << v1.toString() << endl << endl;

	MyVector<Fraction> v2;
	Fraction f1(5, 6);
	Fraction f2(2, 3);
	Fraction f3(2, 5);

	v2.add(f1);
	v2.add(f2);
	v2.add(f3);
	v2.print();

	v2.insert(0, 3);
	v2.print();
	v2.reverse();
	v2.print();
	v2.sortAsc();
	v2.print();
	v2.sortDesc();
	v2.print();

	system("pause");

	return 0;
}