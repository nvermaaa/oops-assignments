#include <iostream>
#include <fstream>
using namespace std;
int countAlphabets()
{  ifstream file("NUM.TXT");
  char ch;
  int count = 0;
  if (!file)
  {
    cout << "Error opening file!" << endl;
    return -1;
  }

  while (file.get(ch))
  {
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
      count++;
    }
  }
  file.close();
  return count;
}

int main()
{
  int result = countAlphabets();

  if (result != -1)
    cout << "Number of alphabets in file: " << result << endl;

  return 0;
}


