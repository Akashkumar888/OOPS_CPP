


#include<iostream>
using namespace std;
class Student{
  public:
  string name;
  int roll_no;
  float cgpa;
  // default constructor
  Student(){

  }

  // default construct already bana hota hai 
  // but naya constructor banate hai default vala remove ho jata hai
  // phir se mention krna padta hai 

  Student(int r){
  roll_no=r;
  }

  Student(string n,int r){
  name=n;
  roll_no=r;
  }

  Student(string n,int r,float g){
  name=n;
  roll_no=r;
  cgpa=g;
  }

  Student(int r,float g,string n){
  name=n;
  roll_no=r;
  cgpa=g;
  }

};
void print(Student s){
  cout<<s.name<<" "<<s.roll_no<<" "<<s.cgpa<<" "<<endl;
}
int main()
{
  Student s1("Akash kumar",216);

  s1.cgpa=7.5;
  s1.roll_no=254;

  
  Student s6 = s1;  // This creates a shallow copy of s1
  s6.name="Vivek kumar";
  s6.roll_no=56;
  s6.cgpa=8.4;
  print(s1);
  print(s6);

  Student s7(s1);
  print(s7);
return 0;
}