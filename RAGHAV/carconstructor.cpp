#include<iostream>
using namespace std;

class Car {
public:
    string name;
    int price;
    int seats;
    string type;

    Car(int p, int sea, string s, string t) {
        price = p;
        seats = sea;
        name = s;
        type = t;
    }
};

void printdetails(Car c) {
    cout << c.name << " " << c.price << " " << c.seats << " " << c.type << endl;
}

void changedetails(Car &c) {
    c.name = "Mercedes";
    c.price = 200000000;
}

int main() {
    // Creating multiple car objects
    Car c1(1200000, 4, "BMW", "SUV");
    Car c2(1300000, 6, "Honda City", "Sedan");
    Car c3(700000, 4, "Maruti Suzuki", "Hatchback");
    Car c4(2500000, 6, "Toyota Fortuner", "SUV");

    // Print details of  car
    printdetails(c1);

    // Change details of one car
    changedetails(c1);
    
    // Print the updated details
    printdetails(c1);

    return 0;
}
