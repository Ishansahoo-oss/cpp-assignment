#include <iostream>
using namespace std;

struct Student {
    char name[20];
    int m1, m2, m3;
};

int main() {
    Student s = {"Rahul", 80, 90, 70};

    int total = s.m1 + s.m2 + s.m3;
    float avg = total / 3.0;

    cout << "Name = " << s.name << endl;
    cout << "Total = " << total << endl;
    cout << "Average = " << avg;

    return 0;
}