#include <iostream>
using namespace std;

template <typename T>
class Stack
{
  T arr[100];
  int top;

public:
  Stack()
  {
    top = -1;
  }

  void push(T value)
  {
    if (top == 99)
    {
      cout << "Stack Overflow" << endl;
      return;
    }
    arr[++top] = value;
  }

  void pop()
  {
    if (top == -1)
    {
      cout << "Stack Underflow" << endl;
      return;
    }
    top--;
  }

  void display()
  {
    if (top == -1)
    {
      cout << "Stack is empty" << endl;
      return;
    }

    for (int i = top; i >= 0; i--)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main()
{
  Stack<int> s1;

  s1.push(10);
  s1.push(20);
  s1.push(30);

  cout << "Stack elements: ";
  s1.display();

  s1.pop();

  cout << "After pop: ";
  s1.display();

  return 0;
}