#include "Face.h"

void testFace(IFace *fc)
{
	IFace* a[3] = { fc, fc->clone(), fc->clone() };
	for (int i = 0; i < 3; i++) {
		a[i]->show();
	}
	cout << "The same 3 lines?" << endl;
	delete a;
}
int main() {
	Face fc;
	Face fc1("Rectangle");
	testFace(&fc1);

	EyedFace a("a", 1);
	cout << a.count << endl;

	system("pause");
	return 0;
}