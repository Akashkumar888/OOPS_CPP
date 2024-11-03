#include <iostream>
using namespace std;

class NumberContainer {
private:
    int number;

public:
    // Parameterized constructor
    NumberContainer(int value) {
        number = value;
    }

    // Copy constructor
    NumberContainer(const NumberContainer &other) {
        number = other.number;
        cout << "Copy constructor called!" << endl;
    }

    // Function to display the number
    void displayNumber() {
        cout << "Number: " << number << endl;
    }
};

int main() {
    // Create an object using the parameterized constructor
    NumberContainer originalNumber(42);

    // Display the original number
    cout << "Original Number:" << endl;
    originalNumber.displayNumber();

    // Create a new object using the copy constructor
    NumberContainer copiedNumber = originalNumber;

    // Display the copied number
    cout << "Copied Number:" << endl;
    copiedNumber.displayNumber();

return 0;
}