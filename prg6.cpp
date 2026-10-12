#include <iostream>
using namespace std;

enum Status {
    PENDING = 1,
    APPROVED = 5,
    REJECTED = 10
};

int main() {
    Status s = APPROVED;

    cout << "Status code = " << s;

    return 0;
}