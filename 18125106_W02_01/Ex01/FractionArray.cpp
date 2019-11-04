#include "Fraction.h"

bool FractionArray::loadArray(const char *path) {
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
		return false;
	int n, x, y;
	fin >> n;
	for (int i = 0; i < n; i++) {
		fin >> x >> y;
		arr.push_back(Fraction(x, y));
	}
	fin.close();
	return true;
}
Fraction FractionArray::sum() {
	Fraction ans;
	for (int i = arr.size() - 1; i >= 0; i--) {
		ans += arr[i];
	}
	return ans;
}
void FractionArray::showArray() {
	for (int i = arr.size() - 1; i >= 0; i--) {
		arr[i].display();
	}
}
Fraction FractionArray::max() {
	Fraction ans = arr[0];
	for (int i = 0; i < arr.size() - 1; i++) {
		if (arr[i].compare(ans) == 1) {
			ans = arr[i];
		}
	}
	return ans;
}
void FractionArray::sortAsc() {
	for (int i = 0; i < arr.size() - 1; i++) {
		for (int j = i + 1; j < arr.size(); j++) {
			if (arr[i].compare(arr[j]) == -1) {
				Fraction temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}