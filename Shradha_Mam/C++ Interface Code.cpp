

// ✅ 1. What is an Interface? (C++ Version)
// C++ has no keyword interface like Java.
// But we simulate an interface using a class that has only pure virtual functions.

// ✅ Interview Definition (C++)
// An interface in C++ is a class that contains only pure virtual functions and no implementation.
// Any class that implements it must override all its functions.
// ✅ C++ Interface Code (Full Example)

#include <iostream>
using namespace std;

// Interface in C++ = class with only pure virtual functions
class Shape {
public:
    virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape* s = new Circle();
    s->draw();  // Calling overridden method
    delete s;
    return 0;
}

// ✅ Why interface?
// To enforce rules. Any class inheriting Shape MUST implement draw().
