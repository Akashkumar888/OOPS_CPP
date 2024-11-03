#include <iostream>
#include <unordered_map>
#include <vector>

void printRepeatedNumbers(const std::vector<int>& arr) {
    std::unordered_map<int, int> frequencyMap;

    // Count the frequency of each number
    for (int num : arr) {
        frequencyMap[num]++;
    }

    // Print repeated numbers with frequency
    std::cout << "Repeated Numbers with Frequency:\n";
    for (const auto& entry : frequencyMap) {
        if (entry.second > 1) {
            std::cout << "Number: " << entry.first << ", Frequency: " << entry.second << "\n";
        }
    }
}

int main() {
    // Example usage
    std::vector<int> myArray = {1, 2, 3, 2, 4, 5, 3, 6, 7, 8, 8};
    printRepeatedNumbers(myArray);

return 0;
}