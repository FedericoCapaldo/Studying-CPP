#include "Square.h"

class Rectangle : public Square {
  int length;
  int width;

  public:
    Rectangle(int centerX, int centerY, string name, int length, int width)
      : Square(centerX, centerY, name, length), width(width)
    {
    }

    double area() {
      return length * width;
    }

    void draw() {

    }
};
