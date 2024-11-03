#include <iostream>
using namespace std;

class NumberProductCalculator {
private:
    int start;   // Starting number of the range
    int end;     // Ending number of the range

public:
    // Constructor to initialize the range
    NumberProductCalculator(int startRange, int endRange) {
        start = startRange;
        end = endRange;
    }

    // Function to calculate the product of all odd numbers in the range
    long long calculateOddProduct() {
        long long oddProduct = 1;

        for (int i = start; i <= end; ++i) {
            if (i % 2 != 0) {
                oddProduct *= i;
            }
        }

        return oddProduct;
    }

    // Function to calculate the product of all even numbers in the range
    long long calculateEvenProduct() {
        long long evenProduct = 1;

        for (int i = start; i <= end; ++i) {
            if (i % 2 == 0) {
                evenProduct *= i;
            }
        }

        return evenProduct;
    }
};

int main() {
    // Declare variables to store user input
    int startRange, endRange;

    // Input the range from the user
    cout << "Enter the starting number of the range: ";
    cin >> startRange;

    cout << "Enter the ending number of the range: ";
    cin >> endRange;

    // Create an object of the class
    NumberProductCalculator productCalculator(startRange, endRange);

    // Calculate and display the product of odd numbers
    cout << "Product of odd numbers in the range: " << productCalculator.calculateOddProduct() << endl;

    // Calculate and display the product of even numbers
    cout << "Product of even numbers in the range: " << productCalculator.calculateEvenProduct() << endl;

return 0;
}