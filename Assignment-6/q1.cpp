#include <iostream>
using namespace std;

class ArrayManipulator {
private:
    int *arr;   // Dynamic array to store elements
    int size;   // Size of the array

public:
    // Constructor to initialize the array and size
    ArrayManipulator(int *array, int arraySize) {
        arr = new int[arraySize];
        size = arraySize;

        // Copy elements from the given array to the dynamic array
        for (int i = 0; i < size; ++i) {
            arr[i] = array[i];
        }
    }

    // Destructor to free the allocated memory
    ~ArrayManipulator() {
        delete[] arr;
    }

    // Function to delete an element at a specified position
    void deleteElementAtPosition(int position) {
        if (position < 0 || position >= size) {
            cout << "Invalid position. Deletion not possible." << endl;
            return;
        }

        // Shift elements to the left starting from the specified position
        for (int i = position; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }

        // Decrease the size of the array
        --size;
    }

    // Function to display the modified array
    void displayArray() {
        cout << "Modified Array: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Declare variables to store user input
    int size, position;

    // Input the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    // Declare an array to store the elements
    int *elements = new int[size];

    // Input the elements from the user
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> elements[i];
    }

    // Input the position of the element to delete
    cout << "Enter the position of the element to delete (0-indexed): ";
    cin >> position;

    // Create an object of the class and delete the element at the specified position
    ArrayManipulator arrayManipulator(elements, size);
    arrayManipulator.deleteElementAtPosition(position);

    // Display the modified array
    arrayManipulator.displayArray();

    // Free the allocated memory for the array
    delete[] elements;

return 0;
}