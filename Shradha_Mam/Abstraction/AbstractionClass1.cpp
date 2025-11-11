// ✅ 2. What is an Abstract Class? (C++ Version)
// An abstract class is a class that:
// cannot be instantiated
// may contain normal methods + pure virtual methods
// is used as a base class

// ✅ C++ Abstract Class Example


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

// ✅ Simplest Interview Explanation
// ✅ Abstract Class (C++):

// “Abstract class can have both implemented methods and pure virtual functions.”

// ✅ Interface (C++):
// “Interface is a class with only pure virtual functions and no implementation.”

// ✅ Major Difference:
// Abstract class = some methods defined + some undefined.
// Interface = all methods are undefined (pure virtual).