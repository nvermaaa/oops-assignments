#include <iostream>
#include <cstdlib>
using namespace std;
class SafeArray
{
private:
    int arr[5];

public:
    SafeArray()
    {
        for (int i = 0; i < 5; i++)
        {
            arr[i] = i * 10;
        }
    }
    int operator[](int index)
    {
        if (index < 0 || index >= 5)
        {
            std::cout << "Error: Index out of bounds!" << std::endl;
            return -1; 
        }
        return arr[index];
    }
};

int main()
{
    SafeArray a;
    cout << "Valid Access: " << a[2] << endl;
    cout << "Invalid Access: ";
    cout << a[10] << endl;
    return 0;
}