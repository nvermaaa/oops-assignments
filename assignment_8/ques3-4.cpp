#include <iostream>
using namespace std;

template <typename T>
T maxElement(T arr[], int size)
{
  T max = arr[0];
  for (int i = 1; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}

int main()
{
  int arr1[] = {1, 2, 3, 4, 5, 6};
  int n1 = 6;
  cout << "Minimum (int): " << maxElement(arr1, n1) << endl;

  char arr2[] = {'a', 'z', 'f', 'k', 'r'};
  int n2 = 5;
  cout << "Minimum (char): " << maxElement(arr2, n2) << endl;
}