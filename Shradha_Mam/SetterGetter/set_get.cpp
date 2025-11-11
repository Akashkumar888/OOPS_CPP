
// ✅ What are Getters and Setters? (Interview Answer)
// Getter and Setter functions are used to access and modify private data members of a class.
// Setter → writes/updates the private variable
// Getter → reads/returns the private variable
// They are required because private members cannot be accessed directly from outside the class.

// ✅ Why do we use Getters and Setters? (Interview-Ready)
// You should say this:
// To protect private data (encapsulation).
// To provide controlled access (validation can be added).
// To ensure data hiding, so object’s internal data cannot be misused.
// To maintain security (especially for fields like password, balance, salary).
// This is the exact reason your class uses them for salary.

// ✅ How Getters and Setters Work Internally
// Setter
// Takes a value from outside
// Stores it in the private variable

void setSalary(double sal) {
    salary = sal;      // value stored inside private variable
}

// Getter
// Returns the private value to caller

double getSalary() {
    return salary;     // access to private variable through function
}

// ✅ Why We Cannot Directly Access Private Members
// In this code:

private:
    double salary;


// salary is private → not accessible outside the class.
// So this is NOT allowed:

t1.salary = 50000;   // ERROR


// Instead, we must use setter:

t1.setSalary(50000);   // OK

// ✅ Clear Example (From your code)
Teacher t1;

t1.setSalary(23000);       // setter → sets private salary
cout << t1.getSalary();    // getter → prints private salary


// This is exactly how encapsulation works in C++.
// ✅ Interview-Ready 10-second explanation
// “Getters and setters are used to access private data members. Setters modify private values, and getters return them. They enforce encapsulation, protect sensitive data, and allow validation before assigning values.”
// ✅ Example with validation (Good to mention in Interview)
void setSalary(double sal) {
    if (sal > 0)
        salary = sal;
    else
        cout << "Invalid salary";
}


// This shows why direct access is NOT allowed and why setters are needed.

#include<iostream>
#include<string>
using namespace std;
class Teacher{
  // access specifier 
  private:
  double salary;

  public:
  Teacher(){// there is not return type void or int 
    cout<<"Hi, I am constructor"<<endl;
  }
// properites and variables , attributes
string name;
string dept;
string subject;

// methods or function 
void changeDept(string newDept){
  dept=newDept;
}
// setter
void setSalary(double sal){
  salary=sal;
}
// getter
double getSalary(){
  return salary;
}
};

class Account{
private:
  string password;
  double balance; // data hiding 
public:
  string accountId;
  string username;
};

int main()
{
 Teacher t1,t3; // compiler automatically constructor call when object create in cpp
 Teacher t2; // compiler automatically constructor call when object create in cpp
 // that why it print two times 
 t1.dept="ECE";
 t1.changeDept("CSE");
 t1.setSalary(23000);
 cout<<t1.dept<<" "<<t1.getSalary()<<endl;
return 0;
}

