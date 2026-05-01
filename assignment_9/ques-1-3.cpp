#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("NUM.txt");

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    for (int i = 1; i <= 200; i++)
    {
        file << i << endl;
    }
    file.close();
    cout << "Numbers written successfully to NUM.TXT" << endl;

    ifstream is("NUM.txt");
    ofstream f1("ODD.txt");
    ofstream f2("EVEN.txt");

    int num;
    while (is >> num)
    {
        if (num % 2 == 0)
        {
            f2 << num << endl;
        }
        else
        {
            f1 << num << endl;
        }
    }

    cout << "Enter choice: " << endl;
    cout << "1 - Odd file" << endl
         << "2 - Even file" << endl;
    int ch;
    cin >> ch;

    switch (ch)
    {
    case 1:
    {
        ifstream oddFile("ODD.txt");
        int val;
        cout << "Contents of ODD.txt:" << endl;
        while (oddFile >> val)
        {
            cout << val << " ";
        }
        cout << endl;
        oddFile.close();
        break;
    }
    case 2:
    {
        ifstream evenFile("EVEN.txt");
        int val;
        cout << "Contents of EVEN.txt:" << endl;
        while (evenFile >> val)
        {
            cout << val << " ";
        }
        cout << endl;
        evenFile.close();
        break;
    }
    default:
        cout << "Invalid choice!" << endl;
    }

    is.close();
    f1.close();
    f2.close();
    return 0;
}
