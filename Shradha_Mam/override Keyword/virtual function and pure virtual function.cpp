
// 29. What is the virtual function and pure virtual function?
// A virtual function is a function that is used to override a method of the parent class in the derived class. It is used to provide abstraction in a class.

// In C++ and C#, a virtual function is declared using the virtual keyword,
// In Java, every public, non-static, and non-final method is a virtual function.
// Python methods are always virtual.
// Example:




class base {
    virtual void print() {
        cout << "This is a virtual function";
    }
}
// A pure virtual function, also known as an abstract function, is a member function that doesn't contain any statements. This function is defined in the derived class if needed.
// Example:


class base {
    virtual void pureVirFunc() = 0;
}
// In Python, we achieve this using @abstractmethod from the ABC (Abstract Base Class) module.


// 🔷 What is a Virtual Function in C++?
// 👉 Definition
// A virtual function is a member function of a class that is declared using the virtual keyword and is redefined (overridden) in a derived class.

// 💡 Key Idea
// 👉 It supports runtime polymorphism
// 👉 Function call is decided at runtime, not compile time

// 💡 Interview Line
// A virtual function is a function declared in a base class using the virtual keyword and overridden in a derived class to achieve runtime polymorphism.

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base* ptr;
    Derived d;

    ptr = &d;
    ptr->show();  // runtime decision
}

// ✔ Output
// Derived class show function
// 💡 Explanation
// Pointer is of Base type
// Object is of Derived type
// Function call depends on object type at runtime
// ✔ Important Points
// Declared using virtual
// Achieves runtime polymorphism
// Called using base class pointer/reference
// Uses dynamic binding
// 🔷 What is a Pure Virtual Function?
// 👉 Definition
// A pure virtual function is a function that has no implementation in the base class and is declared using = 0.
// 💡 Key Idea
// 👉 Forces derived class to implement the function
// 💡 Interview Line
// A pure virtual function is a function declared with = 0 in the base class and must be implemented by derived classes, making the class abstract.

// 🔷 Syntax
// virtual void functionName() = 0;
// 🔷 Example (C++)
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() = 0;  // pure virtual function
};

class Derived : public Base {
public:
    void show() {
        cout << "Implemented in Derived class" << endl;
    }
};

int main() {
    // Base b; ❌ Not allowed (abstract class)
    Derived d;
    d.show();
}


// ✔ Output
// Implemented in Derived class
// 💡 Explanation
// Base class has no implementation
// Derived class must implement
// Base class becomes abstract class
// 🔷 Key Differences (Line-by-Line)
// 👉 Virtual Function
// Has implementation in base class
// Can be overridden in derived class
// Not compulsory to override
// 👉 Pure Virtual Function
// No implementation in base class
// Must be overridden in derived class
// Makes class abstract
// 🔥 Final Interview Summary
// 👉 Virtual Function
// Used to achieve runtime polymorphism with default implementation.
// 👉 Pure Virtual Function
// Used to enforce abstraction by forcing derived classes to implement the function.
// 🧠 Golden Line (Must Say)
// Virtual functions enable runtime polymorphism, while pure virtual functions define a contract that derived classes must implement, making the base class abstract.