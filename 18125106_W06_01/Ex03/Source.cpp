#include "Face.h"

void testFace(IFace *fc)
{
	IFace* a[3] = { fc, fc->clone(), fc->clone() };
	for (int i = 0; i < 3; i++) {
		a[i]->show();
	}
	cout << "The same 3 lines?" << endl;
	delete a[1];
	delete a[2];
}
int main() {
	Face fc;
	Face fc1("Rectangle");
	testFace(&fc1);

	EyedFace e1("1", 1);
	cout << e1.count << endl;
	EyedFace e2("2", 2);
	cout << e2.count << endl;
	EyedFace e3("3", 3);
	cout << e3.count << endl;

	system("pause");
	return 0;
}