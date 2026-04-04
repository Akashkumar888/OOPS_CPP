// 18. What is an interface?
// A unique class type known as an interface contains methods but not their definitions. Inside an interface, only method declaration is permitted. You cannot make objects using an interface. Instead, you must put that interface into use and specify the procedures for doing so.



// 1️⃣ What is an Interface?
// An interface defines what a class should do, not how it should do it.
// It only contains method declarations, not implementations.

// Example idea:

// Vehicle
//   start()
//   stop()

// Any class implementing this must define how start() and stop() work.
// 2️⃣ Does C++ Have Interfaces?
// ❌ C++ does NOT have a built-in interface keyword like Java.
// But we can simulate an interface using a:

// 👉 Pure Abstract Class
// A class that contains only pure virtual functions.

// 3️⃣ Pure Virtual Function
// A pure virtual function is declared using:
// virtual void func() = 0;
// Example:
// class Shape {
// public:
//     virtual void draw() = 0;
// };
// Here:
// draw() has no implementation
// Any derived class must implement it

// 4️⃣ Interface Rules (Java Concept)
// An interface:
// Contains only method declarations
// Methods are public
// Cannot create object of interface
// Classes must implement all methods

// 5️⃣ Equivalent Rules in C++
// Using Pure Abstract Class:
// Contains only pure virtual functions
// Any class can inherit
// Derived class must implement functions
// Cannot create object of abstract class

// 6️⃣ Example (Interview Level)
// Interface (Pure Abstract Class)

#include <iostream>
using namespace std;
class Shape {
public:
    virtual void draw() = 0;
};

// Class Implementing Interface
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

// Another Implementation
class Square : public Shape {
public:
    void draw() {
        cout << "Drawing Square" << endl;
    }
};
// Main Function
int main() {

    Shape* ptr;

    Circle c;
    Square s;

    ptr = &c;
    ptr->draw();

    ptr = &s;
    ptr->draw();
}
// 7️⃣ Output
// Drawing Circle
// Drawing Square
// 8️⃣ Why Use Interface?
// Interfaces provide:
// 1️⃣ Abstraction
// Hide implementation details.
// 2️⃣ Loose Coupling
// Classes depend on behavior, not implementation.
// 3️⃣ Polymorphism
// Same interface → different behaviour.
// Example:
// Shape → draw()
// Circle → draw()
// Square → draw()
// 9️⃣ Important Interview Points
// ❓ Can we create object of interface?
// ❌ No
// Shape s;   // Error
// Because it has pure virtual function.
// ❓ How do we access interface methods?
// Using base class pointer.
// Shape* ptr;
// ❓ If derived class doesn't implement function?
// Then it also becomes abstract class.
// 🔟 Your Example Explanation
// Your code:
// class I
// {
//     virtual string getName() = 0;
// };
// This acts as interface.
// Classes implementing it:
// class B : public I
// class C : public I
// Both must implement:
// getName()
// Runtime polymorphism
// I *ptr;
// ptr = &obj1;
// ptr->getName();
// ptr = &obj2;
// ptr->getName();

// Same pointer → different behavior.
// 1️⃣1️⃣ Interview One-Line Definition
// You can say:
// C++ does not have a built-in interface keyword like Java. We implement interfaces using pure abstract classes that contain only pure virtual functions.
// 1️⃣2️⃣ Real World Example
// Interface:
// Payment
//    pay()
// Implementations:
// UPI → pay()
// CreditCard → pay()
// NetBanking → pay()
// 1️⃣3️⃣ Difference: Interface vs Abstract Class
// Feature	Interface	Abstract Class
// Methods	Only abstract	Abstract + normal
// Variables	Not allowed usually	Allowed
// Object creation	Not allowed	Not allowed
// Implementation	No	Partial

// In C++ both are done using abstract classes.
// ✅ Short Interview Answer
// In C++, interfaces are implemented using pure abstract classes. A pure abstract class contains only pure virtual functions declared using =0. Any class inheriting from it must implement those functions, otherwise it becomes abstract.


// 🔷 What is an Interface?
// 👉 Simple Definition
// An interface is a special type of class that contains only method declarations and no implementation.
// 💡 Easy Understanding
// 👉 Interface tells:

// What to do
// Not how to do it
// 💡 Example Idea
// Vehicle
//    start()
//    stop()

// 👉 Any class using this interface must define:
// How start() works
// How stop() works

// 💡 Interview Line (Best Answer)
// An interface is a collection of abstract methods that defines a contract which classes must implement.

// 🔷 Does C++ Have Interfaces?
// 👉 Answer
// ❌ C++ does NOT have a direct interface keyword (like Java)
// 👉 How C++ Implements Interface?
// 👉 Using Pure Abstract Class
// 🔷 What is a Pure Abstract Class?
// A class that contains only pure virtual functions.

// 👉 Pure Virtual Function Syntax
// virtual void functionName() = 0;
// 💡 Example
// class Shape {
// public:
//     virtual void draw() = 0; // pure virtual function
// };

// 👉 This class acts like an interface

// 🔷 Important Rules (Interview Points)
// 👉 Interface Rules
// Contains only method declarations
// No implementation
// Cannot create object
// Methods must be implemented by child classes
// 👉 C++ Equivalent Rules
// Uses pure abstract class
// Contains only =0 functions
// Cannot create object
// Derived class must implement all functions
// 🔷 Example (Very Important for Interview)

#include <iostream>
using namespace std;

// Interface (Pure Abstract Class)
class Shape {
public:
    virtual void draw() = 0;
};

// Implementation 1
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

// Implementation 2
class Square : public Shape {
public:
    void draw() {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Shape* ptr;

    Circle c;
    Square s;

    ptr = &c;
    ptr->draw();

    ptr = &s;
    ptr->draw();
}

// 🔷 Output
// Drawing Circle
// Drawing Square
// 🔷 Why Do We Use Interface?
// 👉 1. Abstraction
// Hides implementation details
// Shows only required behavior
// 👉 2. Loose Coupling
// Classes depend on behavior, not implementation
// Easier to change code
// 👉 3. Polymorphism
// Same interface → different behavior

// 👉 Example:

// Shape → draw()
// Circle → draw()
// Square → draw()
// 🔷 Important Interview Questions
// ❓ Can we create object of interface?
// ❌ No
// Shape s; // Error
// ❓ How do we access interface methods?
// 👉 Using base class pointer
// Shape* ptr;
// ❓ If child class does not implement function?
// 👉 It becomes an abstract class
// 🔷 Real-World Example
// 👉 Interface: Payment
// pay()
// 👉 Implementations:

// UPI → pay()
// Credit Card → pay()
// Net Banking → pay()

// 👉 Same method → different behavior
// 🔥 Final Interview Summary

// In C++, interfaces are implemented using pure abstract classes. These classes contain only pure virtual functions, and any derived class must implement them. Objects of such classes cannot be created directly.

