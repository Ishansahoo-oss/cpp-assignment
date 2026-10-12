#include <iostream>
using namespace std;

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    Student s = {101, "Rahul", 85.5};

    cout << "Roll = " << s.roll << endl;
    cout << "Name = " << s.name << endl;
    cout << "Marks = " << s.marks;

    return 0;
}