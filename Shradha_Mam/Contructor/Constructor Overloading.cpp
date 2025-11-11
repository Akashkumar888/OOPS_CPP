
// ✅ ✅ Constructor Overloading
// Multiple constructors with different parameters.

#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Default Constructor" << endl;
    }
    Demo(int x) {
        cout << "Parameterized Constructor: " << x << endl;
    }
};

int main() {
    Demo d1;
    Demo d2(10);
    return 0;
}

// ✅ Can constructors be overridden?
// Answer (C++ / Java):
// No, constructors cannot be overridden. They can only be overloaded or chained.

// ✅ Interview-Ready Explanation (C++ Version)
// In C++, constructor overriding is impossible because:
// Constructors are not inherited by derived classes.
// A child class does NOT get copies of the parent’s constructors.
// Overriding requires:
// same signature
// same name
// inheritance

// virtual mechanism
// Constructors do not meet these rules.
// Constructors belong to their own class only and are used to initialize that class’s objects.
// So you cannot override them.
// ✅ ✅ But constructors CAN be overloaded
// You can write multiple constructors in the same class with different parameters.
// This is overloading, NOT overriding.
class Demo {
public:
    Demo() { }
    Demo(int x) { }
};

// ✅ ✅ Constructors CAN be chained (important!)
// Use initializer list:
class Demo {
public:
    Demo() : Demo(10) {   // chaining to parameterized constructor
        cout << "Default constructor\n";
    }

    Demo(int x) {
        cout << "Parameterized constructor: " << x << endl;
    }
};

// ✅ ✅ Why overriding is impossible (short answer)
// Overriding happens through inheritance, but constructors are not inherited.
// Therefore, constructors cannot be overridden.

// ✅ If interviewer asks “Why can't we override them?”
// Say this:
// Constructors are meant for initializing objects of their own class, not child classes.
// They are not virtual and cannot participate in runtime polymorphism.
// Each class must define its own constructor; they are not inherited.