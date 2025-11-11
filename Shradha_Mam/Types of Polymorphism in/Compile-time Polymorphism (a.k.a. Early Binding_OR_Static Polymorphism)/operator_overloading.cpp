
// ✅ 4. Operator Overloading (Compile-time Polymorphism)
// Interview Answer:
// “Operator overloading means giving a custom meaning to operators for user-defined types.”

#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r=0, int i=0) : real(r), imag(i) {}

    // Overload + operator
    Complex operator+(const Complex &other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;  // operator+() is called
    c3.display();          // Output: 6 + 8i
}


#include <iostream>
using namespace std;

class Complex {
public:
    int r, i;

    Complex(int r, int i) : r(r), i(i) {}

    Complex operator+(const Complex& c) {
        return Complex(r + c.r, i + c.i);
    }
};

int main() {
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;
    cout << c3.r << " + " << c3.i << "i";
    return 0;
}


// ✅ 3. Can a static method be overridden in C++?
// Interview Answer:
// “No. Static methods cannot be overridden in C++.
// Static methods belong to the class, not the object, so they do not participate in polymorphism.”

// ✅ Important:
// Static methods do NOT use virtual
// Static methods are NOT late-bound
// They can only be hidden, not overridden
// ✅ Static functions do NOT support overriding in C++.

// ✅ 4. What is the difference between Hiding and Overriding? (C++ Version)
// ✅ Overriding (Instance methods)
// Happens with virtual functions
// Based on runtime polymorphism
// Base class pointer calls derived class method
// Requires same signature + virtual

// ✅ Hiding (Static methods or non-virtual methods)
// Static methods cannot be overridden
// If derived class defines a static function with the same name → it hides the base function
// Decided at compile time
// No polymorphism involved
