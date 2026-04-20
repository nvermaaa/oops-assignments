/*Name: Norzom Verma
Roll no.: 1024150374*/
#include <iostream>
using namespace std;

int countBitstrings(int n)
{
    if (n == 1)
        return 2;
    if (n == 2)
        return 3;
    return countBitstrings(n - 1) + countBitstrings(n - 2);
}

int main()
{
    int n;
    cout << "Enter length of bitstring: ";
    cin >> n;
    cout << "Number of valid bitstrings: " << countBitstrings(n) << endl;
    return 0;
}