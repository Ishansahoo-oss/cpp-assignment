#include <iostream>
using namespace std;

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    Employee e;

    cout << "Enter ID, name and salary: ";
    cin >> e.id >> e.name >> e.salary;

    cout << "\nEmployee details\n";
    cout << "ID = " << e.id << endl;
    cout << "Name = " << e.name << endl;
    cout << "Salary = " << e.salary;

    return 0;
}