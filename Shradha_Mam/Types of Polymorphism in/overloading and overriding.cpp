
// What is the difference between overloading and overriding?
// A compile-time polymorphism feature called overloading allows an entity to have numerous implementations of the same name. Method overloading and operator overloading are two examples.

// Overriding is a form of runtime polymorphism where an entity with the same name but a different implementation is executed. It is implemented with the help of virtual functions.


// 🔷 Difference Between Overloading and Overriding
// 🔹 What is Overloading?
// 👉 Definition
// Overloading is a compile-time polymorphism where multiple functions have the same name but different parameters.

// 💡 Key Idea
// 👉 Same function name, different arguments

// 💡 Interview Line
// Overloading allows multiple functions with the same name but different parameter lists, and the decision is made at compile time.

// ✔ Example (C++ – Function Overloading)
#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Math m;
    cout << m.add(2, 3) << endl;      // calls first function
    cout << m.add(2, 3, 4) << endl;   // calls second function
}
// ✔ Output
// 5
// 9


// 🔹 What is Overriding?
// 👉 Definition
// Overriding is a runtime polymorphism where a child class provides a new implementation of a function already defined in the parent class.
// 💡 Key Idea
// 👉 Same function name + same parameters, but different implementation


// 💡 Interview Line
// Overriding allows a derived class to change the behavior of a base class method, and the decision is made at runtime.

// ✔ Example (C++ – Function Overriding using virtual)
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes sound" << endl;
    }
};
class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;

    a->sound();   // runtime decision
}

// ✔ Output
// Dog barks

// 🔷 Key Differences (Line-by-Line)
// 👉 1. Type of Polymorphism
// Overloading is compile-time polymorphism.
// Overriding is runtime polymorphism.

// 👉 2. Function Signature
// In overloading, functions must have different parameters.
// In overriding, functions have same name and same parameters.

// 👉 3. Inheritance
// Overloading does not require inheritance.
// Overriding requires inheritance.

// 👉 4. Binding
// Overloading uses static binding (decided at compile time).
// Overriding uses dynamic binding (decided at runtime).

// 👉 5. Execution Speed
// Overloading is faster.
// Overriding is slightly slower due to runtime decision.

// 🔥 Final Interview Summary
// 👉 Overloading
// Same function name, different parameters, compile-time decision.

// 👉 Overriding
// Same function name and parameters, but different implementation in child class, runtime decision.