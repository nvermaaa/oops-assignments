#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("QUES3.txt");

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    for (int i = 1; i <= 200; i++)
    {
        file << i << endl;
    }
    cout << "Numbers written successfully to NUM.TXT" << endl;
    file.close();
    ifstream infile("QUES3.txt");
    ofstream file1("QUES3b.txt");
    int  num;
    while (infile >> num){
      file1 << num << endl;
    }

    infile.close();
    file1.close();
    
    ifstream file2("QUES3b.txt");
    int val;
    while (file2 >> val){
      cout << val<< endl;
    }
    file2.close(); 
  }