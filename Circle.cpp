#include <iostream>
#include "Circle.h"

using namespace std;

Circle::Circle(const string &name, double radius):Shape(name)
{
	setRadius(radius);
}

void Circle::setRadius(double radius)
{
	CRadius = radius;
}
double Circle::getRadius() const
{
	return CRadius;
}

double Circle::perimeter() const
{
	return 3.14*getRadius();
}
double Circle::area() const
{
	return 3.14 * getRadius() * getRadius();
}

void Circle::draw() const
{
	cout << "Circle:";  
	Shape::draw();
	cout << "Length = " << getRadius() << endl;
	cout << "Perimeter = " << perimeter();
	cout << "Area = " << area();
}
