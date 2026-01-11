
// ✅ What is this keyword? (Java + C++ explanation)
// ✅ Interview Definition

// this refers to the current object — the object on which the method is being called.
// ✅ Why use this?

// To access current object’s variables
// To resolve naming conflicts (parameter name = variable name)
// ✅ Example (Java/C++ logic is same):

class Student {
private:
    int age;

public:
    Student(int age) {
        this->age = age;  // "this" refers to current object
    }
};

// ✅ Simple Way to Explain in Interview:
// “this is a pointer/reference to the current object.
// It helps differentiate between instance variables and parameters.”
// 🔹 Instance Variables vs Parameters
// In a class, we deal with two common things:
// Instance Variables (Data Members)
// Parameters (Function Inputs)
// 🧱 Instance Variables
// Instance variables are variables that belong to an object of a class.
// They are declared inside the class but outside any method.

// They represent the state of an object.
// class Student {
// private:
//     int age;   // ← instance variable
// };


// Each object gets its own copy
// They exist as long as the object exists
// Accessed using the object (or this inside the class)

// 🎯 Parameters
// Parameters are temporary variables passed to a function or constructor.
// They exist only during function execution.

// Student(int age) {  // ← age is a parameter
//     this->age = age;
// }


// They are local to the function
// Destroyed after the function ends
// Used to receive values from outside
// 🔄 Why this is Needed?
// Here, both have the same name age:

// class Student {
// private:
//     int age;   // instance variable

// public:
//     Student(int age) {   // parameter
//         this->age = age;
//     }
// };


// age → refers to the parameter
// this->age → refers to the instance variable
// So, this resolves the conflict.

// 🗣️ Interview Line
// “Instance variables are data members of a class that belong to an object and store its state.
// Parameters are temporary variables passed to methods or constructors.
// When both have the same name, this is used to refer to the instance variable of the current object.”