

#include<iostream>
#include<string>
using namespace std;
class Teacher{
  // access specifier 
  private:
  double salary;
public:
// properites and variables , attributes
string name;
string dept;
string subject;

// methods or function 
void changeDept(string newDept){
  dept=newDept;
}
// setter
void setSalary(double sal){
  salary=sal;
}
// getter
double getSalary(){
  return salary;
}

};
int main()
{
 Teacher t1;
 t1.dept="ECE";
 t1.changeDept("CSE");
 t1.setSalary(23000);
 cout<<t1.dept<<" "<<t1.getSalary()<<endl;
return 0;
}

