
// Meaning: One class contains another class.
// A. Composition (Strong HAS-A)
// Strong ownership
// Part cannot exist without the whole
// Lifetime of part is controlled by the whole
// Implemented using objects directly (not pointers)

#include <iostream>
using namespace std;

class Engine {
public:
    void start() { cout << "Engine started\n"; }
};

class Car {
private:
    Engine engine;     // Composition → Car HAS-A Engine (strong)
public:
    void startCar() {
        engine.start();
    }
};

int main() {
    Car c;             // When Car is created, Engine is created
    c.startCar();      // Engine cannot exist without Car
}
