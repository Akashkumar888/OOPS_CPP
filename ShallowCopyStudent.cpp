
#include<iostream>
using namespace std;
class Student{
public:
 string name;
 float cgpa;
 Student(string name,float cgpa){
  this->name=name;
  this->cgpa=cgpa;
 }
 Student(Student &orgObj){
  this->name=orgObj.name;
  this->cgpa=orgObj.cgpa;
 }
 void getInfo(){
  cout<<"name: "<<" "<<name<<endl;
  cout<<"cgpa: "<<" "<<cgpa<<endl;
 }
 
};
int main()
{
  Student s1("Akash",7.35);
  s1.getInfo();
  Student s2(s1);
  s2.getInfo();
return 0;
}

