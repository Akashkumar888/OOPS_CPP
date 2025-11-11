
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
