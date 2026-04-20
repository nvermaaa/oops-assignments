#include <iostream>
using namespace std;

class Complex
{
private:
  float real;
  float imag;

public:
  Complex(float r, float i)
  {
    real = r;
    imag = i;
  }

  Complex(const Complex &c)
  {
    real = c.real;
    imag = c.imag;
  }
  void display()
  {
    cout << real << " + " << imag << "i" << endl;
  }
  friend void sum(Complex, Complex);
};

void sum(Complex c1, Complex c2)
{
  Complex result(0, 0);
  result.real = c1.real + c2.real;
  result.imag = c1.imag + c2.imag;

  cout << "Sum = ";
  result.display();
}

int main()
{
  Complex c1(3.5, 2.5);
  Complex c2(1.5, 4.5);

  Complex c3 = c1;
  cout << "First Complex Number: ";
  c1.display();

  cout << "Second Complex Number: ";
  c2.display();

  cout << "Copied Complex Number: ";
  c3.display();

  sum(c1, c2);

  return 0;
}