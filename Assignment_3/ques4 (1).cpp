#include <iostream>
using namespace std;

class Student
{
private:
  int rollNo;
  float marks;

public:
  Student(int r, float m)
  {
    rollNo = r;
    marks = m;
  }
  friend class Result;
};

class Result
{
public:
  void display(Student s)
  {
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Marks: " << s.marks << endl;

    if (s.marks >= 40)
      cout << "Status: Pass" << endl;
    else
      cout << "Status: Fail" << endl;
  }
};

int main()
{
  Student s1(101, 85.5);
  Result r1;
  r1.display(s1);
  return 0;
}
