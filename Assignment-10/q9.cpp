#include <iostream>

// Base class
class Animal {
protected:
    std::string species;

public:
    // Constructor in the base class
    Animal(const std::string& s) : species(s) {
        std::cout << "Animal constructor called." << std::endl;
    }

    // Display method to show details
    void display() {
        std::cout << "Species: " << species << std::endl;
    }
};

// Derived class
class Dog : public Animal {
private:
    std::string breed;

public:
    // Constructor in the derived class
    Dog(const std::string& s, const std::string& b) : Animal(s), breed(b) {
        std::cout << "Dog constructor called." << std::endl;
    }

    // Display method to show details, overrides the base class method
    void display() {
        Animal::display(); // Call the display method from the base class
        std::cout << "Breed: " << breed << std::endl;
    }
};

int main() {
    // Creating a Dog object
    Dog myDog("Canine", "Golden Retriever");

    // Displaying details of the dog
    myDog.display();

return 0;
}