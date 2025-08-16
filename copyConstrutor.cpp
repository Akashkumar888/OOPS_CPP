

#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
  double salary;

public:
  string name;// 👉 class member (attribute)
  string dept;// 👉 class member (attribute)
  string subject;// 👉 class member (attribute)

  // Non-parameterized constructor
  Teacher() {
    dept = "Computer Science";
    cout<<"Hii"<<endl;
  }

  // Parameterized constructor
  Teacher(string name, string subject) {
    this->name = name;
    this->subject = subject;
    cout<<"Hello Priya"<<endl;
    // ✅ Left side → class members
    // ✅ Right side → constructor parameters
  }
  // Setter
  void setSalary(double sal) {
    salary = sal;
  }

  // Getter
  double getSalary() {
    return salary;
  }
};

int main() {
  Teacher t1;                    // calls non-parameterized constructor
  Teacher t2("Akash", "DSA");    // calls parameterized constructor
  Teacher t3(t2);
  // The compiler automatically provides a default copy constructor if you don’t define one.

// t1 → calls non-parameterized constructor → prints "Hii"
// t2 → calls parameterized constructor → prints "Hello Priya"
// t3(t2) → calls copy constructor (compiler-generated) → does not print anything unless you define a custom copy constructor.

  t1.setSalary(23000);
  cout << t1.dept << " " << t1.getSalary() << endl;

  t2.setSalary(50000);
  cout << t2.name << " " << t2.subject << " " << t2.getSalary() << endl;
  
  t3.setSalary(75000);
  cout << t3.name << " " << t3.subject << " " << t3.getSalary() << endl;
  return 0;
}

