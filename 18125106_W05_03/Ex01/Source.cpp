#include "Types.h"

int main() {
	Company abc;
	abc.inputList();
	cout << endl << " 1. STAFF LIST" << endl;
	abc.outputList();
	cout << " 2. TOTAL SALARY " << abc.sumSalary() << endl;
	cout << endl << " 3. HIGHEST PAID STAFF "; abc.highestSalary()->output();
	cout << " 4. Number of NVSX: " << abc.countNVSX() << endl;
	cout << " 5. Number of NVCN: " << abc.countNVCN() << endl;
	cout << " 6. Average salary: " << abc.avgSalary() << endl;
	cout << " 7. Staff(s) with low salary: "; abc.lowSalaryList();
	cout << " 8. Find staff by ID - "; abc.findByID();
	cout << " 9. Find staff by name - "; abc.findByName();
	cout << " 10. Number of staff(s) born in May: " << abc.countDOB() << endl;
	system("pause");
	return 0;
}