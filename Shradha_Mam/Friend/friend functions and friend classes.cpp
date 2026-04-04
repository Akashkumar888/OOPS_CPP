
// 28. What are friend functions and friend classes?
// Friend Functions: A friend function is a special function that is allowed to access private and protected data of a class, even though it's not a member of the class.

// Friend Class: A friend class is a class that can access the private and protected members of another class. It's like allowing a trusted friend or a group of friends to see and change your personal information, which others cannot.

// 🔷 What are Friend Functions and Friend Classes in C++?
// 🔶 1. Friend Function
// 👉 Definition
// A friend function is a function that is not a member of a class, but it is allowed to access private and protected members of that class.
// 💡 Key Idea
// 👉 Normal functions cannot access private data
// 👉 But a friend function can access it with permission

// 💡 Interview Line
// A friend function is a non-member function that is declared inside a class using the friend keyword and is allowed to access its private and protected members.

// 🔷 Syntax
class ClassName {
    friend returnType functionName();
};


// 🔷 Example
#include <iostream>
using namespace std;

class Demo {
private:
    int x;

public:
    Demo() {
        x = 10;
    }

    // declaring friend function
    friend void show(Demo d);
};

// friend function definition
void show(Demo d) {
    cout << "Value of x: " << d.x; // accessing private data
}

int main() {
    Demo d;
    show(d);
}

// ✔ Output
// Value of x: 10
// ✔ Important Points
// Not a member of class
// Declared using friend keyword
// Can access private and protected data
// Called like a normal function

// 🔶 2. Friend Class
// 👉 Definition
// A friend class is a class that is allowed to access private and protected members of another class.
// 💡 Key Idea
// 👉 One class gives access permission to another class
// 💡 Interview Line
// A friend class is a class whose member functions can access the private and protected members of another class.

// 🔷 Syntax
class A {
    friend class B;
};

// 🔷 Example

#include <iostream>
using namespace std;

class A {
private:
    int x;

public:
    A() {
        x = 100;
    }

    friend class B; // B is friend
};

class B {
public:
    void show(A obj) {
        cout << "Value of x: " << obj.x; // accessing private data
    }
};

int main() {
    A a;
    B b;
    b.show(a);
}


// ✔ Output
// Value of x: 100
// ✔ Important Points
// One class can access another class's private data
// Useful for closely related classes
// Breaks strict encapsulation (use carefully)
// 🔷 Difference Between Friend Function and Friend Class
// 👉 Friend Function
// Only a single function gets access
// Declared using friend inside class
// 👉 Friend Class
// All functions of that class get access
// Declared using friend class

// 🔥 Final Interview Summary
// 👉 Friend Function
// A non-member function that can access private data of a class.
// 👉 Friend Class
// A class whose member functions can access private data of another class.
// 🧠 Golden Line
// Friend functions and friend classes provide controlled access to private data, but they should be used carefully as they break encapsulation.