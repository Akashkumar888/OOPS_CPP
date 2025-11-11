
// ✅ 7. What is a Pure Virtual Function?

// Interview Answer:
// “A pure virtual function has no implementation in the base class and is declared using = 0.
// It forces derived classes to provide their own implementation.”

// ✅ Syntax:
virtual void func() = 0;


#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // pure virtual → abstract class
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle\n";
    }
};

int main() {
    Shape* s = new Circle();  // using abstract class pointer
    s->draw();
    delete s;
    return 0;
}


