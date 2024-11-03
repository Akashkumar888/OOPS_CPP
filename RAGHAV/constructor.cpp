#include<iostream>
using namespace std;
class Student{
  public:
  string name;
  int roll_no;
  float cgpa;

  // // constructor like function jiske pass return type nhi hota
  // The constructor doesn't have a return type (not even void). 
// you're passing literal values like "Akash kumar", 216, and 7.5. Literal values cannot be passed as references because they are not variables with memory addresses.

  Student(string n,int r,float g){
  name=n;
  roll_no=r;
  cgpa=g;
  }

//  // Parameterized constructor to initialize the values
//     Student(string n, int r, float g) {
//         this->name = n;      // 'this' points to the current object
//         this->roll_no = r;   // 'this->roll_no' is the object member
//         this->cgpa = g;      // Assign parameter 'g' to the object's cgpa
//     }

};
void print(Student &s){
  cout<<s.name<<" "<<s.roll_no<<" "<<s.cgpa<<" "<<endl;
}
int main()
{
  Student s1("Akash kumar",216,7.5);
  Student s2("Priya Yadav",23,8.3);
  print(s1);
  print(s2);
return 0;
}