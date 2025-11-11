
// ✅ 2. Heap Memory (dynamic memory)
// Heap memory is used for:
// dynamically allocated objects
// memory blocks created at runtime using new or malloc

// ✅ Key Points:
// You control the memory manually.
// You must use delete to free memory.
// Heap does not automatically free memory → if you forget to free, it causes memory leakage.
// Heap memory is larger but slower because allocation happens through complex algorithms.
// Used when you need memory that:
// lives beyond a function
// is too large for stack
// needs dynamic size
// ✅ Simple Example:
void fun() {
    int* p = new int(10);  // stored in heap
    // using memory
    delete p;              // MUST delete manually
}

// Here:
// p (the pointer) is on the stack
// The actual integer value (10) is in the heap