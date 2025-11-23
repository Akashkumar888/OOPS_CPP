
// ✅ What is OOP?
// OOP (Object-Oriented Programming) is a programming paradigm where programs are built using objects.
// An object =
// ✅ data (variables → also called attributes)
// ✅ behavior (functions → also called methods)
// OOP makes code:
// easier to understand
// easier to reuse
// easier to maintain

// ✅ 1. What is a Class?
// ✅ Simple Definition
// A class is a blueprint, template, or plan used to create objects.
// It defines:
// properties (fields/data/attributes)
// behaviors (methods/functions)
// ✅ Real-World Example (Easy)
// Think of a blueprint of a house.
// It shows number of rooms, windows, doors → properties
// It shows how electricity, water system works → behaviors
// But the blueprint is not the real house.
// Similarly:
// A class is NOT the real object.
// It only describes what the object will be like.

// ✅ 2. What is an Object?
// ✅ Simple Definition
// An object is an instance of a class.
// It is the real thing created using the class blueprint.
// An object has:
// state (data) → values of properties
// behavior (methods) → actions it can perform
// ✅ Real-World Example (Easy)
// Using the house blueprint, we can build:
// House 1
// House 2
// House 3
// Each house is a real object created from the blueprint.

#include<iostream>
#include<string>
using namespace std;
class Teacher{
  // access specifier 
  private:
  double salary;
public:
// properites and variables , attributes
string name;
string dept;
string subject;

// methods or function 
void changeDept(string newDept){
  dept=newDept;
}

};
int main()
{
 Teacher t1;
 t1.dept="ECE";
 t1.changeDept("CSE");
 t1.name="Akash kumar";
 t1.subject="Artificial Intelligience";
 cout<<t1.name<<" "<<t1.dept<<" "<<" "<<t1.subject<<endl;
return 0;
}


// 🧠 OOP Terminology in C++
// TERM	MEANING
// Data Members	Variables inside a class
// Member Functions	Functions inside a class
// Methods	Another name for Member Functions (same thing)
// 🟢 1️⃣ DATA MEMBERS (also called Attributes / Fields)
// ➡ These are variables declared inside a class.
// They store object data.
// Example
class Student {
public:
    string name;   // data member
    int age;       // data member
};

// 🔵 2️⃣ MEMBER FUNCTIONS (also called Methods)
// ➡ These are functions declared inside a class.
// They operate on data members.
// Example
class Student {
public:
    string name;
    int age;

    void display() {       // member function (method)
        cout << name << " " << age;
    }
};

// ❗ IS THERE ANY DIFFERENCE BETWEEN METHOD & MEMBER FUNCTION?
// ✔ In C++ → NO DIFFERENCE
// Word	Meaning
// Method	Function inside a class
// Member Function	Function inside a class
// ⚠️ They are synonyms in C++ OOPs
// (Java officially uses "method", C++ books use "member function")
// 🏷️ QUICK COMPARISON TABLE
// Feature	Data Member	Member Function (Method)
// Definition	Variable inside class	Function inside class
// Stores	Data (values)	Behavior (logic)
// Access	Using object	Using object
// Memory	Allocated per object	Stored once in code segment
// Example	int age;	void printAge()
// 🧪 Full Example

#include <iostream>
using namespace std;

class Car {
public:
    // 🟢 DATA MEMBERS
    string brand;
    int speed;

    // 🔵 MEMBER FUNCTION (METHOD)
    void accelerate() {
        speed += 10;
        cout << "Speed: " << speed << endl;
    }
};

int main() {
    Car c1;              // object
    c1.brand = "BMW";    // accessing data member
    c1.speed = 100;

    c1.accelerate();     // calling method
}

// 🧠 INTERVIEW NOTES
// Q1: What are data members?
// ➡ Variables defined inside a class (store object data)
// Q2: What are member functions?
// ➡ Functions defined inside a class that operate on data members
// Q3: Difference between method & member function?
// ➡ No difference in C++. Same meaning.
// ⭐ MEMORY FACT
// ✔ Data members → stored separately for each object
// ✔ Member functions → stored once in code memory