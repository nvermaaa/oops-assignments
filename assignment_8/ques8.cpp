#include <iostream>
using namespace std;

template <class T1, class T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }
    void display() {
        cout << "First: " << first << endl;
        cout << "Second: " << second << endl;
    }
};

int main() {
    Pair<int, float> p1(10, 5.5);
    Pair<string, int> p2("Ananya", 20);

    cout << "Pair 1:\n";
    p1.display();

    cout << "\nPair 2:\n";
    p2.display();

    return 0;
}
