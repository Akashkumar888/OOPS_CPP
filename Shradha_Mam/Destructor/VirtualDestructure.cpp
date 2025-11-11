
//  ✅ 4. Can Destructors be Virtual in C++?
// Answer:
// Yes. Destructors should be virtual if we delete an object using a base class pointer.
// ✅ Why?
// To ensure the derived class destructor is called and resources are freed correctly.

#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {   // virtual destructor
        cout << "Base destroyed" << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived destroyed" << endl;
    }
};

int main() {
    Base* b = new Derived();   // base pointer → derived object
    delete b;                  // calls Derived destructor first, then Base // calls Derived destructor → then Base destructor
    return 0;
}

// ✅ Interview Explanation (speak this):
// “Destructor is virtual so that deleting through base pointer calls the derived destructor first, then base destructor.
// This prevents memory leaks and ensures correct cleanup.”

// ✅ 4. What is a virtual destructor and why needed?
// A virtual destructor ensures that when deleting an object via a base class pointer, the derived class destructor is called.
// Prevents memory leaks in polymorphic classes.
