
#include <iostream>
using namespace std;

class Data {
private:
    int *arr;

public:
    Data() {
        arr = new int[5]; // allocate memory
        cout << "Constructor: Memory allocated" << endl;
    }

    ~Data() {
        delete[] arr; // clean up
        cout << "Destructor: Memory freed" << endl;
    }
};

int main() {
    Data d;  
    return 0;
}

// Destructor
// Special function called automatically when object is destroyed.
// Used to free resources.
// Only one destructor per class.
// No parameters, no return type.
