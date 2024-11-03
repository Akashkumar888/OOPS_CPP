#include <iostream>

// Base class
class Shape {
public:
    // Virtual function for calculating area
    virtual float calculateArea() {
        return 0.0; // Default implementation for base class
    }
};

// Derived class 1
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    // Override the calculateArea method in the derived class
    float calculateArea() override {
        return 3.14 * radius * radius; // Area of a circle
    }
};

// Derived class 2
class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    // Override the calculateArea method in the derived class
    float calculateArea() override {
        return length * width; // Area of a rectangle
    }
};

int main() {
    // Creating objects of derived classes
    Circle myCircle(5.0);
    Rectangle myRectangle(4.0, 6.0);

    // Calculating and displaying the area of the shapes
    std::cout << "Area of the Circle: " << myCircle.calculateArea() << std::endl;
    std::cout << "Area of the Rectangle: " << myRectangle.calculateArea() << std::endl;

return 0;
}