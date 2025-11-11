
// Calling Derived Class Function Through Base Class Pointer
// (Using virtual functions → runtime polymorphism)
// ✅ Full Working Program

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {          // virtual → enables runtime polymorphism
        cout << "Base show" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {         // overriding base method
        cout << "Derived show" << endl;
    }
};

int main() {
    Base* ptr = new Derived();     // base pointer → derived object
    ptr->show();                   // calls Derived::show() → late binding
    delete ptr;                    // safe cleanup
    return 0;
}

// ✅ Interview Explanation (speak this):
// “This works because of virtual functions.
// The function call is resolved at runtime, based on the actual object type (Derived), not the pointer type (Base).”
