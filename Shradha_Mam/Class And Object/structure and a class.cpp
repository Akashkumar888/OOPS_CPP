
// The structure is also a user-defined datatype in C++ similar to the class with the following differences:
// The major difference between a structure and a class is that in a structure, the members are set to public by default while in a class, members are private by default.
// The other difference is that we use struct for declaring structure and class for declaring a class in C++.


// 🔷 Difference Between Structure and Class in C++

// 👉 1. Basic Idea
// A structure (struct) and a class (class) are both user-defined data types in C++.
// Both can contain:
// Variables (data members)
// Functions (methods)

// 👉 So technically, they are almost the same — but differ mainly in default behavior.

// 👉 2. Main Difference (VERY IMPORTANT)
// 🔹 Structure → Members are public by default
// 🔹 Class → Members are private by default
// 🔷 Example 1: Structure

#include <iostream>
using namespace std;

struct Student {
    string name;  // public by default
};

int main() {
    Student s1;
    s1.name = "Rahul";   // allowed

    cout << s1.name;
}

// 💡 Explanation
// No public keyword written
// Still accessible → because struct members are public by default
// 🔷 Example 2: Class

#include <iostream>
using namespace std;

class Student {
    string name;  // private by default
};

int main() {
    Student s1;
    s1.name = "Rahul";   // ❌ ERROR (not accessible)
}

// 💡 Explanation
// No public keyword
// So name is private
// Cannot access directly
// 🔷 Fix (Using public in Class)

#include <iostream>
using namespace std;

class Student {
public:
    string name;
};

int main() {
    Student s1;
    s1.name = "Rahul";   // ✅ now allowed

    cout << s1.name;
}

// 👉 3. Syntax Difference
// Structure is declared using:
// struct Student { };
// Class is declared using:
// class Student { };
// 👉 4. When to Use
// ✔ Use struct when:
// You want simple data storage
// No need for strict security
// ✔ Use class when:
// You need data hiding (encapsulation)
// Building large applications (OOP)
// 🔥 Final Interview Summary

// In C++, both struct and class are similar, but the key difference is that struct members are public by default, while class members are private by default. Struct is generally used for simple data, whereas class is used for full object-oriented programming.