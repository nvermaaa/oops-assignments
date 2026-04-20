#include <iostream>
using namespace std;

int main()
{
  // Question-1
  cout << "Hello World" << endl;
  // Question-2
  int n;
  float f;
  char c;
  cout << "Enter an integer: " << endl;
  cin >> n;
  cout << "Enter a decimal: " << endl;
  cin >> f;
  cout << "Enter a charachter: " << endl;
  cin >> c;
  cout << endl;
  cout << n << "\t" << f << "\t" << c << "\n";
  // Question-3
  cout << "Enter two numbers: " << endl;
  int a, b;
  cin >> a;
  cin >> b;
  cout << "Addition: " << a + b << endl;
  cout << "Subtraction: " << a - b << endl;
  cout << "Multiplication: " << a * b << endl;
  cout << "Division: " << a / b << endl;
  // Question-4
  float cel, far;
  cout << "Enter temperature in Celcius: " << endl;
  cin >> cel;
  far = ((9 * cel) / 5) + 32;
  cout << "Temperature in Fahrenheit is: " << far << endl;
  // Question-6
  int a, b;
  cout << "Enter two integers: " << endl;
  cin >> a >> b;
  a += b;
  cout << a << endl;
  a -= b;
  cout << a << endl;
  // Question-8
  int days;

  cout << "Enter number of days late: ";
  cin >> days;

  if (days <= 0)
  {
    cout << "No fine. Book returned on time." << endl;
  }
  else if (days <= 5)
  {
    cout << "Fine: 50 paise" << endl;
  }
  else if (days <= 10)
  {
    cout << "Fine: 1 Rupee" << endl;
  }
  else if (days <= 30)
  {
    cout << "Fine: 5 Rupees" << endl;
  }
  else
  {
    cout << "Membership Cancelled!" << endl;
  }
  // Question-9
  int num1, num2;
  char op;

  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter second number: ";
  cin >> num2;

  cout << "Enter operator (+, -, *, /): ";
  cin >> op;

  switch (op)
  {
  case '+':
    cout << "Result = " << (num1 + num2) << endl;
    break;

  case '-':
    cout << "Result = " << (num1 - num2) << endl;
    break;

  case '*':
    cout << "Result = " << (num1 * num2) << endl;
    break;

  case '/':
    if (num2 != 0)
      cout << "Result = " << (num1 / num2) << endl;
    else
      cout << "Error! Division by zero." << endl;
    break;

  default:
    cout << "Invalid Operator!" << endl;
  }
  // Question-10

  cout << "Enter a number: ";
  cin >> num1;

  // Using if-else
  if (num1 % 2 == 0)
  {
    cout << "Using if-else: Number is Even" << endl;
  }
  else
  {
    cout << "Using if-else: Number is Odd" << endl;
  }

  // Using conditional (ternary) operator
  cout << "Using conditional operator: ";
  (num1 % 2 == 0) ? cout << "Number is Even" : cout << "Number is Odd";

  return 0;
}