#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"

using namespace std;

class Square : public Shape
{
public:
	Square(const string &, double = 0.0);

	void setLength(double);
	double getLength()const;

	virtual double perimeter() const;
	virtual double area() const;
	virtual void draw()const;

private:
	double SquareSide;

};
#endif
