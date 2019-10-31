//shape.h
#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using std::cout;
class Shape
{
public:
	virtual void draw() = 0; // pure virtual function, makes shape an abstract class
};




#endif // !SHAPE_H