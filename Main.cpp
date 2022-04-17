/*
Description: This is  C++ program which is going to allow the user to choose
an option from the menu I have provided and then it is going to display the area, perimeter
and color and also if it is filled or not
*/

// headers
#include <stream>
#include "string"
#include <ionic>
#include "GeometricObject.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

// global variable
int input;

// this method is going to display all the results for each option that is there in the main method
void displayGeometricObject(GeometricObject& g) {
    // creating a new reference object
    GeometricObject *p = &g;

    // switch case for each option and displaying results
    switch (input) {
        // display result using set precision and getting all necessary answers needed by calling methods
        case 1: {
            Circle *p1 = dynamic_cast<Circle *>(p);
            cout << "\nThe area of the Circle is: " << fixed << setprecision(2) << p1->getArea() << endl;
            cout << "\nThe perimeter is: " << fixed << setprecision(2) << p1->getPerimeter() << endl;
            cout << "\nThe color is: " << p1->getColor() << endl;

            // if statement to print out to see if shape if filled or not
            if (p1->isFilled() == false) {
                cout << "\nShape is not filled" << endl;
            } else
                cout << "\nShape is filled" << endl;
            break;
        }
        case 2: {
            Rectangle *p1 = dynamic_cast<Rectangle *>(p);
            cout << "\nThe area of the Rectangle is: " << fixed << setprecision(2) << p1->getArea() << endl;\
            cout << "\nThe perimeter is: " << fixed << setprecision(2) << p1->getPerimeter() << endl;
            cout << "\nThe color is: " << p1->getColor() << endl;

            // if statement for boolean
            if (p1->isFilled()) {
                cout << "\nShape is not filled" << endl;
            } else
                cout << "\nShape is filled" << endl;
        }
            break;
        case 3: {
            Triangle *p1 = dynamic_cast<Triangle *>(p);
            cout << "\nThe area of the Triangle is: " << fixed << setprecision(2) << p1->getArea() << endl;
            cout << "\nThe perimeter is: " << fixed << setprecision(2) << p1->getPerimeter() << endl;
            cout << "\nThe color is: " << p1->getColor() << endl;

            // if statement to print out to see if shape if filled or not
            if (p1->isFilled() == false) {
                cout << "\nShape is not filled" << endl;
            } else
                cout << "\nShape is filled" << endl;
        }
        case 4:{
            Square *p1 = dynamic_cast<Square *>(p);
            cout << "\nThe area of the Square is: " << fixed << setprecision(2) << p1->getArea() << endl;
            cout << "\nThe perimeter is: " << fixed << setprecision(2) << p1->getPerimeter() << endl;
            cout << "\nThe color is: " << p1->getColor() << endl;

            // if statement to print out to see if shape if filled or not
            if (p1->isFilled() == false) {
                cout << "\nShape is not filled" << endl;
            } else
                cout << "\nShape is filled" << endl;
        }
    }
}


// main method
int main(){
    // 2 local variables
    string color;
    bool filled;

    // geometric object
    GeometricObject* g = new Circle();

    // this do while loop is going to continue till the user enters 5 to exit program
    do {
        // menu items that user will see
        cout << "1. Circle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Square" << endl;
        cout << "5. Exit program" << endl;
        cout << "Enter your choice: ";
        cin >> input;

        // input validation
        while (input > 6 || input < 0) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter a number listed on the menu" << endl;
            cout << "1. Circle" << endl;
            cout << "2. Rectangle" << endl;
            cout << "3. Triangle" << endl;
            cout << "4. Square" << endl;
            cout << "5. Exit program" << endl;
            cout << "Enter your choice: ";
            cin >> input;
        }

        // I used a switch case to see what option the user selects
        switch (input) {
            case 1:
                // try catch block for negative numbers
                try {
                    int radius;
                    int input2;
                    cout << "What color do you want the shape?";
                    cin >> color;
                    cout << "Do you want it filled or not(1 for yes or 0 for no)?";
                    cin >> input2;
                    if (input2 == 0) {
                        filled = false;
                    } else
                        filled = true;
                    cout << "Enter radius: ";
                    cin >> radius;
                    g = new Circle(radius, color, filled);
                    displayGeometricObject(*g);
                } catch (Circle::negativeSize) {
                    cout << "\nPlease enter only positive numbers" << endl;
                }
                break;
            case 2:
                // try catch block for negative numbers
                try {
                    int width;
                    int height;
                    int input3;
                    cout << "What color do you want the rectangle to be?" << endl;
                    cin >> color;
                    cout << "Do you want the shape filled(1 for yes or 0 for no)?" << endl;
                    cin >> input3;
                    if (input3 == 0) {
                        filled = false;
                    } else
                        filled = true;
                    cout << "Enter the width: " << endl;
                    cin >> width;
                    cout << "Enter the height: " << endl;
                    cin >> height;
                    g = new Rectangle(height, width, color, filled);
                    displayGeometricObject(*g);
                } catch (Rectangle::negativeSize) {
                    cout << "\nPlease enter a positive number only" << endl;
                }
                break;
            case 3:
                // try catch
                try {
                    int side1;
                    int side2;
                    int side3;
                    int input4;
                    cout << "Enter side 1: " << endl;
                    cin >> side1;
                    cout << "Enter side 2: " << endl;
                    cin >> side2;
                    cout << "Enter side 3: " << endl;
                    cin >> side3;
                    cout << "What color do you want the triangle to be?" << endl;
                    cin >> color;
                    cout << "Do you want the shape filled(1 for yes or 0 for no)" << endl;
                    cin >> input4;
                    if (input4 == 0) {
                        filled = false;
                    } else
                        filled = true;
                    g = new Triangle(side1, side2, side3, color, filled);
                    displayGeometricObject(*g);
                } catch (Triangle::negativeSize) {
                    cout << "\nPlease enter a positive number only" << endl;
                }
                break;
            case 4:
                // try catch
                try {
                    int length;
                    int input5;
                    cout << "Enter the length: " << endl;
                    cin >> length;
                    cout << "Do you want the square filled(1 for yes or 0 for no)" << endl;
                    cin >> input5;

                    if (input5 == 0) {
                        filled = false;
                    } else
                        filled = true;
                    cout << "What color do you want the shape to be? " << endl;
                    cin >> color;
                    g = new Square(length, color, filled);
                    displayGeometricObject(*g);
                } catch (Square::negativeSize) {
                    cout << "\nPlease enter a positive number only" << endl;
                }
                break;
            case 5:
                // exit program
                exit(0);
        }
    } while (input = 5);
}

