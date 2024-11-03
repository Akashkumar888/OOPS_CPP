#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    // Parameterized constructor to initialize sides
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // Function to calculate and print area and perimeter
    void calculateAndPrint() {
        // Check if the sides form a valid triangle
        if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
            // Calculate the semi-perimeter
            double semiPerimeter = (side1 + side2 + side3) / 2;

            // Calculate area using Heron's formula
            double area = sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));

            // Calculate perimeter
            double perimeter = side1 + side2 + side3;

            // Display the results
            cout << "Area of the triangle: " << area << endl;
            cout << "Perimeter of the triangle: " << perimeter << endl;
        } else {
            cout << "Invalid sides. The given lengths do not form a triangle." << endl;
        }
    }
};

int main() {
    // Declare variables to store user input
    double side1, side2, side3;

    // Input the lengths of the sides from the user
    cout << "Enter the length of side 1: ";
    cin >> side1;

    cout << "Enter the length of side 2: ";
    cin >> side2;

    cout << "Enter the length of side 3: ";
    cin >> side3;

    // Create an object of the class using the parameterized constructor
    Triangle triangle(side1, side2, side3);

    // Call the method to calculate and print area and perimeter
    triangle.calculateAndPrint();

return 0;
}