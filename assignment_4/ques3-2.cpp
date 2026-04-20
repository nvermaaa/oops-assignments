#include <iostream>
using namespace std;

int main()
{
  int *p = new int;
  *p = 10;
  cout << "Integer value: " << *p << endl;
  delete p;

  float *f = new float;
  *f = 5.5;
  cout << "Float value: " << *f << endl;
  delete f;

  int *arrInt = new int[3];
  for (int i = 0; i < 3; i++)
    arrInt[i] = i + 1;

  cout << "Integer Array: ";
  for (int i = 0; i < 3; i++)
    cout << arrInt[i] << " ";
  cout << endl;

  delete[] arrInt;

  float *arrFloat = new float[3];
  for (int i = 0; i < 3; i++)
    arrFloat[i] = (i + 1) * 2.5;

  cout << "Float Array: ";
  for (int i = 0; i < 3; i++)
    cout << arrFloat[i] << " ";
  cout << endl;

  delete[] arrFloat;

  return 0;
}
