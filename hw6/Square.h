#include "Shape.h"

class Square : public Shape {
  double side;

  public:
    Square(int centerX, int centerY, string name, int side)
      : Shape(centerX, centerY, name), side(side)
    {
    }

    double area() {
      return side * side;
    }

    void draw() {

    }
};
