
// Explanation:
// Base class Shape is fixed.
// New shapes can be added by extending it — no modification needed in existing code.

#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
    double r;
public:
    Circle(double radius) : r(radius) {}
    double area() override { return 3.14 * r * r; }
};

int main() {
    Shape* s = new Circle(5);
    cout << "Area: " << s->area();
    delete s;
}

