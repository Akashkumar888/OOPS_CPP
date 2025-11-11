
// ✅ 1. What is a Friend Function? (Detailed Explanation)
// A friend function is a non-member function that is given special permission to access private and protected members of a class.
// It is not part of the class
// But it can access the class's private/protected data
// Declared using the friend keyword inside the class
// ✅ Friend Function Example in C++

#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box(int w) : width(w) {}

    // friend function declaration
    friend void showWidth(Box b);
};

// friend function definition
void showWidth(Box b) {
    cout << "Width: " << b.width << endl;   // accessing private member
}

int main() {
    Box b(50);
    showWidth(b);    // friend function can access private members
    return 0;
}

// ✅ How to explain to interviewer
// “A friend function is not a class member, but it has permission to access private data. It is useful when two or more classes need to share sensitive data.”
