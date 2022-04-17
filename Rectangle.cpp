#include "Rectangle.h"
using namespace std;

// default constructor which sets 2 variables to 0 and also extends geometric object
Rectangle :: Rectangle() : GeometricObject() {
    width = 0;
    height = 0;
};

// constructor which accepts 2 values and creates a rectangle and extends geometric object
// negative exception handling
Rectangle :: Rectangle(double width , double height) : GeometricObject(){
    if(width <= 0 || height <= 0)
        throw negativeSize();
    this -> width = width;
    this -> height = height;
}

// negative number exception handling
// constructor which accepts 2 variables plus color and filled which also extends geometric object
Rectangle :: Rectangle(double width, double height, string color, bool filled) : GeometricObject(color, filled){
    if(width <= 0 || height <= 0)
        throw negativeSize();
    this -> width = width;
    this -> height = height;
}

// get width method
double Rectangle :: getWidth() const {
    return width;
}

// set width method
// exception handling
void Rectangle :: setWidth(double w) {
    if(width <= 0)
        throw negativeSize();
    width = w;
}

// get height method
double Rectangle :: getHeight() const {
    return height;
}

// set height method
// exception handling
void Rectangle ::setHeight(double h) {
    if(height <= 0)
        throw negativeSize();
    height = h;
}

// get area method
double Rectangle :: getArea() const{
    return width * height;
}

// get perimeter method
double Rectangle :: getPerimeter() const {
    return 2*(width + height);
}

