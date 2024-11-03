#include <iostream>

// Base class
class Base {
private:
    int privateMember;

protected:
    int protectedMember;

public:
    int publicMember;

    // Constructor to initialize members
    Base(int privateVal, int protectedVal, int publicVal)
        : privateMember(privateVal), protectedMember(protectedVal), publicMember(publicVal) {}

    // Display method to show member values
    void display() {
        std::cout << "Private: " << privateMember << ", Protected: " << protectedMember
                  << ", Public: " << publicMember << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Constructor to initialize base class members
    Derived(int privateVal, int protectedVal, int publicVal)
        : Base(privateVal, protectedVal, publicVal) {}

    // Method to access and display base class members
    void accessBaseMembers() {
        // privateMember is not accessible here
        std::cout << "Protected in Derived: " << protectedMember << ", Public in Derived: " << publicMember << std::endl;
    }
};

int main() {
    // Creating an object of the derived class
    Derived derivedObject(1, 2, 3);

    // Accessing and displaying base class members through the derived class
    derivedObject.accessBaseMembers();

return 0;
}