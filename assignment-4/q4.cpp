#include <iostream>
#include <cctype>

int main() {
    std::string inputString;

    // Input a string from the user
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Initialize counters
    int vowelCount = 0, consonantCount = 0, digitCount = 0, spaceCount = 0;

    // Loop through each character in the string
    for (char ch : inputString) {
        // Convert character to lowercase for case-insensitive comparison
        ch = tolower(ch);

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        } else if (isalpha(ch)) {
            // Check if the character is a consonant
            consonantCount++;
        } else if (isdigit(ch)) {
            // Check if the character is a digit
            digitCount++;
        } else if (isspace(ch)) {
            // Check if the character is a white space
            spaceCount++;
        }
    }

    // Display the counts
    std::cout << "Vowel count: " << vowelCount << "\n";
    std::cout << "Consonant count: " << consonantCount << "\n";
    std::cout << "Digit count: " << digitCount << "\n";
    std::cout << "White space count: " << spaceCount << "\n";

return 0;
}