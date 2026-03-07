#include <iostream>
using namespace std;

class Vehicle {
public:
    int wheels;
    string brand;

    Vehicle(int w, string b) {
        wheels = w;
        brand = b;
    }

    void showVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Wheels: " << wheels << endl;
    }
};

class Car : public Vehicle {
public:
    string model;

    Car(int w, string b, string m) : Vehicle(w, b) {
        model = m;
    }

    void showCar() {
        
        cout << "Model: " << model << endl;
    }
};

int main() {

    Car c(4, "Toyota", "Fortuner");
    c.showVehicle(); // inherited method // parent class methods
    c.showCar();// child class methods

    return 0;
}