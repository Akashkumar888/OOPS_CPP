
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
// A class is NOT the real object.
// It only describes what the object will be like.

// ✅ Real-World Example (Easy)
// Think of a blueprint of a house.
// It shows number of rooms, windows, doors → properties
// It shows how electricity, water system works → behaviors
// Similarly:
// But the blueprint is not the real house.

// ✅ 2. What is an Object?
// ✅ Simple Definition
// An object is an instance of a class.
// It is the real entity created from the class blueprint.
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
// access modifiers control who can use the data members and functions of a class.
// They are mainly used to achieve data hiding, security, and proper design.
  // access specifier 
//   Meaning of Each Access Modifier
// Access Modifier	       Who can access it?
// public	               Anywhere (inside & outside the class)
// private	               Only inside the same class
// protected               →  Inside the base (parent) class + derived (child) classes

// Why do we use them?
// Security – Prevent direct access to sensitive data
// Encapsulation – Hide internal implementation details
// Control – Allow access only through methods
// Maintainability – Change internal logic without breaking outside code

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


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Car{
  public:
  int brand;
  int price;
  void accelerator(){
      cout<<brand<<" "<<price;
  }
  void solve(int brand,int price){
      cout<<brand<<" "<<price;
  }
};
int main() {
    // Write C++ code here
    Car c1;
    c1.brand=10;
    c1.price=200000;
    c1.accelerator();
    cout<<endl;
    c1.solve(20,456000);
    return 0;
}

// 🧠 INTERVIEW NOTES
// A variable is a name given to a memory location that is used to store data temporarily during program execution.
// The value of a variable can change while the program runs.
// Think of it like a container that holds some data.

// 🐍 Variables in Python
// In Python, you don’t need to declare the data type.
// Python automatically decides the type based on the value.
// Python is dynamically typed
// You can change the type of a variable anytime:

// 💻 Variables in C++
// In C++, you must declare the data type before using a variable.
// C++ is statically typed
// Once declared, the type cannot change

// Q1: What are data members?
// ➡ Variables defined inside a class (store object data)
// Q2: What are member functions?
// ➡ Functions defined inside a class that operate on data members
// Q3: Difference between method & member function?
// ➡ No difference in C++. Same meaning.
// ⭐ MEMORY FACT
// ✔ Data members → stored separately for each object
// ✔ Member functions → stored once in code memory