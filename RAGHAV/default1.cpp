

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
 
  Student(string n,int r,float g){
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
  Student s1("Akash kumar",216,7.5);
  Student s2;
  s2.name="Priya Yadav";
  s2.roll_no=23;
  s2.cgpa=8.3;
  print(s1);
  print(s2);
return 0;
}