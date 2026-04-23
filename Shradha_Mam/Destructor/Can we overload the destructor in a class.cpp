
// 🔷 Can we overload the destructor in a class?
// 👉 Simple Answer

// ❌ No, a destructor cannot be overloaded in a class.
// 👉 There can be only one (1) destructor in a class.

// 🔷 What is a Destructor?
// 👉 Definition
// A destructor is a special member function that is automatically called when an object is destroyed.

// 💡 Key Points
// Same name as class but with ~ (tilde)
// No return type
// No parameters
// Used to free memory / resources
// ✔ Example
#include <iostream>
using namespace std;

class Demo {
public:
    ~Demo() {
        cout << "Destructor called";
    }
};

int main() {
    Demo d;
}
// 🔷 Why Destructor Cannot Be Overloaded?
// 👉 1. No Parameters Allowed
// Destructor does not take any arguments
// Overloading requires different parameters
// 👉 So, overloading is not possible
// 👉 2. Only One Way to Destroy Object
// Object destruction has only one process
// Multiple destructors would create confusion
// 👉 3. Automatic Call by Compiler
// Destructor is called automatically when object goes out of scope
// Compiler expects only one destructor
// 🔷 What Happens If We Try?

// ❌ This is NOT allowed:

// class Demo {
// public:
//     ~Demo() {}          // valid
//     ~Demo(int x) {}     // ❌ ERROR
// };

// 👉 Compiler will give error because:

// Destructor cannot have parameters
// Multiple destructors are not allowed
// 🔷 Important Points (Interview Focus)
// Only one destructor per class
// Cannot be overloaded
// Cannot take arguments
// Automatically invoked
// 🔥 Final Interview Line

// A destructor cannot be overloaded because it does not take parameters and only one destructor is allowed in a class to ensure proper and unambiguous object destruction.