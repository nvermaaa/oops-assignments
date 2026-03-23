#include <iostream>
using namespace std;
class Physics;
class Maths
{
private:
  char grade;
  float marks;

public:
  Maths(char grade1, float marks1)
  {
    grade = grade1;
    marks = marks1;
  }
  void display()
  {
    cout << "Marks = " << marks
         << ", Grade = " << grade << endl;
  }
  friend void addMarks(Maths, Physics);
};
class Physics
{
private:
  char grade;
  float marks;

public:
  Physics(char grade1, float marks1)
  {
    grade = grade1;
    marks = marks1;
  }
  void display()
  {
    cout << "Marks = " << marks
         << ", Grade = " << grade << endl;
  }
  friend void addMarks(Maths, Physics);
};
void addMarks(Maths m, Physics p)
{
  float total;
  total = m.marks + p.marks;
  cout << "Total marks are: " << total << endl;
  return;
}
int main()
{
  Maths m1('A', 85.5);
  Physics p1('B', 90.0);

  m1.display();
  p1.display();

  addMarks(m1, p1);

  return 0;
}