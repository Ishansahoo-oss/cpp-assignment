#include <iostream>
using namespace std;

int main() {
    int a[5], largest;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    largest = a[0];

    for (int i = 1; i < 5; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    cout << "Largest = " << largest;

    return 0;
}