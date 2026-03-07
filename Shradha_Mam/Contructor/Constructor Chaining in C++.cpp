
// ✅ 3. What is Constructor Chaining in C++?

// Interview Answer:
// “Constructor chaining means calling one constructor from another constructor.
// In C++, this is done using an initializer list or through inheritance.”


// It happens in two ways:
// Within the same class
// Between parent → child (inheritance)


//1. ✅ Same Class Constructor Chaining:

class Demo {
public:
    Demo() : Demo(10) {  // calling parameterized constructor first
        cout << "Default Constructor\n";
    }

    Demo(int x) {
        cout << "Parameterized Constructor: " << x << endl;
    }
};

int main() {
    Demo d;
    return 0;
}
// Parameterized Constructor: 10
// Default Constructor

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Demo {
public:
    Demo() : Demo(10) {  // calling parameterized constructor first
        cout << "Default Constructor\n";
    }

    Demo(int x) {
        cout << "Parameterized Constructor: " << x << endl;
    }
};

int main() {
    Demo d(20);
    return 0;
}
// Parameterized Constructor: 20


//2. ✅ Parent → Child Constructor Chaining (Inheritance):
class Parent {
public:
    Parent() {
        cout << "Parent Constructor\n";
    }
};

class Child : public Parent {
public:
    Child() : Parent() {   // calls parent constructor
        cout << "Child Constructor\n";// explicitly calling parent constructor
    }
};

int main() {
    Child c;
    return 0;
}

// Can we have multiple constructors in a class?
// Yes. This is called constructor overloading in C++.
class Demo {
public:
    Demo() {
        cout << "Default Constructor\n";
    }
    Demo(int x) {
        cout << "Parameterized Constructor\n";
    }
    Demo(int x, int y) {
        cout << "Two-parameter Constructor\n";
    }
};


// ✅ 3. Can Constructors be Virtual in C++?
// Answer:
// No. Constructors cannot be virtual.
// ✅ Simple Reason (say this):
// “Constructors are used to create objects, but virtual functions require an object to already exist. Since the object is not created before the constructor runs, constructors cannot be virtual.”
// “Constructors are used to create objects, but virtual functions need an object already created.
// So constructors cannot be virtual.”