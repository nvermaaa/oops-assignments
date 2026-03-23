#include <iostream>
#include <string>
using namespace std;

struct student
{
  string name;
  string degree;
  string hostel;
  int rollno;
  float currentCGPA;

  void displayDetails()
  {
    cout << "\n--- Student Details ---\n";
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollno << endl;
    cout << "Degree: " << degree << endl;
    cout << "Hostel: " << hostel << endl;
    cout << "CGPA: " << currentCGPA << endl;
  }

  void addDetails()
  {
    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Roll No: ";
    cin >> rollno;

    cout << "Enter Degree: ";
    getline(cin, degree);

    cout << "Enter Hostel: ";
    getline(cin, hostel);

    cout << "Enter Current CGPA: ";
    cin >> currentCGPA;
    displayDetails();
  }
  void updateDetails()
  {
    cout << "Enter New Name: ";
    getline(cin, name);

    cout << "Enter New Degree: ";
    getline(cin, degree);
  }

  void updateCGPA()
  {
    cout << "Enter Updated CGPA: ";
    cin >> currentCGPA;
  }

  void updateHostel()
  {
    cin.ignore();
    cout << "Enter New Hostel: ";
    getline(cin, hostel);
  }
};

int main()
{
  student s;
  s.addDetails();
}