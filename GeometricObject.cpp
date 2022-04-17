// base class

// header file
#include "GeometricObject.h"

// standard std
using namespace std;

// default constructor which sets color and filled values
GeometricObject :: GeometricObject() {
    color = "Black";
    filled = false;
}

// constructor which accepts color and filled which will be implemented by every shape
GeometricObject :: GeometricObject(string color, bool filled) {
    this -> color = color;
    this -> filled = filled;
}

// get color method
string GeometricObject :: getColor() const {
    return color;
}

// set color method
void GeometricObject :: setColor(string a) {
    color = a;
}

// is filled method
bool GeometricObject :: isFilled() const {
    return filled;
}

// set filled method
void GeometricObject :: setFilled(bool f) {
    filled = f;
}

// to string method that will return geometric object
string GeometricObject :: toString() const {
    return "Geometric Object";
}
