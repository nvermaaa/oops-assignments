#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
private:
  T a, b;

public:
  Arithmetic(T x, T y)
  {
    a = x;
    b = y;
  }

  T add()
  {
    return a + b;
  }

  T subtract()
  {
    return a - b;
  }

  T multiply()
  {
    return a * b;
  }

  T divide()
  {
    if (b == 0)
    {
      cout << "Division by zero not allowed\n";
      return 0;
    }
    return a / b;
  }

  void display()
  {
    cout << "Addition: " << add() << endl;
    cout << "Subtraction: " << subtract() << endl;
    cout << "Multiplication: " << multiply() << endl;
    cout << "Division: " << divide() << endl;
  }
};

int main()
{
  Arithmetic<int> obj1(10, 5);
  obj1.display();
  cout << endl;
  Arithmetic<float> obj2(10.5, 2.5);
  obj2.display();
  return 0;
}