// this file will reference everything needed for the circle class

// header file
#include "Circle.h"
#include <math.h>
using namespace std;

// default constructor
Circle :: Circle() : GeometricObject() {
    double radius = 1.0;
}

// constructor with 2 values passed in
// negative exception handling
Circle :: Circle(double radius) : GeometricObject() {
    if(radius <= 0)
        throw negativeSize();
    this -> radius = radius;
}

// negative exception handling
// constructor with 2 values and color/filled that also implements geometric object
Circle :: Circle(double radius, string color, bool filled) : GeometricObject(color, filled) {
    if(radius <= 0)
        throw negativeSize();
    this -> radius = radius;
}

// get method
double Circle :: getRadius() const {
    return radius;
}

// set method
// negative exception handling
void Circle ::setRadius(double r) {
    if(r <= 0)
        throw negativeSize();
    radius = r;
}

// get diameter method
double Circle :: getDiameter() const {
    return 2 * radius;
}

// get area for circle
double Circle ::getArea() const {
    return M_PI * radius * radius;
}

// get perimeter method
double Circle :: getPerimeter() const {
    return 2 * M_PI * radius;
}

