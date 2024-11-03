#include <iostream>
#include <cstring>

int main() {
    int arr[5];

    // Set the entire array to a specific value (e.g., 0)
   memset(arr,0,sizeof(arr));

    // Print the array to verify the changes
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}