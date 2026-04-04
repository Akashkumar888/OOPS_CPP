
// ✅ ✅ Constructor Overloading
// Multiple constructors with different parameters.
// Constructor overloading means:
// Having multiple constructors in the same class with the same name but different parameter lists.
// C++ decides which constructor to run at compile time based on the arguments passed while creating the object.


#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Default Constructor" << endl;
    }
    Demo(int x) {
        cout << "Parameterized Constructor: " << x << endl;
    }
};

int main() {
    Demo d1;
    Demo d2(10);
    return 0;
}
// Key Interview Lines
// “Constructor overloading is possible in C++ by defining multiple constructors with different parameter lists.”
// “The compiler decides which constructor to call based on the arguments passed while creating the object.”
// “Demo d1; calls the default constructor, and Demo d2(10); calls the parameterized constructor.”
// “Constructors cannot be overridden because they are not inherited, but they can be overloaded within the same class.”



// ✅ Can constructors be overridden?
// Answer (C++ / Java):
// No, constructors cannot be overridden. They can only be overloaded or chained.

// ✅ Interview-Ready Explanation (C++ Version)
// In C++, constructor overriding is impossible because:
// Constructors are not inherited by derived classes.
// A child class does NOT get copies of the parent’s constructors.
// Overriding requires:
// same signature
// same name
// inheritance

// virtual mechanism
// Constructors do not meet these rules.
// Constructors belong to their own class only and are used to initialize that class’s objects.
// So you cannot override them.
// ✅ ✅ But constructors CAN be overloaded
// You can write multiple constructors in the same class with different parameters.
// This is overloading, NOT overriding.
class Demo {
public:
    Demo() { }
    Demo(int x) { }
};

// ✅ ✅ Constructors CAN be chained (important!)
// Use initializer list:
class Demo {
public:
    Demo() : Demo(10) {   // chaining to parameterized constructor
        cout << "Default constructor\n";
    }

    Demo(int x) {
        cout << "Parameterized constructor: " << x << endl;
    }
};


// ✅ ✅ Why overriding is impossible (short answer)
// Overriding happens through inheritance, but constructors are not inherited.
// Therefore, constructors cannot be overridden.

// ✅ If interviewer asks “Why can't we override them?”
// Say this:
// Constructors are meant for initializing objects of their own class, not child classes.
// They are not virtual and cannot participate in runtime polymorphism.
// Each class must define its own constructor; they are not inherited.


// What is Constructor Overloading?
// Constructor overloading means:

// Defining multiple constructors in the same class
// With the same name as the class
// But with different parameter lists
// 👉 The compiler decides at compile time which constructor to call based on the arguments passed while creating the object.
// ✔ This is a form of compile-time polymorphism.
// 📌 Why Constructor Overloading is Needed?
// To create objects in different ways
// To provide default and customized initialization
// To improve flexibility and readability
// 🔹 Basic Example

#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Default Constructor" << endl;
    }

    Demo(int x) {
        cout << "Parameterized Constructor: " << x << endl;
    }
};

int main() {
    Demo d1;       // calls default constructor
    Demo d2(10);   // calls parameterized constructor
    return 0;
}

// 🔹 Output
// Default Constructor
// Parameterized Constructor: 10

// 🔹 How the Compiler Decides (IMPORTANT)
// Object Creation	Constructor Called
// Demo d1;	Demo()
// Demo d2(10);	Demo(int)

// 👉 Decision is made at compile time based on arguments.
// 🔹 Rules of Constructor Overloading
// ✔ Constructor name must be same as class name
// ✔ Parameter list must be different
// ❌ Return type is not allowed (constructors have no return type)
// ✔ Can differ by:

// Number of parameters
// Type of parameters
// Order of parameters

// 🔹 Constructor Overloading vs Method Overloading
// Feature	Constructor Overloading	Method Overloading
// Name	Same as class	Same function name
// Return type	❌ No return type	✔ Allowed
// Inherited	❌ No	✔ Yes
// Overridden	❌ No	✔ Yes
// Polymorphism	Compile-time	Compile-time
// 🔹 Important Interview Clarification
// ❌ Constructors Cannot Be Overridden
// Why?
// Constructors are not inherited
// Overriding requires inheritance
// ✔ But constructors can be overloaded inside the same class.

// 🔹 Is Constructor Overloading Same as Method Overloading?
// ✅ Conceptually YES
// ❌ Technically NO (small differences)
// Similarities:
// Same name
// Different parameter list
// Compile-time decision

// Differences:
// Constructor name is always the class name
// Constructors have no return type
// Constructors are not inherited

// 🔹 Real-Life Example
// 🔹 Mobile Phone Object
// Mobile m1();           // default phone
// Mobile m2("Samsung");  // brand specified
// Mobile m3("Apple", 8); // brand + RAM


// Same object → different ways of creation.

// 🔹 Common Interview Traps ❌
// ❌ This is NOT constructor overloading
class Demo {
public:
    Demo(int x);
    Demo(float x);   // Ambiguous if passed integer literal
};

// ❌ Ambiguous call
// Demo d(10);  // compiler confusion

// ⭐ Interview-Perfect Lines (MEMORIZE)
// “Constructor overloading allows a class to have multiple constructors with different parameter lists, enabling objects to be initialized in different ways.”
// “Constructors cannot be overridden because they are not inherited, but they can be overloaded within the same class.”
// “Constructor overloading is similar to method overloading, except the constructor name is always the class name and it has no return type.”


// 🔷 Can we overload constructors in a class?
// 👉 Simple Answer
// ✅ Yes, we can overload constructors in a class.
// 🔷 What is Constructor Overloading?
// 👉 Definition
// Constructor overloading means having multiple constructors in the same class with:

// Different number of parameters, or
// Different types of parameters
// 💡 Key Idea
// 👉 Same constructor name (class name)
// 👉 Different parameter list

// 💡 Interview Line (Best Answer)
// Constructor overloading is a feature where a class can have multiple constructors with different parameter lists to initialize objects in different ways.

// 🔷 Why do we use Constructor Overloading?
// 👉 To initialize objects in different ways

// 💡 Example Situations
// Create object with:
// No values
// One value
// Multiple values

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // 1. Default constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // 2. Parameterized constructor (one parameter)
    Student(string n) {
        name = n;
        age = 0;
    }

    // 3. Parameterized constructor (two parameters)
    Student(string n, int a) {
        name = n;
        age = a;
    }
};

int main() {
    Student s1;                // default
    Student s2("Rahul");       // one parameter
    Student s3("Aman", 20);    // two parameters

    cout << s1.name << " " << s1.age << endl;
    cout << s2.name << " " << s2.age << endl;
    cout << s3.name << " " << s3.age << endl;
}

// ✔ Output
// Unknown 0
// Rahul 0
// Aman 20
// 🔷 How does it work?
// 👉 The compiler decides which constructor to call based on:

// Number of arguments
// Type of arguments

// 👉 This is called Compile-Time Polymorphism
// 🔷 Important Points
// Constructors have same name as class
// Must differ in parameter list
// Cannot differ only by return type
// Helps in flexible object creation
// 🔷 Example (Java – Interview Friendly)

class Student {
    String name;
    int age;

    Student() {
        name = "Unknown";
        age = 0;
    }

    Student(String n) {
        name = n;
    }

    Student(String n, int a) {
        name = n;
        age = a;
    }
}

// 🔥 Final Interview Summary
// Yes, constructors can be overloaded by defining multiple constructors with different parameter lists. It helps in creating objects in different ways and is an example of compile-time polymorphism.