#include <iostream>
using namespace std;

// Function to calculate the cube of a number
double calculateCube(double num) {
    return num * num * num;
}

int main() {
    // Declare a variable to store the user input
    double number;

    // Input the number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Call the function to calculate the cube
    double cubeResult = calculateCube(number);

    // Display the result
    cout << "Cube of " << number << " is: " << cubeResult << endl;

return 0;
}