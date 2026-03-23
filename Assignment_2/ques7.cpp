#include <iostream>
using namespace std;

namespace First
{
  int x = 10;

  void display()
  {
    cout << "Namespace First x = " << x << endl;
  }
}

namespace Second
{
  int x = 20;

  void display()
  {
    cout << "Namespace Second x = " << x << endl;
  }
}

int main()
{
  cout << "Accessing First Namespace:" << endl;
  cout << First::x << endl;

  cout << "\nAccessing Second Namespace:" << endl;
  cout << Second::x << endl;

  return 0;
}
