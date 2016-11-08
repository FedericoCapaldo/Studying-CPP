class Rectangle : public Square {
  int width;

  public:
    Rectangle(int height, int width, string name, int centerX = 0, int centerY = 0)
      : Square(height, name, centerX, centerY), width(width)
    {
    }

    double area() {
      return side * width;
    }

    void draw() {
      for(int i=0; i<side; i++) {
        for(int j=0; j<width; j++) {
          cout << " *  " ;
        }
        cout << endl;
          cout << endl;
      }
    }

};
