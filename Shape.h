#ifndef SHAPE_H
#define SHAPE_H
#include <string>

using namespace std;

class Shape
{
public:
	Shape(const string &);

	void setName(const string &);
	string getName() const;
    virtual double perimeter() const = 0;
	virtual double area() const = 0;

	virtual void draw() const;

private:
	string name;
};
#endif
