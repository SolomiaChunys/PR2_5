#include "RightAngled.h"
#include <sstream>
#include <iostream>

using namespace std;

RightAngled::RightAngled()
{ }

RightAngled::RightAngled(Triangle triangle)
{
	triangle.setC(sqrt(triangle.getA() * triangle.getA() + triangle.getB() * triangle.getB()));
	setTriangle(triangle);
	setArea(this->calcArea());
}

RightAngled::RightAngled(const RightAngled& f)
{
	triangle = f.triangle;
	area = f.area;
}

RightAngled::operator string() const
{
	stringstream sss;
	sss << "area = " << getArea() << endl;

	return string(triangle) + sss.str();
}

ostream& operator << (ostream& out, const RightAngled& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, RightAngled& t)
{
	cout << endl;
	cout << "Triangle : "; in >> t.triangle;

	return in;
}

double RightAngled::calcArea()
{
	return (triangle.getA() * triangle.getB()) / 2;
}

RightAngled& RightAngled::operator ++()
{
	++triangle;
	return *this;
}

RightAngled& RightAngled::operator --()
{
	--triangle;
	return *this;
}

RightAngled RightAngled::operator ++(int)
{
	RightAngled t(*this);
	triangle++;
	return t;
}

RightAngled RightAngled::operator --(int)
{
	RightAngled t(*this);
	triangle--;
	return t;
}