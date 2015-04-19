#include <iostream>
#include "Triangle.h"

using namespace std;

Triangle:: Triangle(const string &name, double length, double height) : Shape(name)
{
	setLength(length);
	setHeight(height);
}
void Triangle::setLength(double length)
{
	TLength = length;
}
double Triangle::getLength() const
{
	return TLength;
}

void Triangle::setHeight(double height)
{
	THeight = height;
}
double Triangle::getHeight() const
{
	return THeight;
}
double Triangle::perimeter() const
{
	return getLength() * getHeight();
}
double Triangle::area() const
{
	return ((1/2) * getLength()) * getHeight();
}
void Triangle::draw() const
{
	cout << "Triangle:";  
	Shape::draw();
	cout << "Base = " << getLength() << endl;
	cout << "Height = " << getHeight() << endl;
	cout << "Perimeter = " << perimeter();
	cout << "Area = " << area();
}
