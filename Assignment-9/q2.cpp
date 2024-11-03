#include <iostream>

class Calculator {
public:
    int addNumbers(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
    // Create an instance of the Calculator class
    Calculator calculator;

    // Input two numbers
    int number1, number2;
    std::cout << "Enter first number: ";
    std::cin >> number1;
    std::cout << "Enter second number: ";
    std::cin >> number2;

    // Call the addNumbers function using the Calculator object
    int sum = calculator.addNumbers(number1, number2);

    // Display the result
    std::cout << "Sum: " << sum << std::endl;

return 0;
}