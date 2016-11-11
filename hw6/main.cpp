#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"
using namespace std;
#include "Picture.h"

int main() {
    Triangle * firstTriangle = new Triangle(5, 5, "firstTriangle");
    Triangle * secondTriangle = new Triangle(4,3, "secondTriangle");

    Circle * firstCircle = new Circle(5, "firstCircle");
    Circle * secondCircle = new Circle(10, "secondCircle");

    Square * firstSquare = new Square(5, "firstSquare");
    Square * secondSquare = new Square(10, "SecondSquare");

    Rectangle * firstRectangle = new Rectangle(4,8, "firstRectangle");
    Rectangle * secondRectangle = new Rectangle(8,4, "secondRectangle");


    Picture * p = new Picture();
    p->add(firstTriangle);
    p->add(secondTriangle);
    p->add(firstCircle);
    p->add(secondCircle);
    p->add(firstSquare);
    p->add(secondSquare);
    p->add(firstRectangle);
    p->add(secondRectangle);
    p->drawAll();
    cout << "The total area of the shapes on this picture is " << (p->totalArea()) << " square units." << endl;
    delete p;
    return 0;
}
