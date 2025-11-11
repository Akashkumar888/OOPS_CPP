
// ✅ Operator Overloading
// Giving a new meaning to operators (like +, -, ==) for user-defined types.

#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r=0, int i=0) {
        real = r;
        imag = i;
    }

    // Operator Overloading of '+'
    Complex operator + (const Complex &other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);

    Complex c3 = c1 + c2;   // uses overloaded operator+

    c1.display();  // 3 + 4i
    c2.display();  // 1 + 2i
    c3.display();  // 4 + 6i
}

