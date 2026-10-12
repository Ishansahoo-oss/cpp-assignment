#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
};

int main() {
    Data d;
    int choice;

    cout << "1. Integer\n2. Float\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter integer: ";
        cin >> d.i;
        cout << "Value = " << d.i;
    }
    else if (choice == 2) {
        cout << "Enter float: ";
        cin >> d.f;
        cout << "Value = " << d.f;
    }
    else {
        cout << "Invalid choice";
    }

    return 0;
}