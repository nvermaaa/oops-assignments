#include <iostream>
#include <cmath>
using namespace std;
float area(float base, float height)
{
    return 0.5 * base * height;
}
float area(float side)
{
    return (sqrt(3) / 4) * side * side;
}
float area(float equalSide, float base, int flag)
{
    float height = sqrt(equalSide * equalSide - (base * base) / 4);
    return 0.5 * base * height;
}
int main()
{
    float base = 6, height = 4;
    float side = 5;
    float equalSide = 5, baseIso = 6;
    cout << "Area of Right-Angled Triangle: "
         << area(base, height) << endl;
    cout << "Area of Equilateral Triangle: "
         << area(side) << endl;
    cout << "Area of Isosceles Triangle: "
         << area(equalSide, baseIso, 1) << endl;
    return 0;
}