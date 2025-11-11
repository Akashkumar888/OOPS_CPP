
// Interview Answer:
// “An abstract class is a class that contains at least one pure virtual function.
// It cannot be instantiated and is used as a base class.”

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
