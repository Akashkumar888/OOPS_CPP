
// ✅ ✅ What is a Destructor? (Interview-Ready Answer)

// A destructor is a special function that is called automatically when an object is destroyed.
// Its job is to release resources (memory, files, connections, etc.).

// Same name as class but preceded by ~
// No arguments
// No return type
// Only one destructor per class (no overloading)
// ✅ ✅ Destructor Code Example

#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor Called" << endl;
    }

    ~Demo() {
        cout << "Destructor Called" << endl;
    }
};

int main() {
    Demo d; // constructor called here

    // when main ends → destructor automatically called
    return 0;
}

// ✅ When are destructors called?
// When object goes out of scope
// When program ends
// When we manually delete a dynamic object (delete ptr)
