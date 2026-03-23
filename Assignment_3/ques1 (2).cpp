#include <iostream>
using namespace std;
class rectangle
{
private:
  float length;
  float breadth;

public:
void calculateArea()
  {
    double area;
    area = length * breadth;
    cout << "Area is: " << area << endl;
  }
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
  rectangle* ptr;
  r.getData();  
  ptr->calculateArea();
}