#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char c;
};

int main() {
    Data d;

    d.i = 100;

    cout << "Integer = " << d.i;

    return 0;
}