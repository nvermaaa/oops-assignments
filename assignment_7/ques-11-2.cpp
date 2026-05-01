#include <iostream>
using namespace std;

class Test
{
private:
  float value;

public:
  Test(float x)
  {
    value = x;
  }

  void display()
  {
    cout << "Value = " << value << endl;
  }
};

int main()
{
  float f = 5.75;
  Test t = f;
  t.display();
  return 0;
}