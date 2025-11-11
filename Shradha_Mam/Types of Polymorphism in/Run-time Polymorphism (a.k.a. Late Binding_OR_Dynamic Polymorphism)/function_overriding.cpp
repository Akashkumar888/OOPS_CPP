
// ✅ 1. What is Runtime Polymorphism? (C++ Version)

// Interview Answer:
// “Runtime polymorphism in C++ happens through method overriding using virtual functions.
// The function to be executed is decided at runtime, based on the object type, not the pointer type.”
// ✅ 5. Runtime Polymorphism

// Interview Answer:
// “Runtime polymorphism is achieved using virtual functions and overriding.
// The decision of which function to call happens at runtime.”

// ✅ 2. Run-Time Polymorphism
// Decided at run time using:
// Function Overriding
// Virtual Functions

// ✅ Function Overriding
// Subclass provides its own implementation of a method already defined in parent class.

#include <iostream>
using namespace std;

class Parent {
public:
    void show() {  // not virtual
        cout << "Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void show() {  // overrides base 
        cout << "Child class" << endl;
    }
};

int main() {
    Child c1;
    c1.show();
  // Output: Parent class (not polymorphic)
}



#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {                // virtual = runtime polymorphism
        cout << "Animal sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks\n";
    }
};

int main() {
    Animal* a = new Dog();  // base pointer → derived object
    a->sound();             // calls Dog::sound (runtime decision)
    delete a;
    return 0;
}
