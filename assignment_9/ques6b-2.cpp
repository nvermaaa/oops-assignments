#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream outFile("data.txt");
  outFile << "This is line one.\n";
  outFile << "This is line two.\n";
  outFile << "This is line three.\n";
  outFile.close();

  ifstream inFile("data.txt");
  if (!inFile)
  {
    cout << "Error opening file!" << endl;
    return 1;
  }

  inFile.seekg(10, ios::beg);
  cout << "Current position: " << inFile.tellg() << endl;

  char ch;
  cout << "Remaining content:\n";
  while (inFile.get(ch))
  {
    cout << ch;
  }

  inFile.close();
  return 0;
}
