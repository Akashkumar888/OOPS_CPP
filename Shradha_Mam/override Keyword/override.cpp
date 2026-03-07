
// 2️⃣ What is override Keyword?
// Definition (Interview)
// The override keyword is used in the child class to explicitly indicate that a function is overriding a virtual function from the parent class.
// It helps the compiler detect mistakes.

// Example Using override
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
    void sound() override {   // override keyword
        cout << "Dog barks" << endl;
    }
};

int main() {

    Animal* a;
    Dog d;

    a = &d;

    a->sound();

    return 0;
}
// 3️⃣ Why override is Useful
// Suppose you make a mistake:
// void sounds() override
// Compiler error:
// function does not override base class method
// So override helps catch bugs early.

// 4️⃣ Difference Between virtual and override
// Keyword	Used In	Purpose
// virtual	Parent class	Allows function overriding
// override	Child class	Ensures function overrides parent
// 5️⃣ Visual Flow (Runtime Polymorphism)
// Animal* ptr
//       |
//       v
//    Dog object
// ptr->sound()

// Runtime decides → Dog::sound()
// 6️⃣ Without virtual
// Animal* a = &d;
// a->sound();
// Output:
// Animal makes sound
// Because compile-time binding happens.

// 7️⃣ Best Interview Answer
// Virtual
// The virtual keyword allows a function to be overridden in a derived class and enables runtime polymorphism.
// Override
// The override keyword ensures that a derived class function correctly overrides a virtual function from the base class.

// 8️⃣ One-Line Memory Trick
// virtual → enable overriding
// override → confirm overriding