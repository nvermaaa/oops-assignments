/*Name: Norzom Verma
 Roll number : 1024150374*/
 
#include <iostream>
using namespace std;

int moves = 0;
void towerOfHanoi(int n, char s, char auxi, char d)
{
   if (n == 1)
   {
      cout << "Move disk 1 from " << s << " to " << d << endl;
      moves++;
      return;
   }
   towerOfHanoi(n - 1, s, d, auxi);
   cout << "Move disk " << n << " from " << s << " to " << d << endl;
   moves++;
   towerOfHanoi(n - 1, auxi, s, d);
}

int main()
{
   int n;
   cout << "Enter number of disks: ";
   cin >> n;
   towerOfHanoi(n, 'A', 'B', 'C');
   cout << "\nTotal moves: " << moves << endl;
   return 0;
}


