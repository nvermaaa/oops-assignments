#include<iostream>
using namespace std;
template <typename T>
void swapValues(T &a, T &b){
  T temp;
  temp=a;
  a=b;
  b=temp;
}

int main(){
  int x=10, y=20;
  swapValues(x,y);
  cout<<"x= "<<x<<" y= "<<y<<endl;

  float m=45, n=65;
  swapValues(m,n);
  cout<<"m= "<<m<<" n= "<<n<<endl;
}