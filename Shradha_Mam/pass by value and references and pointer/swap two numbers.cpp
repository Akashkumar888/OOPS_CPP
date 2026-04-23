
// 🔥 1. Terminology (VERY IMPORTANT)
// Term	Meaning
// Formal parameter	Variable in function definition
// Actual parameter (argument)	Value passed in function call

// Example
// void solve(int a, int b) // a,b → formal parameters
// {
// }

// int main() {
//     solve(5, 10); // 5,10 → actual parameters (arguments)
// }


// 🔥 2. Swap using Pass by Value ❌ (No change outside)
#include <iostream>
using namespace std;

void solve(int a, int b) { // formal parameters
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside function: " << a << " " << b << endl;
}

int main() {
    int x = 5, y = 10; // actual parameters

    solve(x, y);

    cout << "Outside function: " << x << " " << y << endl;
}

// 🔹 Output
// Inside function: 10 5
// Outside function: 5 10

// 👉 ❌ No swap outside (copy passed)
// 🔥 3. Swap using Pass by Reference ✅

#include <iostream>
using namespace std;

void solve(int &a, int &b) { // reference parameters
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    solve(x, y);

    cout << "After swap: " << x << " " << y << endl;
}

// 🔹 Output
// After swap: 10 5

// 👉 ✅ Real swap
// 🔥 4. Swap using Addition/Subtraction

#include <iostream>
using namespace std;

void solve(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int x = 5, y = 10;

    solve(x, y);

    cout << x << " " << y;
}

// 👉 ⚠️ Risk: overflow
// 🔥 5. Swap using XOR (Bitwise)

#include <iostream>
using namespace std;

void solve(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    int x = 5, y = 10;

    solve(x, y);

    cout << x << " " << y;
}

// 👉 No extra variable
// 👉 Safe from overflow

// 🔥 6. Call by Pointer (Another method)

#include <iostream>
using namespace std;

void solve(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    solve(&x, &y);

    cout << x << " " << y;
}

// 🔥 7. Summary (VERY IMPORTANT)
// Method	                  Works?	            Notes
// Pass by value	          ❌	                Copy only
// Pass by reference	      ✅	                Best
// Pointer	                ✅	                C-style
// Add/Sub	                ✅	                Overflow risk
// XOR	                    ✅	                Bitwise trick

// 🔥 8. Interview Answer (IMPORTANT)
// If asked:
// 👉 “Difference between pass by value & reference?”
// Say:
// “Pass by value creates a copy of variables, so changes do not affect original values. Pass by reference passes the actual memory address, so changes reflect outside the function.”

// 🔥 9. One-line Key Concept
// Value → copy
// Reference → original
// Pointer → address
// 🚀 Best Practice

// 👉 Always use:
// void solve(int &a, int &b)