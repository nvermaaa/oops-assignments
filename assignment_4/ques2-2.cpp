#include <iostream>
using namespace std;

class Rectangle
{
private:
  int length;
  int breadth;

public:
  Rectangle(int l = 0, int b = 0)
  {
    length = l;
    breadth = b;
  }

  void calculateArea()
  {
    cout << "Length: " << length;
    cout << " Breadth: " << breadth;
    cout << " Area is: " << length * breadth << endl;
    return;
  }
  ~Rectangle()
  {
    cout << "Destructor called for Rectangle ("
         << length << ", " << breadth << ")" << endl;
  }
};

int main()
{
  Rectangle rect[3] = {Rectangle(), Rectangle(5), Rectangle(5, 10)};
  for (int i = 0; i < 3; i++)
  {
    rect[i].calculateArea();
  }

  return 0;
}
