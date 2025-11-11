// ✅ Polymorphism (Interview-Ready Answer)
// Polymorphism means “many forms”.
// It allows the same function or the same object to behave differently in different situations.
// Two types:
// Compile-time Polymorphism (Static)
// Run-time Polymorphism (Dynamic)


// ✅ 2. What is Compile-Time Polymorphism? (C++ Version)

// Interview Answer:
// “Compile-time polymorphism happens through function overloading and operator overloading.
// The correct function is selected by the compiler, not at runtime.”

// ✅ 1. Compile-Time Polymorphism
// Decided at compile time.
// Types:
// Function Overloading
// Operator Overloading (C++ only)

// ✅ Function Overloading
// Same function name but different parameters in the same class.

// ✅ 3. Function Overloading (Compile-time Polymorphism)
// Interview Answer:
// “Function overloading means using the same function name but different parameter types or number of parameters.”

#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math m;
    cout << m.add(2, 3) << endl;       // int version
    cout << m.add(2.5, 3.7) << endl;   // double version
}


