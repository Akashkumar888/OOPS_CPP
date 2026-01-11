
// ✅ 1. Stack Memory (automatic memory)

// Stack memory is where:
// local variables
// function parameters
// return addresses
// are stored.

// ✅ Key Points (Explain these in your interview)

// Stack memory is automatically managed.
// When a function starts → memory is allocated.
// When a function ends → memory is freed automatically.
// Stack is fast because allocation is simple (LIFO: last in, first out).
// You don’t need new or delete.
// Memory size is limited and fixed.
// ✅ Simple Example:
void fun() {
    int x = 10;   // stored in stack
    int arr[5];   // stored in stack
} // memory for x and arr freed automatically here
// When the function ends, the stack memory for x and arr is destroyed.
