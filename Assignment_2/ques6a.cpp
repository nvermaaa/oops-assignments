#include <iostream>
using namespace std;

class Test
{
public:
  void show();
};
void Test::show()
{
  cout << "Function defined outside class";
}

int main()
{
  Test t;
  t.show();
}
