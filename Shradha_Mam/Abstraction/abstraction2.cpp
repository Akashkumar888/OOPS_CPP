
// ✅ Data Abstraction (Interview-Ready Answer)
// Data abstraction means showing only the essential details to the user and hiding the internal implementation.
// It allows the user to focus on what an object does, not how it does it.

// ✅ Simple Explanation (Speak This)
// “Abstraction is like using a TV remote.
// You only see the buttons, not the internal circuits.
// You know what the remote does, but you don’t know how it works inside.
// That hidden internal work is abstraction.”

// ✅ Real-World Examples
// ✅ 1. ATM Machine
// You can withdraw money by pressing buttons.
// You don’t see how it connects to the bank server internally.
// Only essential features are shown.
// This is abstraction.

// ✅ 2. Car Steering
// You turn the steering wheel → car turns.
// You don’t know how gears, mechanisms work internally.
// Only the necessary interface is provided.

#include <iostream>
using namespace std;

// Abstraction Example
class Car {
public:
    void start() {
        cout << "Car started" << endl;
    }

private:
    void igniteFuel() {  }     // internal detail (hidden)
    void checkSensors() { }    // internal detail (hidden)
};

int main() {
    Car myCar;

    // User only sees essential feature
    myCar.start();    // starts the car

    // Hidden details cannot be accessed:
    // myCar.igniteFuel();  // ERROR
    // myCar.checkSensors(); // ERROR

    return 0;
}

// ✅ How to explain this in your interview
// “In this program, the user only calls start().
// The complex internal processes like fuel ignition and sensor checking are hidden inside the class using private.
// This is abstraction: showing only what is needed and hiding the implementation details.”


// Abstraction is similar to data encapsulation and is very important in OOP. It means showing only the necessary information and hiding the other irrelevant information from the user. Abstraction is implemented using classes and interfaces.


// 🔷 What is an Abstract Class in C++?
// 👉 Definition
// An abstract class is a class that cannot be instantiated (object cannot be created) and is mainly used as a base class for inheritance.

// 💡 Key Idea
// 👉 It contains at least one pure virtual function (= 0)
// 💡 Interview Line (Best Answer)

// An abstract class in C++ is a class that contains at least one pure virtual function and cannot be instantiated. It is used to provide a common interface for derived classes.

// 🔷 Why Do We Use Abstract Class?
// 👉 To:
// Provide a common structure (interface)
// Force derived classes to implement required functions
// Achieve abstraction
// 🔷 Syntax

class ClassName {
public:
    virtual void functionName() = 0; // pure virtual function
};



#include <iostream>
using namespace std;

class Shape {
public:
    // pure virtual function
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    // Shape s; ❌ Not allowed (abstract class)

    Shape* ptr;

    Circle c;
    Square s;

    ptr = &c;
    ptr->draw();

    ptr = &s;
    ptr->draw();
}


// ✔ Output
// Drawing Circle
// Drawing Square
// 🔷 Important Points (VERY IMPORTANT)

// 👉 1. Cannot Create Object
// Shape s; // ❌ ERROR

// 👉 2. Must Be Inherited
// Used as a base class

// Derived class must implement all pure virtual functions
// 👉 3. Can Have Normal Functions Also
class Demo {
public:
    void normalFunc() {
        cout << "Normal function";
    }

    virtual void pureFunc() = 0;
};

// 👉 4. If Not Implemented
// Derived class also becomes abstract class

// 🔷 Real-Life Example
// 👉 Abstract Class: Vehicle

// start()
// stop()

// 👉 Derived Classes:
// Car → start(), stop()
// Bike → start(), stop()

// 👉 Different implementation, same interface

// 🔥 Final Interview Summary
// 👉 Abstract Class:
// Cannot create object
// Contains at least one pure virtual function
// Used for inheritance and abstraction

// 🧠 Golden Line (Must Say)
// An abstract class is used to define a common interface for derived classes and ensures that certain functions must be implemented by them.