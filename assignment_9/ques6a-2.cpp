#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream outFile("AZ.txt");
  for (char c = 'A'; c <= 'Z'; c++)
  {
    outFile << c<< endl;
  }
  outFile.close();

  ifstream inFile("AZ.txt");
  inFile.seekg(9, ios::beg);
  char ch;
  inFile.get(ch);
  cout << "10th character: " << ch << endl;
  inFile.close();

  fstream file("AZ.txt", ios::in | ios::out);
  file.seekp(4, ios::beg);
  file.put('X');
  file.close();

  ifstream sizeFile("AZ.txt", ios::ate | ios::binary);
  int size = sizeFile.tellg();
  cout << "File size: " << size << " bytes" << endl;
  sizeFile.close();

  ifstream lastFile("AZ.txt");
  lastFile.seekg(-1, ios::end);
  char lastChar;
  lastFile.get(lastChar);
  cout << "Last character: " << lastChar << endl;
  lastFile.close();

  return 0;
}
