
// ✅ Simple Real-Life Explanation

// Stack = your desk
// You keep things temporarily
// When you finish work, you clear the desk automatically
// Heap = your cupboard/storage
// You put items manually
// You must manually clean it when no longer needed
// More space but slower access

// ✅ Code Example Combining Both
#include <iostream>
using namespace std;

void test() {
    int a = 5;             // stack
    int b[10];             // stack

    int* p = new int(20);  // heap
    int* arr = new int[5]; // heap

    delete p;              // manual free
    delete[] arr;          // manual free for arrays
}

int main() {
    test();  // after this, stack variables destroyed automatically
    return 0;
}

// Stack memory is used for local variables and function calls. It is fast and automatically managed.
// Heap memory is used for dynamically allocated objects with new. It is manually managed using delete and slower but larger.