

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



