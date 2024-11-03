#include <iostream>

// First base class
class Vehicle {
protected:
    int wheels;

public:
    Vehicle(int w) : wheels(w) {}

    void displayWheels() {
        std::cout << "Number of Wheels: " << wheels << std::endl;
    }
};

// Second base class
class ElectricDevice {
protected:
    bool isRechargeable;

public:
    ElectricDevice(bool rechargeable) : isRechargeable(rechargeable) {}

    void displayRechargeable() {
        std::cout << "Is Rechargeable: " << (isRechargeable ? "Yes" : "No") << std::endl;
    }
};

// Derived class inheriting from both base classes
class ElectricCar : public Vehicle, public ElectricDevice {
public:
    ElectricCar(int w, bool rechargeable) : Vehicle(w), ElectricDevice(rechargeable) {}

    void displayDetails() {
        displayWheels();         // Accessing method from the first base class
        displayRechargeable();   // Accessing method from the second base class
    }
};

int main() {
    // Creating an ElectricCar object
    ElectricCar myElectricCar(4, true);

    // Displaying details of the electric car
    myElectricCar.displayDetails();

return 0;
}