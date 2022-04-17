// triangle shape prototypes

#ifndef VPFINAL_TRIANGLE_H
#define VPFINAL_TRIANGLE_H

// need to include this header
#include "GeometricObject.h"
#include <string>

// standard std
using namespace std;

// class start which extends geometric object
class Triangle : public GeometricObject{

// 3 private variables
private:
    double side1;
    double side2;
    double side3;

// public methods
public:
    // constructors
    Triangle();
    Triangle(double, double, double);
    Triangle(double side1, double side2, double side3, string color, bool filled);

    // get and set for side 1
    double getSide1() const;
    void setSide1(double);

    // get and set for side 2
    double getSide2() const;
    void setSide2(double);

    // get and set for side 3
    double getSide3() const;
    void setSide3(double);

    // get area and perimeter method
    double getArea() const;
    double getPerimeter() const;

    class negativeSize{};
};
#endif //VPFINAL_TRIANGLE_H
