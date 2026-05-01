#include <iostream>
using namespace std;
class Student
{
protected:
  string name;
  int id;

public:
  Student(string n, int i)
  {
    name = n;
    id = i;
  }

  virtual void display() = 0;
};

class Engineering : public Student
{
private:
  string branch;

public:
  Engineering(string n, int i, string b) : Student(n, i)
  {
    branch = b;
  }

  void display()
  {
    cout << "Engineering Student\n";
    cout << "Name: " << name << ", ID: " << id
         << ", Branch: " << branch << endl;
  }
};

class Medicine : public Student
{
private:
  string specialization;

public:
  Medicine(string n, int i, string s) : Student(n, i)
  {
    specialization = s;
  }

  void display()
  {
    cout << "Medicine Student\n";
    cout << "Name: " << name << ", ID: " << id
         << ", Specialization: " << specialization << endl;
  }
};

class Science : public Student
{
private:
  string subject;

public:
  Science(string n, int i, string sub) : Student(n, i)
  {
    subject = sub;
  }

  void display()
  {
    cout << "Science Student\n";
    cout << "Name: " << name << ", ID: " << id
         << ", Subject: " << subject << endl;
  }
};

int main()
{
  Student *students[3];
  students[0] = new Engineering("Ananya", 101, "CSE");
  students[1] = new Medicine("Riya", 102, "Medicine");
  students[2] = new Science("Aman", 103, "Physics");

  for (int i = 0; i < 3; i++)
  {
    students[i]->display();
    cout << endl;
  }
  for (int i = 0; i < 3; i++)
  {
    delete students[i];
  }

  return 0;
}