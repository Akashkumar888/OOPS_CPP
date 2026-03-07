
// 💻 C++ – Overriding Constructor in Derived Class

#include <iostream>
using namespace std;

class Vehicle {
public:
    int mileage, cost;
    Vehicle(int m, int c) {
        mileage = m;
        cost = c;
    }

    void showDetails() {
        cout << "I am a Vehicle\n";
        cout << "Mileage: " << mileage << endl;
        cout << "Cost: " << cost << endl;
    }
};

class Car : public Vehicle {
public:
    int tyres, hp;

    Car(int m, int c, int t, int h) : Vehicle(m, c) { // call base constructor
        tyres = t;
        hp = h;
    }

    void showCarDetails() {
        cout << "I am a Car\n";
        cout << "Tyres: " << tyres << endl;
        cout << "Horse Power: " << hp << endl;
    }
};

int main() {
    Car c1(20, 12000, 4, 300);
    c1.showDetails();     // inherited
    c1.showCarDetails();  // own
}

// Why : Vehicle(m, c) is needed?
// C++ always constructs the base part first.
// If the base has only a parameterized constructor, the child must call it.
// Otherwise → compile-time error.


// “In C++, the base class constructor is always called before the derived one. If the base has only parameterized constructors, the derived class must call it using an initializer list.”
