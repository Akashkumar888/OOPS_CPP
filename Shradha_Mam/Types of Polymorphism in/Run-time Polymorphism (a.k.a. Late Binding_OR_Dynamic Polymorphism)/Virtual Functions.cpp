// ✅ Virtual Functions (Important for Run-time Polymorphism)
// A virtual function ensures that the overridden method in the child class is executed—even when using a base class pointer.
// ✅ 6. What is a Virtual Function?

// Interview Answer:
// “A virtual function is a function in the base class declared with the virtual keyword that allows derived classes to override it.
// Calls are resolved at runtime using dynamic binding.”

#include <iostream>
using namespace std;

class Parent {
public:
    virtual void show() {   // virtual → late binding // virtual keyword
        cout << "Parent class" << endl;
    }
};

// class Child : public Parent {
// public:
//     void show() { 
//         cout << "Child class" << endl;
//     }
// };


class Child : public Parent {
public:
    void show() override { // override keyword is optional, but good practice
        cout << "Child class" << endl;
    }
};


int main() {
    Child c1;         // base class pointer
    c1.show();
    // Decided at RUN TIME → prints "Child class"
}

// ✅ 1. What is Dynamic Binding?
// Interview Answer:
// “Dynamic binding means linking a function call to its actual function body at runtime.
// In C++, this happens when we use virtual functions.”

// ✅ One-line answer:
// Dynamic binding = runtime decision using virtual functions.
// ✅ Mini Example:
Animal* a = new Dog();
a->sound();   // decided at runtime → dynamic binding

// ✅ 2. Difference Between Early Binding and Late Binding
// ✅ Early Binding (Compile-time Binding)
// Happens at compile time
// Applies to normal (non-virtual) functions
// Function call is fixed before program runs

// ✅ Late Binding (Dynamic / Runtime Binding)
// Happens at runtime
// Applies to virtual functions
// Actual function call depends on object type, not pointer type

// ✅ Interview Line:
// “Early binding uses normal functions and is decided at compile time.
// Late binding uses virtual functions and is decided at runtime.”


// ✅ Final Interview-Ready One-Line Answers
// ✅ Polymorphism
// Ability of a function or object to behave differently in different contexts.

// ✅ Compile-time Polymorphism
// Achieved by function overloading and operator overloading.
// Decision done during compilation.

// ✅ Run-time Polymorphism
// Achieved by function overriding and virtual functions.
// Decision done during execution.

// ✅ Function Overloading
// Same function name, different parameters, same class.

// ✅ Function Overriding
// Same function name, same parameters, but in parent and child class.

// ✅ Operator Overloading
// Assigning new meaning to operators for user-defined types.

// ✅ Virtual Function
// Allows run-time polymorphism; ensures child’s method is called using base pointer.