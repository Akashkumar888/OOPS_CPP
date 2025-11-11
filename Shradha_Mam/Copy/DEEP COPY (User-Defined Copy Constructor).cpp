
// Theory
// We write our own copy constructor.
// Allocate new memory for the new object.
// Copy actual data, not just the pointer.
// Both objects become independent.
// ✅ Deep Copy Code Example (Perfect for Interview)

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    float* cgpaPtr;

    Student(string name, float cgpa) {       // parameterized constructor
        this->name = name;
        cgpaPtr = new float;
        *cgpaPtr = cgpa;
    }

    // ✅ DEEP COPY CONSTRUCTOR
    Student(const Student &obj) {
        name = obj.name;
        cgpaPtr = new float;             // allocate new memory
        *cgpaPtr = *obj.cgpaPtr;         // copy the value
    }

    ~Student() {
        delete cgpaPtr;
    }

    void getInfo() {
        cout << "Name: " << name
             << ", CGPA: " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Akash", 7.35);

    // ✅ calls deep copy constructor
    Student s2(s1);

    s1.getInfo();
    s2.getInfo();

    // modify only s2
    *s2.cgpaPtr = 9.5;
    s2.name = "Neha";

    cout << "\nAfter modifying s2:\n";
    s1.getInfo();   // unchanged
    s2.getInfo();   // changed

    return 0;
}

// ✅ Interview Line
// “In deep copy, we allocate separate memory and copy actual values so that modifying one object does not affect the other. This prevents double deletion and memory corruption.”

// ✅ INTERVIEW-READY COMPARISON
// Feature	                 Shallow Copy	                          Deep Copy	                                      Default Copy
// Memory	                Shared pointer	                   New memory allocated	                           Shallow copy for pointers
// Safety	                Unsafe	                           Safe	                                           Unsafe for pointers
// Implemented by	        Default copy constructor	         User-defined copy constructor	                 Compiler
// When to use	            If no pointer members	             If pointer members exist	                       Same as shallow copy