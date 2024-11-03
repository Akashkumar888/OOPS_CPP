#include<iostream>
using namespace std;
class Student{
  public:
  string name;
  int roll_no;
  float cgpa;
};
int main()
{
  Student s1;
  s1.name="Akash kumar";
  s1.cgpa=7.3;
  cin>>s1.roll_no;

  Student s2;
  s2.cgpa=8.3;
  s2.name="Priya yadav";
  s2.roll_no=23;

  cout<<s1.name<<endl;
  cout<<s1.cgpa<<endl;
  cout<<s1.roll_no<<endl;

  cout<<s2.name<<endl;
  cout<<s2.cgpa<<endl;
  cout<<s2.roll_no<<endl;

return 0;
}