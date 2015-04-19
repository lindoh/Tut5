#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(const string &name , double length, double breadth):Shape(name)
{
	setLength(length);
	setBreadth(breadth);
}

void Rectangle::setLength(double length)
{
	RLength = length;
}
double Rectangle::getLength() const
{
	return RLength;
}

void Rectangle::setBreadth(double breadth)
{
	RBreadth = breadth;
}
double Rectangle::getBreadth() const
{
	return RBreadth;
}

double Rectangle::perimeter() const
{
	return 2*getLength() + 2*getBreadth();
}
double Rectangle::area() const
{
	return getLength() * getBreadth();
}

void Rectangle::draw() const
{
	cout << "Rectangle:";  
	Shape::draw();
	cout << "Length = " << getLength() << endl;
	cout << "Breadth = " << " " << getBreadth() << endl;
	cout << "Perimeter = " << perimeter();
	cout << "Area = " << area();
}
