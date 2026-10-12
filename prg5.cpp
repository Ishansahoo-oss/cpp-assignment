#include <iostream>
using namespace std;

enum Day {MON, TUE, WED, THU, FRI};

int main() {
    Day d = WED;

    cout << "Enum value = " << d;

    return 0;
}