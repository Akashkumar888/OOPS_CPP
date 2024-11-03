#include <iostream>

class Swapper {
public:
    void swapValues(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }
};

int main() {
    // Create an instance of the Swapper class
    Swapper swapper;

    // Input two numbers
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Display the original values
    std::cout << "Original values: " << "a = " << num1 << ", b = " << num2 << std::endl;

    // Call the swapValues function using the Swapper object
    swapper.swapValues(num1, num2);

    // Display the swapped values
    std::cout << "Swapped values: " << "a = " << num1 << ", b = " << num2 << std::endl;

return 0;
}