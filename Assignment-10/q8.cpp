#include <iostream>

// Base class
class Vehicle {
protected:
    int wheels;

public:
    Vehicle(int w) : wheels(w) {}

    void displayWheels() {
        std::cout << "Number of Wheels: " << wheels << std::endl;
    }
};

// First derived class
class Car : public Vehicle {
protected:
    int passengers;

public:
    Car(int w, int p) : Vehicle(w), passengers(p) {}

    void displayPassengers() {
        std::cout << "Number of Passengers: " << passengers << std::endl;
    }
};

// Second derived class
class SportsCar : public Car {
public:
    SportsCar(int w, int p) : Car(w, p) {}

    void displayDetails() {
        displayWheels();       // Accessing method from the base class
        displayPassengers();   // Accessing method from the first derived class
        std::cout << "Sports Car details." << std::endl;
    }
};

int main() {
    // Creating a SportsCar object
    SportsCar mySportsCar(4, 2);

    // Displaying details of the sports car
    mySportsCar.displayDetails();

return 0;
}