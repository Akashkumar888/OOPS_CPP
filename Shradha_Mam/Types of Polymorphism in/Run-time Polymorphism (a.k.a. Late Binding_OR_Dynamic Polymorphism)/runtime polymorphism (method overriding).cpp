
#include <iostream>
using namespace std;

// Base Class
class Base {
public:
    int value = 10;

    // Function A in Base
    virtual void A() {
        cout << "Base A(): Value = " << value << endl;
    }
};

// Child Class
class Child : public Base {
public:
    // Overriding function A and adding extra behavior
    void A() override {
        cout << "Child A(): Before Base work" << endl;

        // Call base class version
        Base::A();

        cout << "Child A(): Additional functionality added" << endl;
    }

    // Another function only in Child
    void B() {
        cout << "Child B(): This is another function" << endl;
    }
};

int main() {
    // Create object of Child class
    Child obj;

    // Call overridden function
    obj.A();

    return 0;
}
