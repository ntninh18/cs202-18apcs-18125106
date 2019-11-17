#include "Library.h"
#include "Reader.h"
#include "VIPReader.h"

int main() {
	Library abc;
	abc.inputList();
	cout << endl << " 1. READER LIST" << endl;
	abc.outputList();
	cout << " 2. TOTAL FEE " << abc.totalFee() << endl;
	cout << endl << " 3. READER WITH THE MOST FEE "; abc.highestFee()->output();
	cout << " 4. Number of readers: " << abc.countReader() << endl;
	cout << " 5. Number of VIP readers: " << abc.countVIPReader() << endl;
	cout << " 6. Average fee: " << abc.avgFee() << endl;
	cout << " 7. Readers who pay the most: "; abc.highFeeList();
	cout << " 8. Find reader by ID - "; abc.findByID();
	cout << " 9. Find reader by name - "; abc.findByName();
	cout << " 10. Number of reader(s) whose membership ends in 2017: " << abc.countDayOut() << endl;
	system("pause");
	return 0;
}