
// The word "Polymorphism" means having many forms. It is the property of some code to behave differently for different contexts. For example, in C++ language, we can define multiple functions having the same name but different working depending on the context.

// Polymorphism can be classified into two types based on the time when the call to the object or function is resolved. They are as follows:

// Compile Time Polymorphism
// Runtime Polymorphism

// 👉 Meaning of the Word
// Polymorphism = Poly (many) + Morph (forms)
// 👉 It means “many forms”
// 👉 Simple Definition

// Polymorphism is the ability of a function or object to behave differently in different situations.
// 💡 Easy Understanding
// 👉 Same function name, different behavior

// 💡 Real-Life Example
// Think of a person 👤

// At home → acts as a father
// At office → acts as an employee
// With friends → acts as a friend

// 👉 Same person, different roles → Polymorphism
// 💡 Programming Example (C++ idea)
// int add(int a, int b);
// double add(double a, double b);

// 👉 Same function name (add) but different behavior

// 💡 Interview Definition (Best Answer)
// Polymorphism is a feature of OOP that allows the same function or method to behave differently based on the context in which it is used.


// 🔶 1. Compile-Time Polymorphism (Static Binding)
// 👉 Definition
// The function call is resolved at compile time (before execution).
// 💡 Key Idea
// 👉 Compiler already knows which function to call

// 🔹 Types of Compile-Time Polymorphism

// 🔸 1. Function Overloading
// 👉 Concept
// Same function name
// Different parameters (type/number)
// ✔ Example:
int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

// ✔ Explanation
// 👉 Compiler decides which function to call based on arguments

// ✔ Features:
// Improves readability
// No need to create multiple function names

// 🔸 2. Operator Overloading
// 👉 Concept
// Operators behave differently for different data types
// ✔ Example:
// int a = 5 + 3;       // addition
// string s = "A" + "B"; // concatenation
// ✔ Explanation
// 👉 Same + operator works differently

// ✔ Features:
// Makes code intuitive
// Improves readability

// Compile time polymorphism, also known as static polymorphism or early binding is the type of polymorphism where the binding of the call to its code is done at the compile time. Method overloading or operator overloading are examples of compile-time polymorphism.

// 🔶 2. Runtime Polymorphism (Dynamic Binding)
// 👉 Definition
// The function call is resolved at runtime (during execution).
// 💡 Key Idea
// 👉 Decision is made while the program is running


// 🔸 Function Overriding
// 👉 Concept
// Same function in parent and child class
// Child class provides its own implementation
// ✔ Example:
#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes sound";
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks";
    }
};

int main() {
    Dog d;
    d.sound();
}

// ✔ Explanation
// 👉 The function called depends on the object type at runtime

// ✔ Features:
// Achieved using inheritance
// Uses virtual functions (in advanced cases)
// Supports dynamic behavior
// 🔷 Key Differences
// 👉 Compile-Time Polymorphism
// Decision made at compile time
// Faster execution
// Example: Function Overloading
// 👉 Runtime Polymorphism
// Decision made at runtime
// Slightly slower
// Example: Function Overriding

// 🔥 Final Interview Summary (VERY IMPORTANT)
// 👉 Polymorphism means many forms
// 👉 It allows:
// Same function name
// Different behavior
// Types:
// 1. Compile-Time Polymorphism
// Function Overloading
// Operator Overloading
// 2. Runtime Polymorphism
// Function Overriding

// 🧠 Golden Line (Must Say in Interview)
// Polymorphism allows the same interface to be used for different data types or objects, improving flexibility and code reusability.
// Also known as dynamic polymorphism or late binding, runtime polymorphism is the type of polymorphism where the actual implementation of the function is determined during the runtime or execution. Function overriding is an example of this method.
