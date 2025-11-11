
// Definition (C++):
// Covariant return types allow an overridden function in a derived class to return a more specific type (a derived type) than the return type declared in the base class.
// Concise explanation to give in interview:
// “In C++, covariant return type means that when I override a virtual function in a derived class, I’m allowed to return a more derived class type instead of the base class type. This helps when working with inheritance because the overridden method can return an object that’s more specific and useful, while still respecting polymorphism.”

// Example you can speak during interview:

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base object\n";
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived object\n";
    }
};

class A {
public:
    virtual Base* create() {
        return new Base();
    }
};

class B : public A {
public:
    Derived* create() override {   // covariant return type
        return new Derived();
    }
};

int main() {
    A* obj1 = new A();
    Base* b1 = obj1->create();     // returns Base*
    b1->show();                    // Output: Base object

    A* obj2 = new B();             // Base pointer to derived object
    Base* b2 = obj2->create();     // Actually returns Derived*
    b2->show();                    // Output: Derived object

    return 0;
}

// How to explain this example:
// “In class A, the function returns Base*. In class B, I override the same function but return Derived*. Since Derived is a subclass of Base, this is allowed. The compiler accepts it because C++ supports covariant return types.”
// Key points to say if interviewer goes deeper:
// It works only with pointers or references, not with value return types.
// It requires the function to be virtual in the base class.
// Covariance improves usability because the caller gets a more specialized type.
// If you say the above confidently, it will be a strong and correct explanation.