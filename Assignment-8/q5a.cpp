#include <iostream>

int main() {
    const int size = 5;

    for (int i = size; i > 0; --i) {
        // Print leading spaces
        for (int k = size - i; k > 0; --k) {
            std::cout << " ";
        }

        // Print the decreasing numbers
        for (int j = i; j > 0; --j) {
            std::cout << i;
        }

        std::cout << "\n";
    }

return 0;
}