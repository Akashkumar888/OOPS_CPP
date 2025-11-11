

// ✅ What is Inheritance? (Interview-Ready Answer)
// Inheritance is a mechanism where one class (child/derived class) acquires the properties and behaviors of another class (parent/base class).
// It promotes code reuse, extensibility, and maintainability.

// ✅ Why do we use Inheritance?
// To reuse existing code
// To extend functionality
// To reduce duplication
// To maintain clean structure

// ✅ Types of Inheritance (with Full Code + main())
// ✅ 1. Single Inheritance
// One parent → one child.

#include <iostream>
using namespace std;

class Parent {
public:
    void display() { cout << "This is Parent class" << endl; }
};

class Child : public Parent { // Single inheritance
public:
    void show() { cout << "This is Child class" << endl; }
};

int main() {
    Child c;
    c.display();
    c.show();
}
