/*Name: Norzom Verma
 Roll number : 1024150374*/

#include <iostream>
using namespace std;

int ways(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return ways(n - 1) + ways(n - 2);
}

int main()
{
    int n;
    cout << "Enter number of steps: ";
    cin >> n;
    cout << "Number of ways: " << ways(n) << endl;
    return 0;
}

