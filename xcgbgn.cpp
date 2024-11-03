#include <iostream>

// Inline function definition
inline int add(int a, int b) {
    int k=++a;
    int l=b+5;
    int m=k+l;
    int p=m%10;
    return p;
}

int main() {
    int result = add(3, 4); // The function call is replaced with the actual code of the function
    std::cout << "Result: " << result << std::endl;
    return 0;
}