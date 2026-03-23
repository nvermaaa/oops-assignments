#include <iostream>
using namespace std;

class Number
{
private:
  int value;

public:
  Number(int v)
  {
    value = v;
  }

  void increment(int x)
  {
    value += x;
  }

  void display()
  {
    cout << "Value = " << value << endl;
  }
};

Number incrementByValue(Number obj)
{
  obj.increment(10);
  return obj;
}

Number incrementByReference(Number &obj)
{
  obj.increment(20);
  return obj;
}

int main()
{
  Number n1(50);

  cout << "Original Object: " << endl;
  n1.display();
  Number n2 = incrementByValue(n1);

  cout << endl
       << "After Pass-by-Value Function: ";
  cout << endl
       << "Original Object: ";
  n1.display();

  cout << "Returned Object: ";
  n2.display();
  Number n3 = incrementByReference(n1);

  cout << endl
       << "After Pass-by-Reference Function: " << endl;
  cout << "Original Object: ";
  n1.display();
  cout << "Returned Object: ";
  n3.display();
  return 0;
}
