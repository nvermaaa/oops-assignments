#include <iostream>
using namespace std;

class ClassB;
class ClassA
{
private:
  int a;

public:
  ClassA(int x)
  {
    a = x;
  }
  friend int add(ClassA, ClassB);
};

class ClassB
{
private:
  int b;

public:
  ClassB(int y)
  {
    b = y;
  }
  friend int add(ClassA, ClassB);
};

int add(ClassA objA, ClassB objB)
{
  return objA.a + objB.b;
}

int main()
{
  ClassA obj1(10);
  ClassB obj2(20);

  int result = add(obj1, obj2);

  cout << "Sum = " << result << endl;

  return 0;
}