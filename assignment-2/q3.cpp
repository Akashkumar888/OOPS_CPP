#include <iostream>

class ArrayOperations {
private:
    int size;
    int *arr;

public:
    // Constructor to initialize the array with user-provided size
    ArrayOperations(int s)  {
        size=s;
        arr = new int[size];
    }

    // Member function to input elements into the array
    void inputElements() {
        std::cout << "Enter " << size << " elements into the array:\n";
        for (int i = 0; i < size; ++i) {
            std::cout << "Element " << i + 1 << ": ";
            std::cin >> arr[i];
        }
    }

    // Member function to display elements of the array
    void displayElements() {
        std::cout << "Elements of the array:\n";
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    }

    // Member function to calculate and display the sum of array elements
    void calculateSum() {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        std::cout << "Sum of elements: " << sum << "\n";
    }

    // Member function to find and display the maximum and minimum elements
    void findMinMax() {
        int maxElement = arr[0];
        int minElement = arr[0];

        for (int i = 1; i < size; ++i) {
            if (arr[i] > maxElement) {
                maxElement = arr[i];
            }

            if (arr[i] < minElement) {
                minElement = arr[i];
            }
        }

        std::cout << "Maximum element: " << maxElement << "\n";
        std::cout << "Minimum element: " << minElement << "\n";
    }

    // Destructor to free the dynamically allocated memory
    ~ArrayOperations() {
        delete[] arr;
    }
    
};

int main() {
    int size;

    // Get the size of the array from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Create an object of ArrayOperations class
    ArrayOperations arrayObj(size);

    // Input elements into the array
    arrayObj.inputElements();

    // Display elements of the array
    arrayObj.displayElements();

    // Calculate and display the sum of array elements
    arrayObj.calculateSum();

    // Find and display the maximum and minimum elements of the array
    arrayObj.findMinMax();

  return 0;
}