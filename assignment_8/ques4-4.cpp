#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        T temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

template <typename T>
void printArray(T arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int arr[] = {5, 4, 85, 4, 6, 25};
  int n1 = 6;

  cout << "Before sorting: ";
  printArray(arr, n1);
  cout << endl;

  bubbleSort(arr, n1);

  cout << "After sorting: ";
  printArray(arr, n1);
  cout << endl;
  return 0;
}
