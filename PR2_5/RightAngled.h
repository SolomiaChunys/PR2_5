#pragma once
#include <iostream>
#include "Triangle.h"
#include <string>

using namespace std;

class RightAngled
{
private:
	double area;
	Triangle triangle;
public:
	RightAngled();
	RightAngled(Triangle triangle);
	RightAngled(const RightAngled&);

	double getArea()const { return area; }
	Triangle getTriangle() const { return triangle; }

	void setArea(double area) { this->area = area; }
	void setTriangle(Triangle triangle) { this->triangle = triangle; }

	operator string() const;

	friend ostream& operator << (ostream&, const RightAngled&);
	friend istream& operator >> (istream&, RightAngled&);

	double calcArea();

	RightAngled& operator ++();
	RightAngled& operator --();
	RightAngled operator ++(int);
	RightAngled operator --(int);
};

