

#include<iostream>
using namespace std;

class Parent{
 public:
 string name;
 int age;
 Parent(string name,int age){
  this->name=name;
  this->age=age;
  cout<<"Parent Constructor called"<<endl;
 }
 void getParent(){
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
 }
  ~Parent(){
  cout<<"Parent Destructor called"<<endl;
 }
};

class Child:public Parent{
 public:
 int rollno;
// Correct: call Parent's constructor
// Before running Child’s constructor body, C++ must first initialize the Parent part of Child.
// That’s why you see Parent Constructor called first, then Child Constructor called.
// 👉 And yes, you don’t need to repeat the data types when forwarding arguments to the base class constructor — just pass the variables like you did (name, age).

    Child(string name, int age, int rollno) : Parent(name, age) { // here parent call the contructor that means no need to send the data types 
        this->rollno = rollno;
        cout << "Child Constructor called" << endl;
    }

  void getChild(){
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
  cout<<"Roll Number: "<<rollno<<endl;
 }
 ~Child(){
  cout<<"Child Destructor called"<<endl;
 }
};

int main()
{
 Child c1("Ankit",22,2201092);
 c1.getChild();
return 0;
}

