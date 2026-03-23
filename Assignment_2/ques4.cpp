#include <iostream>
using namespace std;
class rectangle
{
private:
  float length;
  float breadth;

  void calculateArea()
  {
    double area;
    area = length * breadth;
    cout << "Area is: " << area << endl;
  }

public:
  void getData()
  {
    cout << "Enter length: " << endl;
    cin >> length;

    cout << "Enter breadth: " << endl;
    cin >> breadth;
    calculateArea();
  }
};
int main()
{
  rectangle r;
  r.getData();
}