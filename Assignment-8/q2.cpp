#include <iostream>

inline double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

inline double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double temperature;
    char choice;

    std::cout << "Enter temperature: ";
    std::cin >> temperature;

    std::cout << "Choose conversion:\n";
    std::cout << "1. Celsius to Fahrenheit\n";
    std::cout << "2. Fahrenheit to Celsius\n";
    std::cin >> choice;

    switch (choice) {
        case '1':
            std::cout << temperature << " Celsius is " << celsiusToFahrenheit(temperature) << " Fahrenheit.\n";
            break;
        case '2':
            std::cout << temperature << " Fahrenheit is " << fahrenheitToCelsius(temperature) << " Celsius.\n";
            break;
        default:
            std::cout << "Invalid choice.\n";
            break;
    }

return 0;
}