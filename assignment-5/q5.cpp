#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
unsigned long long factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    // Declare a variable to store user input
    int number;

    // Input the number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is non-negative
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Call the function to calculate the factorial
        unsigned long long result = factorial(number);

        // Display the result
        cout << "Factorial of " << number << " is: " << result << endl;
    }

return 0;
}