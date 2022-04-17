// prototypes needed for circle cpp

#ifndef VPFINAL_CIRCLE_H
#define VPFINAL_CIRCLE_H

// including geometric object
#include "GeometricObject.h"
#include <string>
using namespace std;

// the class which extends geometric object
class Circle : public GeometricObject{

// one private variable
private:
    double radius;

// public methods
public:

    // all constructors needed for the class
    Circle();
    Circle(double);
    Circle(double radius, string color, bool filled);

    // get and set methods for the variable
    double getRadius() const;
    void setRadius(double);
    double getDiameter() const;

    // 2 methods needed for area and perimeter
    double getArea() const;
    double getPerimeter() const;

    class negativeSize{};
};
#endif //VPFINAL_CIRCLE_H
