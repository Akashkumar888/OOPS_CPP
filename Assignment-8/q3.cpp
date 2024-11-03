#include <iostream>
#include <initializer_list>

// Inline function to calculate the sum of integers using initializer_list
inline int calculateSum(std::initializer_list<int> nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    return sum;
}

int main() {
    // Example usage
    int result = calculateSum({10, 20, 30});
    std::cout << "Sum: " << result << std::endl;

return 0;
}