#include <iostream>
#include "Square.h"
using namespace std;

Square::Square(const string &name, double side):Shape(name)
{
	setLength(side);
}

void Square::setLength(double side)
{
	SquareSide = side;
}
double Square::getLength() const
{
	return SquareSide;
}

double Square::perimeter() const
{
	return 4 * getLength();
}
double Square::area()const
{
	return getLength()*getLength();
}
void Square::draw() const
{
	cout << "Square = ";  
	Shape::draw();
	cout << "Length = " << getLength() << endl;
	cout << "Perimeter = " << perimeter();
	cout << "Area = " << area();
}



