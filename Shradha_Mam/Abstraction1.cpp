
#include <bits/stdc++.h>
using namespace std;

// Abstract class
class Employee {
public:
    virtual void salary() = 0; // pure virtual function
};

// Derived class
class FullTimeEmployee : public Employee {
public:
    void salary() {
        cout << "Full-Time Employee Salary: 50000" << endl;
    }
};

// Another Derived class
class PartTimeEmployee : public Employee {
public:
    void salary() {
        cout << "Part-Time Employee Salary: 20000" << endl;
    }
};

int main() {
    FullTimeEmployee f1;
    PartTimeEmployee p1;

    f1.salary();
    p1.salary();

    return 0;
}

