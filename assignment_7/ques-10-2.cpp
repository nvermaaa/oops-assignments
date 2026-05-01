#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    friend istream &operator>>(istream &in, Student &s)
    {
        cout << "Enter Name: ";
        in >> s.name;
        cout << "Enter Age: ";
        in >> s.age;
        return in;
    }
    friend ostream &operator<<(ostream &out, Student &s)
    {
        out << "Name: " << s.name << endl;
        out << "Age: " << s.age << endl;
        return out;
    }
};

int main()
{
    Student s;
    cin >> s;
    cout << "\nStudent Details:\n";
    cout << s;
    return 0;
}