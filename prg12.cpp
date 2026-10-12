#include <iostream>
using namespace std;

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    Student s[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter roll, name and marks: ";
        cin >> s[i].roll >> s[i].name >> s[i].marks;
    }

    int top = 0;

    for (int i = 1; i < 3; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }

    cout << "\nTopper: " << s[top].name << endl;
    cout << "Roll: " << s[top].roll << endl;
    cout << "Marks: " << s[top].marks;

    return 0;
}