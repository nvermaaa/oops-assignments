#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream file("data.txt", ios::out | ios::in | ios::trunc);
  string text = "HelloWorld";
  for (char c : text)
  {
    file.put(c);
    cout << "Put pointer position: " << file.tellp() << endl;
  }
  file.seekp(5);
  file << "C++";
  file.seekg(0);
  string result;
  file >> result;
  cout << "Final file content: " << result << endl;
  file.close();
  return 0;
}
