#include "Square.h"
#include <string>

// standard output
using namespace std;

// default constructor that set length to 1.o
Square :: Square() : Rectangle(){
    length = 1.0;
}

// exception handling
// constructor which makes a default square but is derived from rectangle
Square :: Square(double length) : Rectangle(){
    if(length <= 0)
        throw negativeSize();
    this -> length = length;
}

// exception handling
// constructor which accepts length, color and filled but is also derived from rectangle class
Square :: Square(double length, string color, bool filled) : Rectangle(length, length, color, filled){
    if(length <= 0)
        throw negativeSize();
    this -> length = length;
}

// get length method
double Square :: getLength() const {
    return length;
}

// set length method
// exception handling
void Square :: setLength(double l) {
    if(length <= 0)
        throw negativeSize();
    length = l;
}

// get area method
double Square :: getArea() const {
    return length * length;
}

// get perimeter method
double Square :: getPerimeter() const {
    return 4 * length;
}
