#include <iostream>
using namespace std;

template <class T>
class Array
{
private:
  T arr[100];
  int size;

public:
  Array(int s)
  {
    size = s;
  }

  void input()
  {
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }
  }

  void display()
  {
    cout << "Array elements are:\n";
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main()
{
  Array<int> a1(5);
  a1.input();
  a1.display();
  cout << endl;
  Array<float> a2(3);
  a2.input();
  a2.display();
  return 0;
}