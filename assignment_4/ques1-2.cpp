#include<iostream>
using namespace std;
class Rectangle{
  private: 
  int length;
  int breadth; 
  public: 
  Rectangle(){
    length=0;
    breadth=0;
  }
  Rectangle(int n){
    length=n;
    breadth=n;
  }
  Rectangle(int n1, int n2){
    length= n1;
    breadth= n2;
  }
  void calculateArea(){
    cout<<"Area is: "<<length*breadth<<endl;
    return; 
  }
};
int main(){
  Rectangle r1;
  Rectangle r2(5);
  Rectangle r3(5,10);
  r1.calculateArea();
  r2.calculateArea();
  r3.calculateArea();
}