
// 1. IS-A Relationship (Inheritance)

// Meaning: One class is a type of another class.
// Used through inheritance.

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() { cout << "Eating\n"; }
};

class Dog : public Animal {   // IS-A: Dog IS-A Animal
public:
    void bark() { cout << "Barking\n"; }
};

int main() {
    Dog d;
    d.eat();   // inherited from Animal
    d.bark();
}

