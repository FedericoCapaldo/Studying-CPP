#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"
using namespace std;

int main() {
  Square firstSquare(5, "firstSquare");
  cout << firstSquare.area() << endl;
  firstSquare.draw();

  Rectangle firstRectangle(20, 10, "firstRectangle");
  cout << firstRectangle.area() << endl;
  firstRectangle.draw();

  Triangle firstTriangle(20, 20, "firstTriangle");
  cout << firstTriangle.area() << endl;
  firstTriangle.draw();

    Circle firstCircle(9, "firstCircle");
    cout << firstCircle.area() << endl;
    firstCircle.draw();
    
    Circle secondCircle(10, "secondCircle");
    cout << secondCircle.area() << endl;
    secondCircle.draw();
}
