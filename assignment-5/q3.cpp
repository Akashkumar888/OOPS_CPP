#include <iostream>
using namespace std;

// Function to check if a number is palindrome
bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    // Declare a variable to store user input
    int number;

    // Input the number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is a palindrome using the function
    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

return 0;
}