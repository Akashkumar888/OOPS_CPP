#include <iostream>

class Calculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add two double numbers
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calculator;

    // Using the different overloaded functions
    std::cout << "Sum of 5 and 10: " << calculator.add(5, 10) << std::endl;
    std::cout << "Sum of 2, 4, and 6: " << calculator.add(2, 4, 6) << std::endl;
    std::cout << "Sum of 3.5 and 2.7: " << calculator.add(3.5, 2.7) << std::endl;

    return 0;
}
