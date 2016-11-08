class Circle : public Shape {
  double PI;
  double radius;

  public:
    Circle(double radius, string name, int centerX = 0, int centerY = 0)
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
