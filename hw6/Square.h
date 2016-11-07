#include "Shape.h"

class Square : public Shape {
  double length;

  public:
    Square(int centerX, int centerY, string name, int length)
      : Shape(centerX, centerY, name), length(length)
    {
    }

    double area() {
      return length * length;
    }

    void draw() {

    }
};
