#include <string>
using namespace std;

class Shape {
  int centerX;
  int centerY;
  string name;
  public:
    Shape(int centerX, int centerY, string name)
      : centerX(centerX), centerY (centerY), name(name)
    {

    }
    virtual double area();
    virtual void draw();
};
