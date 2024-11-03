#include <iostream>

int main() {
    int num1, num2;

    // Input two integers from the user
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Check if the two integers are the same
    if (num1 == num2) {
        std::cout << "Both integers are the same. Result: 0\n";
    } else {
        // Check if the two integers have the same remainder when divided by 7
        if (num1 % 7 == num2 % 7) {
            // Return the smaller integer
            std::cout << "Both integers have the same remainder when divided by 7. Result: " << (num1 < num2 ? num1 : num2) << "\n";
        } else {
            // Return the larger integer
            std::cout << "The larger integer is: " << (num1 > num2 ? num1 : num2) << "\n";
        }
    }

return 0;
}