#include <iostream>
#include "Shape.h"
using namespace std;

Shape::Shape(const string &Shapename)
	:name(Shapename)
{
}

void Shape::setName(const string &ShapeName)
{
	name = ShapeName;
}
string Shape::getName()const
{
	return name;
}

void Shape::draw() const
{
	cout << "Shape Name:" << getName() << endl;
}


