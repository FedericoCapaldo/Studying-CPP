#include "Shape.h"

class Triangle : public Shape {
  double height;
  double base;

  public:
    Triangle(int height, int base, string name, int centerX = 0, int centerY = 0)
      : Shape(centerX, centerY, name), height(height), base(base)
    {
    }

    double area() {
      return (height * base) / 2;
    }

    void draw() {

    }
};
