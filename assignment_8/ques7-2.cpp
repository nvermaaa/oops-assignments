#include <iostream>
using namespace std;

template <class T>
class Queue
{
private:
  T arr[100];
  int front, rear;

public:
  Queue()
  {
    front = -1;
    rear = -1;
  }

  void enqueue(T value)
  {
    if (rear == 99)
    {
      cout << "Queue Overflow\n";
      return;
    }

    if (front == -1)
      front = 0;

    arr[++rear] = value;
    cout << value << " inserted\n";
  }

  void dequeue()
  {
    if (front == -1 || front > rear)
    {
      cout << "Queue Underflow\n";
      return;
    }

    cout << arr[front] << " removed\n";
    front++;
  }

  void display()
  {
    if (front == -1 || front > rear)
    {
      cout << "Queue is empty\n";
      return;
    }

    for (int i = front; i <= rear; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main()
{
  Queue<int> q1;

  q1.enqueue(10);
  q1.enqueue(20);
  q1.enqueue(30);

  q1.display();

  q1.dequeue();
  q1.display();

  return 0;
}