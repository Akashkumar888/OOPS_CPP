

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
  
  // non parameterised constructor 
  Teacher(){// there is not return type void or int 
    dept="Computer Science";
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

class Account{
private:
  string password;
  double balance; // data hiding 
public:
  string accountId;
  string username;
};

int main()
{
 Teacher t1,t3; // compiler automatically constructor call when object create in cpp
 Teacher t2; // compiler automatically constructor call when object create in cpp
 // that why it print two times 
 t1.setSalary(23000);
 cout<<t1.dept<<" "<<t1.getSalary()<<endl;
return 0;
}

