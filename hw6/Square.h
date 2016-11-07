#include "Shape.h"

class Square : public Shape {
  double side;

  public:
    Square(int side, string name, int centerX = 0, int centerY = 0)
      : Shape(centerX, centerY, name), side(side)
    {
    }

    double area() {
      return side * side;
    }

    void draw() {

    }
};
