// rectangle class prototypes
#ifndef VPFINAL_RECTANGLE_H
#define VPFINAL_RECTANGLE_H

// including geometric h file
#include "GeometricObject.h"

// include string so string arguments can be passed
#include <string>
using namespace std;

class Rectangle : public GeometricObject{

// 2 private variables
private:
    double width;
    double height;

// public methods
public:
    // 3 constructors
    Rectangle();
    Rectangle(double, double);
    Rectangle(double height, double width, string color, bool filled);

    // get and set methods for the 2 variables
    double getWidth() const;
    void setWidth(double);
    double getHeight() const;
    void setHeight(double);

    // get area and perimeter methods
    double getArea() const;
    double getPerimeter() const;

    class negativeSize{};
};

#endif //VPFINAL_RECTANGLE_H
