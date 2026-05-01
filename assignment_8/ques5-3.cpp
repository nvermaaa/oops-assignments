#include <iostream>
using namespace std;

template <typename T>
int linearSearch(T arr[], int size, T target)
{
  int ans = -1;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
    {
      return i + 1;
    }
  }
  return ans;
}

int main()
{
  char arr[] = {'a', 'y', 't', 'o', 'u'};
  int n1 = 5;
  int ans = linearSearch(arr, n1, 'b');
  cout << ans;
}