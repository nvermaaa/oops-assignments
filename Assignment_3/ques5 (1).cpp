#include <iostream>
using namespace std;

class Rectangle
{
private:
  int length;
  int breadth;

public:
  Rectangle(int l, int b)
  {
    length = l;
    breadth = b;
  }
  int area()
  {
    return length * breadth;
  }
  void display()
  {
    cout << "Length = " << length
         << ", Breadth = " << breadth
         << ", Area = " << area() << endl;
  }
};

int main()
{
  Rectangle rect[3] = {Rectangle(10, 5), Rectangle(4, 6), Rectangle(7, 3)};
  cout << "Details of Rectangles: " << endl;
  for (int i = 0; i < 3; i++)
  {
    rect[i].display();
  }

  return 0;
}
