#include <iostream>
using namespace std;

class Polygon
{
protected:
  int width, height;

public:
  void set_value(int w, int h)
  {
    width = w;
    height = h;
  }

  virtual int calculate_area() = 0;
};

class Rectangle : public Polygon
{
public:
  int calculate_area()
  {
    return width * height;
  }
};

class Triangle : public Polygon
{
public:
  int calculate_area()
  {
    return (width * height) / 2;
  }
};

int main()
{
  Polygon *p;
  Rectangle rect;
  Triangle tri;
  rect.set_value(10, 5);
  tri.set_value(10, 5);
  p = &rect;
  cout << "Area of Rectangle: " << p->calculate_area() << endl;
  p = &tri;
  cout << "Area of Triangle: " << p->calculate_area() << endl;
  return 0;
}