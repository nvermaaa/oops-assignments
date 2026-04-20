/*Name: Norzom Verma
 Roll number : 1024150374*/

#include<iostream>
#include<cmath>
#include<chrono>
using namespace std;
using namespace chrono;

int T1(int n){
    if(n==1)  
    return 1;
    return T1(n-1)+1;
}

int T2(int n){
    if(n==1)  
    return 1;
    return T2(n-1)+n;
}

int T3(int n){
    if(n==1)  
    return 1;
    return T3(n-1)+n*n;
}

int T4(int n){
    if(n==1)  
    return 0;
    return T4(n-1)+log(n);
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    auto start = high_resolution_clock::now();
    cout << "T1: " << T1(n) << endl;
    auto stop = high_resolution_clock::now();
    cout << "Time: " << duration_cast<microseconds>(stop-start).count() << " us" << endl;

    start = high_resolution_clock::now();
    cout<<"T2: "<<T2(n)<<endl;
    stop= high_resolution_clock::now();
    cout<<"time:"<<duration_cast<microseconds>(stop-start).count()<<" us"<<endl;

    start = high_resolution_clock::now();
    cout<<"T3: "<<T3(n)<<endl;
    stop= high_resolution_clock::now();
    cout<<"time:"<<duration_cast<microseconds>(stop-start).count()<<" us"<<endl;

    start = high_resolution_clock::now();
    cout<<"T4: "<<T4(n)<<endl;
    stop= high_resolution_clock::now();
    cout<<"time:"<<duration_cast<microseconds>(stop-start).count()<<" us"<<endl;    

}


