#include <iostream>
#include <fstream>
using namespace std;

class Student
{
  int roll;
  char name[30];
  float marks;

public:
  void input()
  {
    cout << "Enter Roll No: ";
    cin >> roll;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Marks: ";
    cin >> marks;
  }

  void display()
  {
    cout << "Roll No: " << roll << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
  }
};

int main()
{
  Student s;
  s.input();
  ofstream fout("student.dat", ios::binary);
  if (!fout)
  {
    cout << "Error opening file for writing!" << endl;
    return 1;
  }

  fout.write((char *)&s, sizeof(s));
  fout.close();

  cout << "\nObject written to file successfully!\n";
  Student s2;
  ifstream fin("student.dat", ios::binary);
  if (!fin)
  {
    cout << "Error opening file for reading!" << endl;
    return 1;
  }

  fin.read((char *)&s2, sizeof(s2));
  fin.close();

  cout << "\nObject read from file:\n";
  s2.display();

  return 0;
}