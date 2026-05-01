#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  char str[100];
  cout << "Enter a string: ";
  cin.getline(str, 100);
  int length = 0;
  while (str[length] != '\0')
  {
    length++;
  }
  cout << "Length of the string: " << length << endl;

  ofstream outFile("stringdata.txt");
  if (!outFile)
  {
    cout << "Error opening file for writing!" << endl;
    return 1;
  }
  outFile << str;
  outFile.close();
  
  ifstream inFile("stringdata.txt");
  if (!inFile)
  {
    cout << "Error opening file for reading!" << endl;
    return 1;
  }
  char ch;
  cout << "Characters fetched from file: ";
  while (inFile.get(ch))
  {
    cout << ch;
  }
  cout << endl;
  inFile.close();

  return 0;
}
