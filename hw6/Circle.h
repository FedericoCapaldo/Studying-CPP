#include "Shape.h"

class Circle : public Shape {
  double PI;
  double radius;

  public:
    Circle(int centerX, int centerY, string name, double radius)
      : Shape(centerX, centerY, name), radius(radius)
    {
       PI = 3.14159; // to avoid compiler warning
    }

    double area() {
      return PI * (radius * radius);
    }

    void draw() {

    }
};
