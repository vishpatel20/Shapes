// prototypes for squares class

#ifndef VPFINAL_SQUARE_H
#define VPFINAL_SQUARE_H

// need to include this because square is derived from rectangle
#include "Rectangle.h"
#include <string>

// standard output
using namespace std;

// class start
class Square : public Rectangle{

// 1 private variable
private:
    double length;

// public methods
public:
    // constructors
    Square();
    Square(double);
    Square(double length, string color, bool filled);

    // get and set methods
    double getLength() const;
    void setLength(double);

    // get area and perimeter methods
    double getArea() const;
    double getPerimeter() const;

    class negativeSize{};
};
#endif //VPFINAL_SQUARE_H
