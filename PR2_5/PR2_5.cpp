#include "RightAngled.h"
#include <iostream>
using namespace std;

int main()
{
	RightAngled a;
	a.calcArea();

	Triangle l;

	cout << "perimeter = " << l.perimeter() << endl;
	cout << "angle A :" << l.AngleA() << endl;
	cout << "angle B :" << l.AngleB() << endl;
	cout << "angle C :" << l.AngleC() << endl;

	cout << ++a << endl;
	cout << --a << endl;
	cout << a++ << endl;
	cout << a-- << endl;

	return 0;
}