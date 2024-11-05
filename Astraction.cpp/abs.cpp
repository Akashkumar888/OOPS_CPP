<<<<<<< HEAD
#include <iostream>
using namespace std;

class Car {
private:
    int speed;
    int fuel;

public:
    Car() : speed(0), fuel(100) {}  // Constructor initializing speed and fuel

    // Public method to accelerate the car
    void accelerate() {
        if (fuel > 0) {
            speed += 10;
            fuel -= 10;
            cout << "Car accelerated. Speed: " << speed << " km/h, Fuel: " << fuel << "%" << endl;
        } else {
            cout << "Not enough fuel to accelerate." << endl;
        }
    }

    // Public method to apply brakes
    void brake() {
        if (speed > 0) {
            speed -= 10;
            cout << "Car slowed down. Speed: " << speed << " km/h" << endl;
        } else {
            cout << "Car is already stationary." << endl;
        }
    }

    // Public method to refuel the car
    void refuel(int amount) {
        fuel = min(fuel + amount, 100);  // Ensuring fuel does not exceed 100%
        cout << "Car refueled. Fuel: " << fuel << "%" << endl;
    }
};

int main() {
    Car myCar;  // Create an object of Car class
    myCar.accelerate();
    myCar.brake();
    myCar.refuel(20);
    myCar.accelerate();

    return 0;
}
=======
#include <iostream>
using namespace std;

class Car {
private:
    int speed;
    int fuel;

public:
    Car() : speed(0), fuel(100) {}  // Constructor initializing speed and fuel

    // Public method to accelerate the car
    void accelerate() {
        if (fuel > 0) {
            speed += 10;
            fuel -= 10;
            cout << "Car accelerated. Speed: " << speed << " km/h, Fuel: " << fuel << "%" << endl;
        } else {
            cout << "Not enough fuel to accelerate." << endl;
        }
    }

    // Public method to apply brakes
    void brake() {
        if (speed > 0) {
            speed -= 10;
            cout << "Car slowed down. Speed: " << speed << " km/h" << endl;
        } else {
            cout << "Car is already stationary." << endl;
        }
    }

    // Public method to refuel the car
    void refuel(int amount) {
        fuel = min(fuel + amount, 100);  // Ensuring fuel does not exceed 100%
        cout << "Car refueled. Fuel: " << fuel << "%" << endl;
    }
};

int main() {
    Car myCar;  // Create an object of Car class
    myCar.accelerate();
    myCar.brake();
    myCar.refuel(20);
    myCar.accelerate();

    return 0;
}
>>>>>>> 153c9f0ae83dff77b96fa9bf48a5bbfc7b5d724e
