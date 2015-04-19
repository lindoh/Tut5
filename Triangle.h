#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"

using namespace std;

class Triangle : public Shape
{
public:
	Triangle(const string &, double = 0.0, double = 0.0);
	void setLength(double);
	double getLength() const;
	void setHeight(double);
	double getHeight() const;

	virtual double perimeter() const;
	virtual double area() const;

	virtual void draw() const;

private:
	double TLength;
	double THeight;
};
#endif
