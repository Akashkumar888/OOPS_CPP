
// What is Dynamic Binding?
// Dynamic binding (also called late binding) is when the function call is linked to the function body at runtime.
// In C++, this happens only with virtual functions.

// Short answer for interview:
// “Dynamic binding means the function that gets executed is decided at runtime based on the actual object, not the pointer type. In C++, virtual functions enable dynamic binding.”

// Difference Between Early Binding and Late Binding
// Early Binding (Static Binding)
// Happens at compile time
// Used for non-virtual functions
// Faster but less flexible
// Function call resolved using the type of pointer/reference, not the object
// Late Binding (Dynamic Binding)
// Happens at runtime
// Used for virtual functions
// Enables polymorphism
// Function call resolved using the actual object type

// C++ Example Demonstrating Both Bindings
#include <iostream>
using namespace std;

class Base {
public:
    void show() {                      // Early binding
        cout << "Base::show (early binding)\n";
    }

    virtual void display() {           // Late binding (dynamic binding)
        cout << "Base::display (late binding)\n";
    }
};

class Derived : public Base {
public:
    void show() {                      // Early binding
        cout << "Derived::show (early binding)\n";
    }

    void display() override {          // Late binding
        cout << "Derived::display (late binding)\n";
    }
};

int main() {
    Base* ptr = new Derived();

    ptr->show();       // Early binding → calls Base::show()
    ptr->display();    // Late binding → calls Derived::display()

    return 0;
}

// What this shows:
// show() is non-virtual → early binding → compiler decides → calls Base::show()
// display() is virtual → late binding → runtime decides → calls Derived::display()