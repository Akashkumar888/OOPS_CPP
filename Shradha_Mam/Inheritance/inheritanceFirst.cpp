
// Online C++ compiler to run C++ program online
// Inheritance is the process of inheriting properties from a Base / Parent / Super class into a Derived / Child / Sub class.

#include <iostream>
using namespace std;
class Vehicle{ // Base / Parent / Super class
  public:
  int mileage,cost;
  Vehicle(int m,int c){
      this->mileage=m;
      this->cost=c;
  }
  void show_details(){
      cout<<"I am Vehicle"<<endl;
      cout<<"Mileage: "<<mileage<<endl;
      cout<<"Cost: "<<cost<<endl;
  }
};

class Car:public Vehicle{ // Derived / Child / Sub class
    public:
    Car(int m,int c):Vehicle(m,c){}
    void show(){
        cout<<"I am Car"<<endl;
    }
};
int main() {
    Car c1(60,320000);
    c1.show_details();// inherited
    c1.show();// own
}

// you must call the base-class constructor explicitly when the base class does not have a default (no-argument) constructor.
// In your code:
// class Vehicle {
// public:
//     int mileage, cost;
//     Vehicle(int m, int c) {
//         this->mileage = m;
//         this->cost = c;
//     }
// };

// Vehicle has only a parameterized constructor.
// So when you create a Car object, C++ must first construct the Vehicle part of it. But it doesn’t know what values to pass to Vehicle(int, int) unless you tell it.
// That’s why this is required:

// class Car : public Vehicle {
// public:
//     Car(int m, int c) : Vehicle(m, c) {}  // calls base constructor
// };

// This is called constructor chaining in inheritance.
// Execution order when you do:

// Car c1(60, 320000);

// Vehicle(m, c) is called first
// Then Car(m, c) is constructed
// Now c1 is fully created
// If you remove it:

// class Car : public Vehicle {
// public:
//     Car(int m, int c) { }
// };

// You’ll get a compile-time error, because C++ will try to call Vehicle() (default constructor), which does not exist.
// When is it not required?
// If the base class has a default constructor:

// class Vehicle {
// public:
//     Vehicle() { }
// };

// Then C++ automatically calls it, and you can write:

// class Car : public Vehicle {
// public:
//     Car() { }
// };
// Interview Line
// “In C++, the base class constructor is always called before the derived class constructor.
// If the base class has only a parameterized constructor, the derived class must explicitly call it using an initializer list, otherwise compilation fails.”


// Online C++ compiler to run C++ program online
// 🔹 Code 1 (Base has default constructor, Child has NO constructor)

#include <iostream>
using namespace std;
class Vehicle { // Base / Parent / Super class
public:
    Vehicle() {
    }
    void show_details() {
        cout << "I am Vehicle" << endl;
    }
};

class Car : public Vehicle { // Derived / Child / Sub class
public:
    void show() {
        cout << "I am Car" << endl;
    }
};

int main() {
    Car c1;
    c1.show_details();
    c1.show();
}


// What happens?
// You create: Car c1;
// Car has no constructor, so C++ generates a default one.
// That default Car() automatically calls Vehicle() (base default constructor).
// Object is created successfully.
// Flow:
// Vehicle() → Car()
// So this works because Vehicle() exists.



// Code 2 (Child explicitly calls base default constructor)
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Vehicle{ // Base / Parent / Super class
  public:
//   int mileage,cost;
  Vehicle(){
    //   this->mileage=m;
    //   this->cost=c;
  }
  void show_details(){
      cout<<"I am Vehicle"<<endl;
    //   cout<<"Mileage: "<<mileage<<endl;
    //   cout<<"Cost: "<<cost<<endl;
  }
};

class Car:public Vehicle{ // Derived / Child / Sub class
    public:
    Car():Vehicle(){}
    void show(){
        cout<<"I am Car"<<endl;
    }
};
int main() {
    Car c1;
    c1.show_details();// inherited
    c1.show();// own
}

// This is the explicit version of what C++ already does automatically.
// Car() explicitly calls Vehicle()
// Output and behavior are exactly the same as Code 1
// Flow:
// Vehicle() → Car()
// This is useful when:
// You want clarity
// Or you want to pass arguments to base constructor


// Code 3 (Child has constructor but doesn’t mention base)
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Vehicle{ // Base / Parent / Super class
  public:
//   int mileage,cost;
  Vehicle(){
    //   this->mileage=m;
    //   this->cost=c;
  }
  void show_details(){
      cout<<"I am Vehicle"<<endl;
    //   cout<<"Mileage: "<<mileage<<endl;
    //   cout<<"Cost: "<<cost<<endl;
  }
};

class Car:public Vehicle{ // Derived / Child / Sub class
    public:
    Car(){}
    void show(){
        cout<<"I am Car"<<endl;
    }
};
int main() {
    Car c1;
    c1.show_details();// inherited
    c1.show();// own
}

// Even here:
// Car() is defined
// But since you didn’t specify any base constructor,
// C++ automatically calls Vehicle() first.
// So again:
// Flow:
// Vehicle() → Car()
// 🧠 Final Rule to Remember
// Base constructor always runs first.
// If base has a default constructor, C++ will call it automatically.
// If base has only parameterized constructors, then the child must call it explicitly:


// ✅ Code 2
// 👉 Child explicitly calls the base class default constructor

#include <iostream>
using namespace std;

// ---------------- Base Class ----------------
class Vehicle {
public:
    // Default constructor of base class
    Vehicle() {
        // Called first when a Car object is created
    }

    void show_details() {
        cout << "I am Vehicle" << endl;
    }
};

// ---------------- Derived Class ----------------
class Car : public Vehicle {
public:
    // 👇 Explicitly calling base class constructor
    Car() : Vehicle() {
        // Even though Vehicle() is empty,
        // it is clearly called here
    }

    void show() {
        cout << "I am Car" << endl;
    }
};

int main() {
    Car c1;               // 1️⃣ Vehicle() is called
                           // 2️⃣ Car() is called
    c1.show_details();    // inherited from Vehicle
    c1.show();            // own function
}

// 🔍 Why this works
// Base class (Vehicle) has a default constructor
// Child (Car) explicitly calls it
// This is good practice and recommended
// Useful when base constructor has parameters or logic


// ✅ Code 3
// 👉 Child does NOT mention base constructor
#include <iostream>
using namespace std;

// ---------------- Base Class ----------------
class Vehicle {
public:
    // Default constructor of base class
    Vehicle() {
        // Automatically called if child doesn't specify anything
    }

    void show_details() {
        cout << "I am Vehicle" << endl;
    }
};

// ---------------- Derived Class ----------------
class Car : public Vehicle {
public:
    // 👇 No call to Vehicle() here
    Car() {
        // Compiler AUTOMATICALLY inserts:
        // Vehicle();
    }

    void show() {
        cout << "I am Car" << endl;
    }
};

int main() {
    Car c1;               // 1️⃣ Vehicle() auto-called
                           // 2️⃣ Car() called
    c1.show_details();    // inherited
    c1.show();            // own
}