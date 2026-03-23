#include <iostream>
using namespace std;

class Rectangle
{
  int length;
  int breadth;

public:
  void setData(int l, int b)
  {
    length = l;
    breadth = b;
  }

  void display()
  {
    cout << "Length = " << length
         << ", Breadth = " << breadth << endl;
  }

  friend void swapData(Rectangle &r1, Rectangle &r2);
};

void swapData(Rectangle &r1, Rectangle &r2)
{
  int temp;

  temp = r1.length;
  r1.length = r2.length;
  r2.length = temp;

  temp = r1.breadth;
  r1.breadth = r2.breadth;
  r2.breadth = temp;
}

int main()
{
  Rectangle r1, r2;

  r1.setData(10, 20);
  r2.setData(5, 8);

  cout << "Before Swapping:\n";
  r1.display();
  r2.display();

  swapData(r1, r2);

  cout << "\nAfter Swapping:\n";
  r1.display();
  r2.display();

  return 0;
}