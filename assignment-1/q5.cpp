#include <iostream>

class Temperature {
private:
    double fahrenheit;

public:
    // Constructor to initialize Fahrenheit temperature
    Temperature(double f) : fahrenheit(f) {}

    // Member function to convert Fahrenheit to Celsius
    double toCelsius() {
        return (fahrenheit - 32) * 5 / 9;
    }

    // Member function to display the temperature in Celsius
    void displayInCelsius() {
        std::cout << "Temperature in Celsius: " << toCelsius() << " degrees Celsius\n";
    }
};

int main() {
    // Create a Temperature object with a Fahrenheit value
    Temperature tempInFahrenheit(98.6);

    // Display the temperature in Celsius
    tempInFahrenheit.displayInCelsius();

return 0;
}