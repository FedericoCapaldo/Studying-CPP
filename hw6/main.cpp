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

  Rectangle firstRectangle(5, 10, "firstRectangle");
  cout << firstRectangle.area() << endl;
  firstRectangle.draw();

  Triangle firstTriangle(10, 20, "firstTriangle");
  cout << firstTriangle.area() << endl;
  firstTriangle.draw();


}
