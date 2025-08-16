#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
  double salary;

public:
  string name;
  string dept;
  string subject;

  // Non-parameterized constructor
  Teacher() {
    dept = "Computer Science";
    cout<<"Hii"<<endl;
  }

  // Parameterized constructor
  Teacher(string n, string s) {
    name = n;
    subject = s;
    cout<<"Hello Priya"<<endl;
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

// First constructor call → when t1 is created → Teacher() runs → prints "Hii".
// Second constructor call → when t2 is created → Teacher(string n, string s) runs → prints "Hello Priya".

  t1.setSalary(23000);
  cout << t1.dept << " " << t1.getSalary() << endl;

  t2.setSalary(50000);
  cout << t2.name << " " << t2.subject << " " << t2.getSalary() << endl;

  return 0;
}

