#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
};

int main() {
    Data d;

    d.i = 10;
    cout << "Integer = " << d.i << endl;

    d.f = 5.5;
    cout << "Float = " << d.f;

    return 0;
}