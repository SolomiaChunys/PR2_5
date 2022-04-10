#pragma once
#include <iostream>
#include <string>

using namespace std;

class Triangle
{
private:
	int a, b, c;
public:
	Triangle();
	Triangle(int a, int b, int c);
	Triangle(const Triangle&);

	int getA() const { return a; }
	int getB() const { return b; }
	int getC() const { return c; }

	void setA(int a) { this->a = a; }
	void setB(int b) { this->b = b; }
	void setC(int c) { this->c = c; }

	operator string() const;

	friend ostream& operator << (ostream&, const Triangle&);
	friend istream& operator >> (istream&, Triangle&);

	int perimeter();
	double AngleA();
	double AngleB();
	double AngleC();

	Triangle& operator ++();
	Triangle& operator --();
	Triangle operator ++(int);
	Triangle operator --(int);
};

