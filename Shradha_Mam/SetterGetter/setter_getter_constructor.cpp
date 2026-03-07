


// 🔹 Why Do We Use Getter and Setter in OOPS?
// Getter and Setter are used to implement Encapsulation (data hiding).

// Encapsulation means:
// Keep data private and allow controlled access through functions.

#include <iostream>
using namespace std;

class Account {
private:
    int balance;   // private data member (hidden)

public:
    // Setter function
    void setBalance(int b) {
        balance = b;
    }

    // Getter function
    int getBalance() {
        return balance;
    }
};

int main() {
    Account acc;          // create object of Account class

    acc.setBalance(5000);    // set balance using setter
    cout << "Account Balance: ₹" << acc.getBalance() << endl;

    return 0;
}



#include <iostream>
using namespace std;

class Car {
private:
    int mileage;   // in km/l
    int cost;      // in rupees

public:
    // Setter for mileage
    void setMileage(int m) {
        if (m > 0) {
            mileage = m;
        } else {
            mileage = 0;
        }
    }

    // Getter for mileage
    int getMileage() {
        return mileage;
    }

    // Setter for cost
    void setCost(int c) {
        if (c > 0) {
            cost = c;
        } else {
            cost = 0;
        }
    }

    // Getter for cost
    int getCost() {
        return cost;
    }
};

int main() {
    Car myCar;

    // Setting values
    myCar.setMileage(18);
    myCar.setCost(750000);

    // Getting values
    cout << "Car Mileage: " << myCar.getMileage() << " km/l" << endl;
    cout << "Car Cost: ₹" << myCar.getCost() << endl;

    return 0;
}






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

