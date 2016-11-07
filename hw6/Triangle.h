#include "Shape.h"

class Triangle : public Shape {
  double base;
  double height;

  public:
    Triangle(int centerX, int centerY, string name, int base, int height)
      : Shape(centerX, centerY, name), base(base), height(height)
    {
    }

    double area() {
      return (base * height) / 2;
    }

    void draw() {

    }
};
