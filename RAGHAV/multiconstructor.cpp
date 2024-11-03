

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
void print(Student &s){
  cout<<s.name<<" "<<s.roll_no<<" "<<s.cgpa<<" "<<endl;
}
int main()
{
  Student s1("Akash kumar",216);

  s1.cgpa=7.5;
  s1.roll_no=254;

  Student s3("Gagan",107,9.3);
  Student s4(145);
  s4.cgpa=8.6;
  s4.name="Pritam Kumar";


  Student s2;
  s2.name="Priya Yadav";
  s2.roll_no=23;
  s2.cgpa=8.3;
  
  Student s5(25,6.9,"Rohit Negi");


  print(s1);
  print(s2);
  print(s3);
  print(s4);
  print(s5);
  
return 0;
}