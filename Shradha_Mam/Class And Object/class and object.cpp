
// 🔷 What is a Class?

// 👉 Definition (Simple)
// A class is a blueprint or template used to create objects.

// 👉 Explanation
// It is a user-defined data type
// It contains:
// Data members (variables) → store data
// Member functions (methods) → perform operations on data

// 💡 Easy Understanding
// 👉 Think of a class like a design of a house

// It defines structure
// But it is not a real house

// 💡 Interview Line (Best Answer)
// A class is a user-defined data type that acts as a blueprint for creating objects, containing data members and member functions.

// A class is a building block of Object-Oriented Programs. It is a user-defined data type that contains the data members and member functions that operate on the data members. It is like a blueprint or template of objects having common properties and methods.


// 🔷 What is an Object?
// 👉 Definition (Simple)
// An object is an instance of a class.

// 👉 Explanation
// Object is the real implementation of a class
// It uses:
// Class variables
// Class functions
// 💡 Easy Understanding

// 👉 If class = house design
// 👉 Object = actual house 🏠


// 💡 Key Points
// Objects have:
// State → data (name, age)
// Behavior → functions (study(), walk())
// You cannot use class members directly
// 👉 You must create an object first

// 💡 Interview Line (Best Answer)
// An object is an instance of a class that represents a real-world entity and allows access to the class's data members and methods.

// An object is an instance of a class. Data members and methods of a class cannot be used directly. We need to create an object (or instance) of the class to use them. In simple terms, they are the actual world entities that have a state and behaviour.

// 🔷 Example (C++)
#include <iostream>
using namespace std;

// defining class
class Student {
public:
    string name;
};

int main()
{
    // creating object
    Student student1;

    // assigning value
    student1.name = "Rahul";

    cout << "student1.name: " << student1.name;

    return 0;
}

// 🔷 Output
// student1.name: Rahul
// 🔥 Final Interview Summary
// 👉 Class
// Blueprint/template used to create objects.
// 👉 Object
// Instance of a class that holds actual data and behavior.
