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

    // proportional only to the height of the triangle
    void draw() {
        // i = number of * to be drawn
        // stars++; for each start drawn; break for star >= i);
        // blanks are revers = n /2; blanks--;
        
        for(int i= height - 1; i > 0; i--) {
            for(int j = i-1; j > 0; j--) {
                cout << "  ";
            }
            cout << " ";
            for(int j = (height-i)*2-1; j > 0 ; j--) {
                cout << "* ";
            }
            for(int j = i-1; j > 0; j--) {
                cout << "  ";
            }
            cout << endl;

            for(int j = i-1; j > 0; j--) {
                cout << "  ";
            }
            for(int j = (height-i)*2; j > 0 ; j--) {
                cout << "* ";
            }
            for(int j = i-1; j > 0; j--) {
                cout << "  ";
            }
            cout << endl;
        }
    }
};
