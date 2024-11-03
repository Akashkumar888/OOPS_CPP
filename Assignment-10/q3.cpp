#include <iostream>

// Base class
class Shape {
protected:
    float radius;

public:
    Shape(float r) : radius(r) {}

    virtual float calculateArea() {
        return 0.0; // Default implementation for base class
    }
};

// Derived class
class Circle : public Shape {
public:
    Circle(float r) : Shape(r) {}

    // Override the calculateArea method in the derived class
    float calculateArea() override {
        return 3.14 * radius * radius; // Area of a circle
    }
};

int main() {
    // Creating a Circle object
    Circle myCircle(5.0);

    // Calculating and displaying the area of the circle
    std::cout << "Area of the Circle: " << myCircle.calculateArea() << std::endl;

return 0;
}