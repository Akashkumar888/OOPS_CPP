#include <iostream>
using namespace std;

class ArithmeticProgressionChecker {
private:
    int *arr;   // Dynamic array to store the numbers
    int size;   // Size of the array

public:
    // Constructor to initialize the array and size
    ArithmeticProgressionChecker(int *array, int arraySize) {
        arr = new int[arraySize];
        size = arraySize;

        // Copy elements from the given array to the dynamic array
        for (int i = 0; i < size; ++i) {
            arr[i] = array[i];
        }
    }

    // Destructor to free the allocated memory
    ~ArithmeticProgressionChecker() {
        delete[] arr;
    }

    // Function to check if the numbers are in arithmetic progression
    bool isArithmeticProgression() {
        if (size <= 2) {
            // A sequence with less than or equal to two elements is always in AP
            return true;
        }

        int commonDifference = arr[1] - arr[0];

        for (int i = 2; i < size; ++i) {
            if (arr[i] - arr[i - 1] != commonDifference) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    // Declare variables to store user input
    int size;

    // Input the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    // Declare an array to store the numbers
    int *numbers = new int[size];

    // Input the numbers from the user
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Create an object of the class and check for arithmetic progression
    ArithmeticProgressionChecker apChecker(numbers, size);

    // Display the result
    if (apChecker.isArithmeticProgression()) {
        cout << "The numbers in the array form an arithmetic progression." << endl;
    } else {
        cout << "The numbers in the array do not form an arithmetic progression." << endl;
    }

    // Free the allocated memory for the array
    delete[] numbers;

return 0;
}