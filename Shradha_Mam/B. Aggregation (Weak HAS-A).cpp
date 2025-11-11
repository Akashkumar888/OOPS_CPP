
// B. Aggregation (Weak HAS-A)
// Weak ownership
// Part can exist independently
// Implemented using pointers or references
// C++ Example (Aggregation)

#include <iostream>
using namespace std;

class Department {
public:
    void show() { cout << "Department active\n"; }
};

class Student {
private:
    Department* dept;   // Aggregation → Student HAS-A Department (weak)
public:
    Student(Department* d) {
        dept = d;       // Student does NOT own Department
    }
    void showDept() {
        dept->show();
    }
};

int main() {
    Department d;         // Department exists independently
    Student s(&d);        // Student uses it (aggregation)

    s.showDept();
}

// IS-A:
// Inheritance.
// Dog IS-A Animal.
// HAS-A:
// Composition or Aggregation.
// Composition:
// Strong ownership
// Part cannot exist without whole
// Car HAS-A Engine

// Engine created/destroyed with Car
// Aggregation:
// Weak relationship
// Part can exist independently
// Student HAS-A Department
// Department exists even without Student
