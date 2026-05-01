#include <iostream>
using namespace std;

class Shape
{
public:
  virtual void area() = 0;
  virtual void display() = 0;
};

class Circle : public Shape
{
private:
  float radius;

public:
  Circle(float r)
  {
    radius = r;
  }

  void area()
  {
    cout << "Area of Circle: " << 3.14 * radius * radius << endl;
  }

  void display()
  {
    cout << "Shape: Circle" << endl
         << "Radius: " << radius << endl;
  }
};

class Rectangle : public Shape
{
private:
  float length, breadth;

public:
  Rectangle(float l, float b)
  {
    length = l;
    breadth = b;
  }

  void area()
  {
    cout << "Area of Rectangle: " << length * breadth << endl;
  }

  void display()
  {
    cout << "Shape: Rectangle" << endl
         << "Length: " << length << ", Breadth: " << breadth << endl;
  }
};

class Triangle : public Shape
{
private:
  float base, height;

public:
  Triangle(float b, float h)
  {
    base = b;
    height = h;
  }

  void area()
  {
    cout << "Area of Triangle: " << 0.5 * base * height << endl;
  }

  void display()
  {
    cout << "Shape: Triangle" << endl
         << "Base: " << base << ", Height: " << height << endl;
  }
};

int main()
{
  Shape *s;
  Circle c(5);
  Rectangle r(10, 4);
  Triangle t(6, 3);
  s = &c;
  s->display();
  s->area();
  cout << endl;
  s = &r;
  s->display();
  s->area();
  cout << endl;
  s = &t;
  s->display();
  s->area();
  return 0;
}