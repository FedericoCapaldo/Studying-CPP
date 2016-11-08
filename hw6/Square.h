class Square : public Shape {
  protected:
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
      for(int i=0; i < side ; i++) {
        for (int j=0; j < side ; j++) {
          cout << " *  ";
        }
          cout << endl;
        cout << endl;
      }
    }
};
