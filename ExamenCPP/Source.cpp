#include"Massiv.h"

int main() {
	Massiv A(3),B(3);
	A.SetValue(13);
	Massiv C = A + B;

	A.PrintMassiv();
	B.PrintMassiv();
	C.PrintMassiv();

	system("pause");
	return 0;
}