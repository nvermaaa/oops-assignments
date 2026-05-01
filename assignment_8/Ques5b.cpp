#include <iostream>
#include <string>
using namespace std;

template <typename T>
void process(T a)
{
  cout << "Single parameter: " << a << endl;
}
template <typename T>
void process(T a, T b)
{
  cout << "Two parameters of same type: " << a << ", " << b << endl;
}
template <typename T1, typename T2>
void process(T1 a, T2 b)
{
  cout << "Two parameters of different types: " << a << ", " << b << endl;
}
int main()
{
  process(10);
  process(20, 30);
  process(42, string("Hello"));
  return 0;
}
