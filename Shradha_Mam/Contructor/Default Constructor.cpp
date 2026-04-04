// The default constructor is a constructor that doesn't take any arguments. It is a non-parameterized constructor that is automatically defined by the compiler when no explicit constructor definition is provided.

// 🔷 Types of Constructors in C++
// The main types of constructors are:

// Default Constructor
// Non-Parameterized Constructor
// Parameterized Constructor
// Copy Constructor

// 🔶 1. Default Constructor
// 👉 Definition

// A default constructor is a constructor that takes no arguments and is automatically created by the compiler if no constructor is defined.
// 💡 Key Idea
// 👉 Provided by compiler automatically

// ✔ Example
class Demo {
public:
    int x;
};

int main() {
    Demo d; // default constructor called automatically
}

// ✔ Important Points
// No parameters
// Initializes values to default
// Created only if no constructor exists