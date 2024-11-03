#include <iostream>
using namespace std;

// Function to perform addition
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to perform subtraction
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to perform multiplication
double multiply(double num1, double num2) {
    return num1 * num2;
}

int main() {
    // Declare variables to store user input
    double number1, number2;

    // Input two numbers from the user
    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    // Perform addition, subtraction, and multiplication using functions
    double additionResult = add(number1, number2);
    double subtractionResult = subtract(number1, number2);
    double multiplicationResult = multiply(number1, number2);

    // Display the results
    cout << "Addition: " << additionResult << endl;
    cout << "Subtraction: " << subtractionResult << endl;
    cout << "Multiplication: " << multiplicationResult << endl;

return 0;
}