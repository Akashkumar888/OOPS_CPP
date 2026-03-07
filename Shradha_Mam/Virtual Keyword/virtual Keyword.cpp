
// 1️⃣ What is virtual Keyword?
// Definition (Interview)
// The virtual keyword is used in a base class to indicate that a function can be overridden in a derived class and should use runtime polymorphism (dynamic binding).
// Without virtual, C++ decides which function to call at compile time.

// Example Using virtual

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {   // virtual function
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {

    Animal* a;
    Dog d;

    a = &d;

    a->sound();  // calls Dog's sound()

    return 0;
}

// Output
// Dog barks
// Why?
// Because:
// virtual → runtime decision