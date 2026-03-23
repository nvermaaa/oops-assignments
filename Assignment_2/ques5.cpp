#include<iostream>
using namespace std;
class complex{
  public:
  float real;
  float imaginary;  
  void setComplex(float a, float b){
    real=a;
    imaginary=b;
  }
  void displayComplex(){
    cout << real << " + " << imaginary << "i" << endl;
  }
};

complex addComplex(complex c1, complex c2){
  complex temp;
  temp.real= c1.real + c2.real;
  temp.imaginary= c1.imaginary + c2.imaginary;
  return temp; 

}
int main(){
  complex c1, c2;
  float a,b;
  cout<<"Enter first complex number: ";
  cin>>a>>b;
  c1.setComplex(a,b);
  c1.displayComplex();
  cout<<"Enter first complex number: ";
  cin>>a>>b;
  c2.setComplex(a,b);
  c2.displayComplex();
  complex sum= addComplex(c1, c2);
  cout<<"Sum of complex numbers: ";
  sum.displayComplex();



}