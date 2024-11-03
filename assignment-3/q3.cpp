#include <iostream>
#include <cctype>

int main() {
    std::string inputString;

    // Input a string from the user
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Initialize counters
    int letterCount = 0, spaceCount = 0, digitCount = 0, otherCount = 0;

    // Loop through each character in the string
    for (char ch : inputString) {
        if (isalpha(ch)) {
            // Check if the character is a letter
            letterCount++;
        } else if (isspace(ch)) {
            // Check if the character is a space
            spaceCount++;
        } else if (isdigit(ch)) {
            // Check if the character is a digit
            digitCount++;
        } else {
            // Character is neither letter, space, nor digit
            otherCount++;
        }
    }

    // Display the counts
    std::cout << "Letter count: " << letterCount << "\n";
    std::cout << "Space count: " << spaceCount << "\n";
    std::cout << "Number count: " << digitCount << "\n";
    std::cout << "Other character count: " << otherCount << "\n";

 return 0;
}