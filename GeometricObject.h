// prototypes needed for geometric object

#ifndef VPFINAL_GEOMETRICOBJECT_H
#define VPFINAL_GEOMETRICOBJECT_H

// need to include this so a string can be accepted as argument
#include <string>
using namespace std;


class GeometricObject{

// 2 private variables
private:
    string color;
    bool filled;

// 2 protected constructors
protected:
    GeometricObject();
    GeometricObject(string, bool);

// public methods
public:
    string getColor() const;
    void setColor(string);
    bool isFilled() const;
    void setFilled(bool);
    string toString() const;

    // these 2 methods are abstract which means they are going to be implemented by other classes
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
};
#endif //VPFINAL_GEOMETRICOBJECT_H
