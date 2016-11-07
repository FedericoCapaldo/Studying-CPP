#include "Square.h"

class Rectangle : public Square {
  int height;
  int width;

  public:
    Rectangle(int height, int width, string name, int centerX = 0, int centerY = 0)
      : Square(height, name, centerX, centerY), width(width)
    {
    }

    double area() {
      return height * width;
    }

    void draw() {
      
    }
};
