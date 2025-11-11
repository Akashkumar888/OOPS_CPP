// ✅ What is a Constructor? (Interview-Ready Answer)
// A constructor is a special function inside a class that is called automatically when an object is created.
// Its purpose is to initialize data members.

// It has same name as the class
// It has no return type (not even void)
// Called automatically

// ✅ Types of Constructors in C++
// Default / Non-parameterized constructor
// Parameterized constructor
// Copy constructor
// (Bonus) Constructor Overloading

// ✅ ✅ 1. Default / Non-Parameterized Constructor
// Called automatically when you create an object without arguments.

// ✅ Rule:
// If you don’t write any constructor, C++ provides its own default constructor.

#include <iostream>
using namespace std;

class Student {
public:
    int age;

    // Non-parameterized constructor
    Student() {
        age = 18;
        cout << "Default Constructor Called" << endl;
    }
};

int main() {
    Student s; // constructor automatically called
    cout << "Age = " << s.age << endl;
    return 0;
}

// ✅ Important Rule for Interview

// If you do not create any constructor, C++ automatically creates a default constructor.
// As soon as you create your own constructor, C++ stops generating the default one.

// ✅ Important Rule About Constructors in C++ (Interview-Ready)
// ✅ 1. If you do NOT write any constructor → C++ automatically gives you:
// A default constructor
// A copy constructor
// A copy assignment operator

// ✅ 2. When you write your OWN constructor → automatic default constructor is removed
// ✅ If you define any constructor (non-parameterized OR parameterized):
// ➡ C++ stops generating its own default constructor.
// This means:
// If you write a parameterized constructor only,
// → C++ does not give a default constructor.
// If you write a non-parameterized constructor,
// → That becomes your default constructor.

// ✅ Interview Line:
// “Creating any constructor (default or parameterized) blocks C++ from generating the compiler-provided default constructor.”
