#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

using namespace std;

class Rectangle : public Shape
{
public:
	Rectangle(const string &, double = 0, double = 0);

	void setLength(double);
	double getLength() const;

	void setBreadth(double);
	double getBreadth() const;

	virtual double perimeter() const;
	virtual double area() const;
	virtual void draw() const;

private:
	double RLength;
	double RBreadth;
};
#endif
