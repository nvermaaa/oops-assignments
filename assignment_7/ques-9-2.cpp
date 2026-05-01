#include <iostream>
#include <string>
using namespace std;

class MyObject
{
public:
    void operator()(int a)
    {
        cout << "Called with one int: " << a << endl;
    }

    void operator()(int a, int b)
    {
        cout << "Called with two ints: " << a << ", " << b << endl;
    }

    void operator()(const string &s)
    {
        cout << "Called with a string: " << s << endl;
    }

    void operator()(double d, char c)
    {
        cout << "Called with double and char: " << d << ", " << c << endl;
    }
};

int main()
{
    MyObject obj;
    obj(42);
    obj(10, 20);
    obj("Hello World");
    obj(3.14, 'A');
    return 0;
}
