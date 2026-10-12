#include <iostream>
using namespace std;

union EmployeeData {
    int id;
    float salary;
};

int main() {
    EmployeeData e;
    int choice;

    cout << "1. Store Employee ID\n";
    cout << "2. Store Employee Salary\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter ID: ";
            cin >> e.id;
            cout << "Employee ID = " << e.id;
            break;

        case 2:
            cout << "Enter salary: ";
            cin >> e.salary;
            cout << "Employee Salary = " << e.salary;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}