#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }
};

// Derived class 1
class Mammal : public Animal {
public:
    void run() {
        std::cout << "Mammal is running." << std::endl;
    }
};

// Derived class 2
class Dog : public Mammal {
public:
    void bark() {
        std::cout << "Dog is barking." << std::endl;
    }
};

int main() {
    // Create an object of the most derived class
    Dog myDog;

    // Accessing methods from different levels of inheritance
    myDog.eat();
    myDog.run();
    myDog.bark();

return 0;
}