
// What is Exception Handling?
// Exception handling is a mechanism to handle runtime errors gracefully so that the program does not crash and can continue or exit safely.
// Keywords Used in C++ Exception Handling
// try → block where code that may cause exception is written
// throw → used to throw an exception
// catch → block that handles the exception

// Correct C++ Syntax Example
// Note: In C++, dividing by zero using integers does not throw an exception automatically. So we manually throw one.

#include <iostream>
#include <exception>
using namespace std;

int main() {
    try {
        int a = 5;
        int b = 0;

        if (b == 0) {
            throw runtime_error("Division by zero");
        }

        int c = a / b;  
        cout << c;
    }
    catch (exception &e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}

// What this demonstrates:
// The risky code is inside try
// We manually throw an exception when error condition occurs
// catch block prints the error using e.what()




// ✅ 4. What is throw in C++?
// throw is used to raise an exception intentionally when something goes wrong.
// Example:

throw runtime_error("Invalid input");

// ✅ 5. What is catch in C++?
// catch is a block which handles the exception thrown inside try.
// Example:

catch (const exception &e) {
    cout << e.what();
}

// ✅ 6. What is try in C++?
// A try block contains statements that may raise exceptions.

// ✅ 7. Can we catch multiple exceptions?
// Yes. C++ allows multiple catch blocks.
// Example:

try {
    throw 10;
}
catch (int x) {
    cout << "Integer exception\n";
}
catch (const exception &e) {
    cout << "Standard exception\n";
}

// ✅ 8. What is rethrowing an exception?
// Re-throwing means passing the same exception to the outer scope using bare throw;.
// Example:

catch (const exception &e) {
    cout << "Handling inside function\n";
    throw; // rethrow to outer handler
}

// ✅ 9. Difference between Exception and Error
// Exception	Error
// Recoverable	Usually non-recoverable
// Happens at runtime	Can happen at system level
// Can be handled using try-catch	Program often cannot continue
// Examples:
// ✅ Exception → division by zero, file not found
// ❌ Error → stack overflow, hardware failure

// ✅ 10. Standard exception classes in C++
// Some commonly used classes under <exception>:
// std::exception → Base class of all exceptions
// std::runtime_error → Errors at runtime
// std::logic_error → Errors in program logic
// std::out_of_range → Index/size exceeds limit
// std::bad_alloc → Memory allocation failure
// Example of standard exception usage:

try {
    throw out_of_range("Index out of range!");
}
catch (const out_of_range &e) {
    cout << e.what();
}

// ✅ If you want, I can also prepare:
// ✅ A one-page revision sheet for all OOP & C++ interview topics
// ✅ A mock interview where I ask questions & you answer
// ✅ Quick explanations on virtual destructors, covariant return types, IS-A vs HAS-A, dynamic binding
