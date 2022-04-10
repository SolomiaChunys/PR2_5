#include "Triangle.h"
#include <sstream>
#include <iostream>
#include <cmath>
#define PI 3.1415926535

using namespace std;

Triangle::Triangle()
{ }

Triangle::Triangle(int a, int b, int c)
{
	setA(a);
	setB(b);
	setC(c);
}

Triangle::Triangle(const Triangle& f)
{
	a = f.a;
	b = f.b;
	c = f.c;
}

Triangle::operator string() const
{
	stringstream sss;
	sss << endl;
	sss << "side1 = " << a << endl;
	sss << "side2 = " << b << endl;
	sss << "side3 = = " << c << endl;
	sss << endl;

	return sss.str();
}

ostream& operator << (ostream& out, const Triangle& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, Triangle& f)
{
	int a, b, c;
	cout << endl;
	cout << "side1 = "; in >> a;
	cout << "side2 = "; in >> b;
	cout << "side3 = "; in >> c;
	Triangle(a, b, c);
	return in;
}

int Triangle::perimeter()
{
	return getA() + getB() + getC();
}

double Triangle::AngleA()
{
	return (acos(((b * b) + (c * c) - (a * a)) / (2 * b * c))) * 180 / PI;
}

double Triangle::AngleB()
{
	return (acos(((a * a) + (c * c) - (b * b)) / (2. * a * c))) * 180 / PI;
}

double Triangle::AngleC()
{
	return (acos(((a * a) + (b * b) - (c * c)) / (2. * a * b))) * 180 / PI;
}

Triangle& Triangle::operator ++()
{
	a++;
	return *this;
}

Triangle& Triangle::operator --()
{
	a--;
	return *this;
}

Triangle Triangle::operator ++(int)
{
	Triangle t(*this);
	b++;
	return t;

}

Triangle Triangle::operator --(int)
{
	Triangle t(*this);
	b--;
	return t;
}
