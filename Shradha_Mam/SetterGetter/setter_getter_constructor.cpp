

// ✅ What are Getters and Setters? (Interview Answer)
// Getter and Setter functions are used to access and modify private data members of a class.
// Setter → writes/updates the private variable
// Getter → reads/returns the private variable
// They are required because private members cannot be accessed directly from outside the class.

// ✅ Why do we use Getters and Setters? (Interview-Ready)
// You should say this:
// To protect private data (encapsulation).
// To provide controlled access (validation can be added).
// To ensure data hiding, so object’s internal data cannot be misused.
// To maintain security (especially for fields like password, balance, salary).
// This is the exact reason your class uses them for salary.

// ✅ How Getters and Setters Work Internally
// Setter
// Takes a value from outside
// Stores it in the private variable

// 🔹 Why Do We Use Getter and Setter in OOPS?
// Getter and Setter are used to implement Encapsulation (data hiding).

// Encapsulation means:
// Keep data private and allow controlled access through functions.

// 🔥 Correct Concept (VERY IMPORTANT)
// 🔹 Setter
// Used to set/update value
// Usually returns void
// Can take one or multiple parameters
// void setSalary(double sal)

// 🔹 Getter
// Used to retrieve value
// Returns value (not void)
// double getSalary()

// 🔥 Correct Table
// Function	           Purpose	                    Return Type
// Setter	           Set value	                Usually void
// Getter	           Get value	                Same as variable type


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


// 🔥 Multiple Parameters Setter (YES, possible)

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Setter (set both values)
    void setData(string n, int a) {
        name = n;
        age = a;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Getter for age
    int getAge() {
        return age;
    }
};

int main() {
    Student s1;   // object created

    // setting values
    s1.setData("Akash", 21);

    // getting values
    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl;

    return 0;
}

// 🔥 Getter for Multiple Values?
// 👉 You cannot return multiple values directly
// But you can:
// Option 1: Call multiple getters

cout << obj.getName() << " " << obj.getAge();

// Option 2: Use struct (advanced)
struct Info {
    string name;
    int age;
};

Info getData() {
    return {name, age};
}


// 🔥 Why Getters/Setters (INTERVIEW GOLD)
// Say this:
// “Getters and setters are used to implement encapsulation by restricting direct access to data and allowing controlled access with validation.”


// ❌ A function can return only one value (in basic C++)
// ✅ But we CAN return multiple values using techniques:

// “When we need to return multiple values in C++, we typically use a struct, class, pair, tuple, or reference parameters, depending on the situation.”

// Use:
// - struct / class → for meaningful grouped data (best)
// - pair → for 2 values
// - tuple → for multiple values (3+)
// - reference parameters → for in-place output


// 🔥 2. When to Use What (VERY IMPORTANT ⭐)
// 🔹 ✅ Use struct / class (BEST PRACTICE)

// 👉 When values are related logically

// struct StudentInfo {
//     string name;
//     int age;
// };

// ✔ Readable
// ✔ Maintainable
// ✔ Interview-friendly

// 🔹 Method 1: Return struct (BEST & INTERVIEW-FRIENDLY ⭐)

#include <iostream>
using namespace std;

struct Info {
    string name;
    int age;
};

class Student {
private:
    string name;
    int age;

public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }

    Info getData() {   // returning struct
        return {name, age};
    }
};

int main() {
    Student s1;
    s1.setData("Akash", 21);

    Info data = s1.getData();

    cout << "Name: " << data.name << endl;
    cout << "Age: " << data.age << endl;
}




// using class 
#include <iostream>
using namespace std;

// Using class instead of struct
class Info {
public:
    string name;
    int age;
};

class Student {
private:
    string name;
    int age;

public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }

    Info getData() {
        Info obj;
        obj.name = name;
        obj.age = age;
        return obj;
    }
};


int main() {
    Student s1;
    s1.setData("Akash", 21);

    Info d = s1.getData();

    cout << d.name << " " << d.age;
}


// 🔹 Method 2: Use pair (short way)
#include <utility>

pair<string, int> getData() {
    return {name, age};
}

// Usage:

auto p = s1.getData();
cout << p.first << " " << p.second;


// 🔹 Method 3: Use Reference Parameters

void getData(string &n, int &a) {
    n = name;
    a = age;
}

// Usage:

string n;
int a;
s1.getData(n, a);

// 👉 “Can getter return multiple values?”
// Say:
// “A function can return only one value, but we can return multiple values using a struct, pair, or reference parameters.”

// 👉 “Are getters/setters only for private?”
// Say:
// “They are mainly used for private and protected members to provide controlled access and maintain encapsulation.”