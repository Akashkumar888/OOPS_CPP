
// The structure is also a user-defined datatype in C++ similar to the class with the following differences:
// The major difference between a structure and a class is that in a structure, the members are set to public by default while in a class, members are private by default.
// The other difference is that we use struct for declaring structure and class for declaring a class in C++.


// 🔷 Difference Between Structure and Class in C++

// 👉 1. Basic Idea
// A structure (struct) and a class (class) are both user-defined data types in C++.
// Both can contain:
// Variables (data members)
// Functions (methods)

// 👉 So technically, they are almost the same — but differ mainly in default behavior.

// 👉 2. Main Difference (VERY IMPORTANT)
// 🔹 Structure → Members are public by default
// 🔹 Class → Members are private by default
// 🔷 Example 1: Structure

#include <iostream>
using namespace std;

struct Student {
    string name;  // public by default
};

int main() {
    Student s1;
    s1.name = "Rahul";   // allowed

    cout << s1.name;
}

// 💡 Explanation
// No public keyword written
// Still accessible → because struct members are public by default
// 🔷 Example 2: Class

#include <iostream>
using namespace std;

class Student {
    string name;  // private by default
};

int main() {
    Student s1;
    s1.name = "Rahul";   // ❌ ERROR (not accessible)
}

// 💡 Explanation
// No public keyword
// So name is private
// Cannot access directly
// 🔷 Fix (Using public in Class)

#include <iostream>
using namespace std;

class Student {
public:
    string name;
};

int main() {
    Student s1;
    s1.name = "Rahul";   // ✅ now allowed

    cout << s1.name;
}

// 👉 3. Syntax Difference
// Structure is declared using:
// struct Student { };
// Class is declared using:
// class Student { };
// 👉 4. When to Use
// ✔ Use struct when:
// You want simple data storage
// No need for strict security
// ✔ Use class when:
// You need data hiding (encapsulation)
// Building large applications (OOP)
// 🔥 Final Interview Summary

// In C++, both struct and class are similar, but the key difference is that struct members are public by default, while class members are private by default. Struct is generally used for simple data, whereas class is used for full object-oriented programming.


// ✔ In C++, struct CAN have functions, constructors, even static members, just like a class.

// 🔥 1. Real Difference Between struct and class
// Feature	                  struct	            class
// Default access	          public	            private
// Supports functions?	      ✅ Yes	              ✅ Yes
// Supports constructors?	  ✅ Yes	              ✅ Yes
// OOP features	              ✅ Yes	              ✅ Yes

// 👉 So difference is mainly default access level
// 🔹 2. Structure with Data + Function (Correct C++)


#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;

    void display() {   // function inside struct
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Akash";
    s1.age = 21;

    s1.display();
}

// 🔹 Output
// Name: Akash, Age: 21


// 🔥 3. Class with Data + Function

#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.setData("Akash", 21);
    s1.display();
}


// 🔥 4. Key Difference Demonstration

// Struct (default public)
struct A {
    int x;  // public
};

int main() {
    A obj;
    obj.x = 10; // ✅ allowed
}


// Class (default private)
class A {
    int x;  // private
};

int main() {
    A obj;
    obj.x = 10; // ❌ error
}


// 🔥 5. Constructors in Struct (VERY IMPORTANT)
// 👉 Yes, struct can have constructor

#include <iostream>
using namespace std;

struct Demo {
    int x;

    Demo(int val) {   // constructor
        x = val;
    }
};

int main() {
    Demo d(10);
    cout << d.x;
}

// 🔥 6. Static Members in Struct

#include <iostream>
using namespace std;

struct Demo {
    static int count;

    static void show() {
        cout << count << endl;
    }
};

int Demo::count = 5;

int main() {
    Demo::show();
}


// 🔥 7. When to Use Struct vs Class
// ✔ Use struct
// Simple data (like record)
// Competitive programming
// No need for strict encapsulation
// ✔ Use class
// OOP design
// Encapsulation (private + public)
// Real-world modeling

// 🔥 8. Interview Answer (VERY IMPORTANT)
// If interviewer asks:
// 👉 “Difference between struct and class?”
// Say:

// “In C++, both struct and class are almost identical and support functions, constructors, and OOP features. The key difference is that struct members are public by default, while class members are private by default.”

// 🔥 9. Advanced Interview Point ⭐
// 👉 You can also say:
// “Struct is generally used for passive data structures, while class is used for encapsulation and behavior.”

// 🔥 10. Final Summary
// Struct:
// - Default → public
// - Used for simple data
// - Can have functions


// “Struct is used for passive data”

// It means:

// ✔ Data is exposed directly
// ✔ No strict control / validation
// ✔ Minimal behavior (logic)


// ✔ Characteristics
// Data is open/public
// No control
// No validation
// Used like a record


// 🔹 Class → Active / Encapsulated Data
// ✔ Characteristics
// Data is hidden (private)
// Controlled via methods
// Supports logic + rules

// “Struct is typically used for passive data structures where data is openly accessible and minimal logic is involved, while class is used for encapsulated data with controlled access and more functionality. The main technical difference is that struct members are public by default, whereas class members are private by default.”


// 🔥 When Interviewer Pushes Deeper
// If they ask:
// 👉 “Then why not always use struct?”
// Say:
// “Because class provides better encapsulation, data hiding, and abstraction, which are essential for large-scale applications.”
