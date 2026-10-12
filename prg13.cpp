#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;

    cout << "Value = " << a << endl;
    cout << "Value using pointer = " << *p;

    return 0;
}