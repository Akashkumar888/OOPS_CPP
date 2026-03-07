
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


// 🔹 1. Stack vs Heap Memory (Very Important Concept)
// ✅ Stack Memory
// Automatically managed by compiler.
// Local variables are stored here.
// Memory is freed automatically when function ends.
// Fast.
// No need to use delete.
// Example:

void fun() {
    int x = 10;   // stored in stack
}   // x automatically destroyed here

// ✅ Heap Memory
// Manually allocated using new.
// Must manually free using delete.
// Slower but flexible.
// If not deleted → Memory Leak.
// Example:

int* ptr = new int;   // allocated on heap
delete ptr;           // must free manually

// 🔹 2. Destructor – Stack vs Heap Object
// Case 1️⃣: Stack Object
class Test {
public:
    ~Test() {
        cout << "Destructor Called\n";
    }
};

int main() {
    Test t1;  // stack object
}   // destructor automatically called

// ✅ Output:
// Destructor Called
// ✔ Destructor automatically runs when object goes out of scope.


// Case 2️⃣: Heap Object
int main() {
    Test* t2 = new Test();   // heap object
    delete t2;               // must delete manually
}

// ✔ If you don’t write delete t2;
// 👉 Destructor will NOT run
// 👉 Memory leak happens
// 🔥 Important Interview Line
// “Destructor automatically frees stack objects, but heap objects must be manually deleted using delete keyword.”
