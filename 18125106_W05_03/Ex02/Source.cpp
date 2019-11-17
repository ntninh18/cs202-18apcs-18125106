#include "University.h"
#include "Teacher.h"
#include "HTeacher.h"

int main() {
	University abc;
	abc.inputList();
	cout << endl << " 1. TEACHER LIST" << endl;
	abc.outputList();
	cout << " 2. TOTAL SALARY " << abc.sumSalary() << endl;
	cout << endl << " 3. HIGHEST PAID STAFF "; abc.highestPaid()->output();
	cout << " 4. Number of regular teachers: " << abc.countTeacher() << endl;
	cout << " 5. Number of homeroom teachers: " << abc.countHTeacher() << endl;
	cout << " 6. Average salary: " << abc.avgSalary() << endl;
	cout << " 7. High paid teacher(s): "; abc.highSalaryList();
	cout << " 8. Find teacher by ID - "; abc.findByID();
	cout << " 9. Find teacher by name - "; abc.findByName();
	cout << " 10. Number of teacher(s) whose number of days off > 4: " << abc.countDaysOff() << endl;
	system("pause");
	return 0;
}