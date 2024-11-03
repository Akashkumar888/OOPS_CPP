#include <iostream>

int main() {
    const int size = 5;

    for (int i = 0; i < size; ++i) {
        // Print leading spaces
        for (int k = 0; k < i; ++k) {
            std::cout << " ";
        }

        // Print characters in decreasing order
        for (int j = size - i; j > 0; --j) {
            std::cout << char('A' + j - 1);
        }

        std::cout << "\n";
    }

return 0;
}