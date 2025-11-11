
// “static is used to create class-level variables and methods.
// A static member is shared by all objects of the class, not copied per object.”

// ✅ Key Points:
// Static variable is created once in memory.
// All objects share the same copy.
// Static functions can be called using class name.
// ✅ Simple Example:

#include <iostream>
using namespace std;

class Demo {
public:
    static int count;  // static variable

    Demo() {
        count++;       // shared among all objects
    }

    static void show() {   // static method
        cout << "Count = " << count << endl;
    }
};

int Demo::count = 0;

int main() {
    Demo a, b, c;
    Demo::show();     // calling using class name
    return 0;
}

// ✅ 2. Difference between Instance variable and Class variable (C++ version)
// ✅ Instance Variable
// Belongs to each object separately.
// Every object gets its own copy.
// Stored inside object memory.

// ✅ Class Variable (Static variable)
// Belongs to the class, not to objects.
// Only one copy exists.
// Shared by all objects.
// ✅ Explain This in Interview:
// “Instance variables are per object. Static (class) variables are shared by all objects.”