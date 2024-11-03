#include <iostream>
#include <vector>

// Function to check if 10 appears as either first or last element in the array
bool checkArray(const std::vector<int>& arr) {
    if (arr.size() >= 1) {
        return (arr.front() == 10 || arr.back() == 10);
    }
    return false;
}

int main() {
    // Input array of integers
    std::vector<int> myArray;
    int size, num;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> num;
        myArray.push_back(num);
    }

    // Check and display the result
    if (checkArray(myArray)) {
        std::cout << "True\n";
    } else {
        std::cout << "False\n";
    }

 return 0;
}