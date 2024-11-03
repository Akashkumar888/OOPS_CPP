
#include<iostream>
using namespace std;
class Student{
  public:
  int roll_no;
  string name;
  float marks;
  void print(){
    cout<<this->roll_no<<" "<<this->marks<<" "<<this->name<<endl;
  }
};
int main()
{
  Student s1;
  s1.marks=90.8;
  s1.name="Akash kumar";
  s1.roll_no=216;
  s1.print();
return 0;
}