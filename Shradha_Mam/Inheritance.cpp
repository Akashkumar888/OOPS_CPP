
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
};

class Child:public Parent{
 public:
 int rollno;
// Correct: call Parent's constructor
    Child(string name, int age, int rollno) : Parent(name, age) {
        this->rollno = rollno;
        cout << "Child Constructor called" << endl;
    }


  void getChild(){
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
  cout<<"Roll Number: "<<rollno<<endl;
 }
};


int main()
{
 Parent p1("Akash",21);
 Child c1("Ankit",22,2201092);
 p1.getParent();
 c1.getChild();

return 0;
}

