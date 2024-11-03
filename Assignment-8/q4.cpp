#include <iostream>

inline bool isEven(int num) {
    return (num % 2 == 0);
}

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (isEven(number)) {
        std::cout << number << " is even.\n";
    } else {
        std::cout << number << " is odd.\n";
    }

return 0;
}