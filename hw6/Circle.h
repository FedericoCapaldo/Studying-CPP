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
        int radiusDraw = radius;
        // minimal size for a decent drawing
        if (radius < 7) {
            radiusDraw = 7;
        }
        
        int blanks = radiusDraw / 2;
        int stars = (radiusDraw / 2) + 1;
        while(stars < radiusDraw) {
            for(int i=0; i<blanks; ++i) {
                cout << "  ";
            }
            for(int i=0; i<stars; ++i) {
                cout << " *  ";
            }
            cout << endl;
            cout << endl;
            --blanks;
            ++stars;
        }
        
        int initialStars = (radiusDraw / 2) + 1;
        while(stars > initialStars) {
            ++blanks;
            --stars;
            for(int i=blanks; i>0; --i) {
                cout << "  ";
            }
            for(int i=stars; i>0; --i) {
                cout << " *  ";
            }
            cout << endl;
            cout << endl;
        }
        
        
    }
};
