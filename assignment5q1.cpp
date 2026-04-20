/*Name: Norzom Verma
 Roll number : 1024150374*/

#include <iostream>
using namespace std;

void constantTime(int n)
{
  cout << endl
       << "Constant Time";
  int x = n * 10;
  cout << x << " ";
  cout << endl;
}

void logarithmicTime(int n)
{
  cout << endl
       << "Log Time";
  while (n > 1)
  {
    n = n / 2;
    cout << n << " ";
  }
  cout << endl;
}

void squareRootTime(int n)
{
  cout << endl
       << "Square Root Time";
  for (int i = 1; i * i <= n; i++)
  {
    int x = i;
    cout << x << " ";
  }
  cout << endl;
}

void linearTime(int n)
{
  cout << endl
       << "Linear Time";
  for (int i = 0; i < n; i++)
  {
    int x = i;
    cout << x << " ";
  }
  cout << endl;
}

void linearithmicTime(int n)
{
  cout << endl
       << " nlogn Time";
  for (int i = 0; i < n; i++)
  {
    int temp = n;
    while (temp > 1)
    {
      temp = temp / 2;
      cout << temp << " ";
    }
    cout << endl;
  }
}

void quadraticTime(int n)
{
  cout << endl
       << "n^2 Time";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int x = i + j;
      cout << x << " ";
    }
    cout << endl;
  }
}

void cubicTime(int n)
{
  cout << endl
       << "Cubic Time";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      for (int k = 0; k < n; k++)
      {
        int x = i + j + k;
        cout << x << " ";
      }
    }
  }
  cout << endl;
}

int exponentialTime(int n)
{
  cout << endl
       << "Expo Time";
  if (n <= 1)
    return 1;
  return exponentialTime(n - 1) + exponentialTime(n - 1);
}

void factorialTime(int n, int depth = 0)
{
  if (depth == n)
    return;

  for (int i = 0; i < n; i++)
  {
    factorialTime(n, depth + 1);
  }
}

int main()
{
  int n;
  cout << "Enter a number: " << endl;
  cin >> n;
  constantTime(n);
  logarithmicTime(n);
  squareRootTime(n);
  linearTime(n);
  linearithmicTime(n);
  quadraticTime(n);
  cubicTime(n);

  exponentialTime(n);
  factorialTime(4);

  cout << "Functions executed successfully.\n";
  return 0;
}