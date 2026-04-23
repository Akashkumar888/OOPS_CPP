
// 🔥 1. First correction (important)
// 👉 C++ does NOT have “static class” like Java/C#

// Instead:
// You have classes
// Inside them, members can be:

// non-static
// static
// 🔹 2. Non-static vs Static (Core Difference)
// Feature	                Non-static	     Static
// Belongs to	            Object	        Class
// Object needed?	        ✅ Yes	      ❌ No
// Memory	                Per object	    One copy
// Access	                obj.func()	    Class::func()

// 🔥 3. Non-Static Class Members
// ✅ Code
#include <bits/stdc++.h>
using namespace std;

class Demo {
public:
    int x;  // non-static variable

    Demo(int val) {   // constructor
        x = val;
        cout << "Constructor called\n";
    }

    void show() {     // non-static function
        cout << "Value: " << x << endl;
    }
};

int main() {
    Demo d1(10);  // object created (stack)
    Demo d2(20);

    d1.show();
    d2.show();
}

// 🔹 Key Points
// 👉 Each object has its own copy

// d1.x = 10
// d2.x = 20

// 👉 Memory:
// Object stored in stack (if local)
// Inside object → members stored together

// 👉 Important:
// Each object gets separate memory
// So memory allocated multiple times

// 🔥 4. Static Members
✅ Code
#include <bits/stdc++.h>
using namespace std;

class Demo {
public:
    static int count;

    static void show() {
        cout << "Count = " << count << endl;
    }
};

// static variable must be defined outside
int Demo::count = 0;

int main() {
    Demo::count = 5;
    Demo::show();   // no object needed
}

// 🔹 Key Points
// 👉 Only ONE copy exists
// Shared across all objects
// 👉 Memory:
// Stored in static/global memory area

// 🔹 What happens?
// Even if you create:
// Demo d1, d2, d3;

// 👉 Memory:
// Data Segment:
// count → only ONE copy
// 👉 All objects share it:
// d1 → uses count
// d2 → uses count
// d3 → uses count


// 🔥 5. Why object needed for non-static?
// 👉 Because non-static members belong to specific object
// Example:
// d1.show();
// 👉 Compiler needs:
// Which object? → d1

// 🔥 6. Why object NOT needed for static?
// 👉 Static belongs to class itself
// Demo::show();
// 👉 No ambiguity:
// Same for all → no object required

// 🔥 7. Why use . and :: ?
// 🔹 Dot Operator (.)
// Used with object
// d.show();

// 👉 Meaning:
// Call function of THIS object
// 🔹 Scope Resolution (::)
// Used with class
// Demo::show();
// 👉 Meaning:
// Call class-level function


// 🔥 8. Constructor Behavior
// 👉 Constructor is ALWAYS non-static
// Demo d;
// Why?
// It initializes object
// Static cannot create object


// 🔥 9. Memory Breakdown (VERY IMPORTANT)
// Type	Memory
// Local object	Stack
// Dynamic object (new)	Heap
// Static variable	Data segment
// 🔹 Example
// Demo d;          // Stack
// Demo* p = new Demo(); // Heap


// 🔥 10. Combined Example (BEST FOR INTERVIEW ⭐)
#include <bits/stdc++.h>
using namespace std;

class Demo {
public:
    int x;
    static int count;

    Demo(int val) {
        x = val;
        count++;
    }

    void show() {
        cout << "x = " << x << endl;
    }

    static void total() {
        cout << "Total objects: " << count << endl;
    }
};

int Demo::count = 0;

int main() {
    Demo d1(10);
    Demo d2(20);

    d1.show();
    d2.show();

    Demo::total();  // static call
}

// 🔥 Output
// x = 10
// x = 20
// Total objects: 2

// 🔥 11. Interview Ready Explanation
// If interviewer asks:
// 👉 “When object is needed?”
// Say:

// “Object is required to access non-static members because they belong to individual instances, while static members belong to the class and can be accessed without creating objects.”

// 🔥 12. Common Mistakes (avoid)
// ❌ Thinking static = no memory
// ✔ It has memory (one copy)
// ❌ Thinking static function can access non-static directly
// ✔ It cannot

// 🔥 13. Why static is used?
// Shared data (counter, config)
// Utility functions
// Memory saving
// 🔥 FINAL ONE-LINE ANSWER

// “Non-static members require objects because they belong to instances, while static members belong to the class, have a single shared memory, and can be accessed using the scope resolution operator without creating objects.”

// No. If the base class includes non-static methods, an object must be constructed. But no objects need to be generated if the class includes static methods. In this instance, you can use the class name to directly call those static methods.


// 🔥 7. Key Interview Question
// 👉 “When is memory allocated?”

// Answer:
// Non-static members → allocated each time object is created
// Static members → allocated once when program starts

// 🔥 8. Why static uses one memory?
// 👉 Because:
// It belongs to class, not object
// 👉 So no duplication needed

// 🔥 9. Why non-static uses multiple memory?
// 👉 Because:
// Each object must store its own state

// 🔷 Is it always necessary to create objects from a class?
// 👉 Simple Answer
// ❌ No, it is not always necessary to create objects.

// 👉 Explanation
// If a class contains non-static methods, then you must create an object to access them.
// If a class contains static methods, then you do not need to create an object.

// 👉 Case 1: Non-Static Methods
// 👉 Object is required


class Demo {
public:
    void show() {
        cout << "Hello";
    }
};

int main() {
    Demo d;   // object created
    d.show(); // calling method
}



// 👉 Case 2: Static Methods
// 👉 Object is NOT required

class Demo {
public:
    static void show() {
        cout << "Hello";
    }
};

int main() {
    Demo::show(); // called using class name
}

// 💡 Key Point
// Non-static → need object
// Static → no object needed
// 🔥 Final Interview Line

// It is not always necessary to create objects. Objects are required to access non-static members, but static members can be accessed directly using the class name without creating an object.
