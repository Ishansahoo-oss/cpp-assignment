#include <iostream>
using namespace std;

int main() {
    int a, b;
    int *p = &a, *q = &b;

    cout << "Enter two numbers: ";
    cin >> *p >> *q;

    cout << "Sum = " << *p + *q << endl;
    cout << "Product = " << *p * *q;

    return 0;
}