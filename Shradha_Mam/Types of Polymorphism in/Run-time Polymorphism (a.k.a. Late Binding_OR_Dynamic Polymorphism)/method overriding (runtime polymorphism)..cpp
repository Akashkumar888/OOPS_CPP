
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class A {
public:
    virtual void show() {
        cout << "Parent class" << endl;
    }
};

class B : public A {
public:
    void show() {
        cout << "Child class" << endl;
    }
};
int main() {
    // Write C++ code here
    A *a;
    B b;
    a = &b;        // base pointer → child object

    a->show();     // calls Child class show()

    return 0;
}

// Case 1️⃣: WITH virtual keyword
// What happens internally?
// a is a base class pointer
// It points to a child class object
// Function is marked virtual
// So decision is taken at runtime
// 👉 The program checks:
// “What type of object is this pointer actually pointing to?”
// Answer: B object
// So it calls:
// B::show()
// Output
// Child class

// Case 2️⃣: WITHOUT virtual keyword
// class A{
// public:
//     void show(){
//         cout<<"Parent class"<<endl;
//     }
// };
// What happens now?
// No virtual
// Compiler binds the function call at compile time
// Compiler sees:
// A *a;
// a->show();
// So it decides:
// “Pointer type is A*, so call A::show()”
// It does NOT care what object it points to.
// Output
// Parent class
// 🔥 CORE REASON (Most Important Part)
// With virtual
// ✔ Function call depends on object type
// ✔ Decided at runtime
// Without virtual

// ❌ Function call depends on pointer type
// ❌ Decided at compile time
// Why is it called Runtime Polymorphism?
// Let’s break the word:

// 🔹 Poly → many
// 🔹 Morph → forms

// Same function call:
// a->show();

// But different behavior at runtime:
// Calls A::show() OR
// Calls B::show()
// Decision is made while program is running, not while compiling.
// 👉 Hence Runtime Polymorphism


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
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;

    a = &d;      // base class pointer pointing to derived object
    a->sound();  // calls Dog's sound()

    return 0;
}
