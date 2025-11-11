
#include <iostream>
using namespace std;

class Box {
    int length;

public:
    Box(int l) : length(l) {}

    // Declare friend function
    friend void printLength(Box b);
};

// Friend function definition
void printLength(Box b) {
    // Can access private member
    cout << "Length of box: " << b.length << endl;
}

int main() {
    Box b1(10);
    printLength(b1);   // Output: Length of box: 10
    return 0;
}
