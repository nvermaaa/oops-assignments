#include <iostream>
using namespace std;
class Test {
private:
    float value;
public:
    Test(float v = 0.0) {
        value = v;
    }
    operator float() {
        return value;
    }
};

int main() {
    Test t(7.25);
    float f;
    f = t;   
    cout << "Float value = " << f << endl;
    return 0;
}