// header which  included string so string arguments can be accepted
#include <string>
#include "Triangle.h"
#include <math.h>
using namespace std;

// default constructor which sets all sides to 1.0
Triangle :: Triangle() : GeometricObject(){
    side1 = 1.0;
    side2 = 1.0;
    side3 = 1.0;
}

// exception handling
// constructor which accepts all sides and creates a default triangle and also extends geometric object
Triangle :: Triangle(double side1, double side2, double side3) : GeometricObject(){
    if(side1 <= 0 || side2 <= 0 || side3 <= 0)
        throw negativeSize();
    this -> side1 = side1;
    this -> side2 = side2;
    this -> side3 = side3;
}

// exception handling
// constructor which accepts all sides and color + filled which also extends geometric object
Triangle :: Triangle(double side1, double side2, double side3, string color, bool filled) : GeometricObject(color, filled) {
    if(side1 <= 0 || side2 <= 0 || side3 <= 0)
        throw negativeSize();
    this -> side1 = side1;
    this -> side2 = side2;
    this -> side3 = side3;
}

// get side1 method
double Triangle :: getSide1() const {
    return side1;
}

// exception handling
// set side1 method
void Triangle :: setSide1(double a) {
    if(side1 <= 0)
        throw negativeSize();
    side1 = a;
}

// get side2 method
double Triangle :: getSide2() const {
    return side2;
}

// exception handling
// set side2 method
void Triangle :: setSide2(double b) {
    if(side2 <= 0)
        throw negativeSize();
    side2 = b;
}

// get side3 method
double Triangle :: getSide3() const {
    return side3;
}

// exception handling
// set side3 method
void Triangle :: setSide3(double c) {
    if(side3 <= 0)
        throw negativeSize();
    side3 = c;
}

// get area method
double Triangle :: getArea() const {
    int s = (side1 + side2 + side3) / 2;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

// get perimeter method
double Triangle :: getPerimeter() const {
    return side1 + side2 + side3;
}











