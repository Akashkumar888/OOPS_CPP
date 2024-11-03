
#include<iostream>
using namespace std;
class Student{
  public:
  string name;
  int roll_no;
  float cgpa;
  // default constructor

  // default construct already bana hota hai 
  // but naya constructor banate hai default vala remove ho jata hai
  // phir se mention krna padta hai 

  // Student(){

  // }

 
};
void print(Student &s){
  cout<<s.name<<" "<<s.roll_no<<" "<<s.cgpa<<" "<<endl;
}
int main()
{
  Student s2;
  s2.name="Priya Yadav";
  s2.roll_no=23;
  s2.cgpa=8.3;
  print(s2);
return 0;
}