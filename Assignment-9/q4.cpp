#include <iostream>

class Adder {
private:
    int x;
    int y;

public:
    Adder(int a, int b) : x(a), y(b) {}

    // Declare the friend function
    friend int addValues(const Adder &obj);
};

// Define the friend function
int addValues(const Adder &obj) {
    // Access private members x and y directly as it is a friend function
    return obj.x + obj.y;
}

int main() {
    // Create an instance of the Adder class
    Adder adder(5, 7);

    // Call the friend function to add x and y values
    int sum = addValues(adder);

    // Display the result
    std::cout << "Sum of x and y: " << sum << std::endl;

return 0;
}