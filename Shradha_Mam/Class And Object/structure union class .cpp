
// 🔥 1. STRUCTURE (struct) — Detailed
// ✅ Definition
// A struct is a user-defined data type that groups variables of different types.

struct Student {
    int id;
    char grade;
};
// 🧠 Memory Concept (VERY IMPORTANT)
// Each member gets separate memory.
// 👉 Example:

struct A {
    int x;   // 4 bytes
    char y;  // 1 byte
};

// 👉 Actual memory (with padding):
// | x (4 bytes) | y (1 byte) | padding (3 bytes) |
// Total = 8 bytes (not 5!)
// ✔ Due to alignment & padding

// 🔑 Key Features
// Stores multiple values at once
// All members accessible simultaneously
// Default access = public (C++)
// No encapsulation by default
// 📌 Use Case
// 👉 When you need to represent real-world entity data

// Student
// Employee
// Product
// ⚠️ Interview Trap
// 👉 In C++:
// struct and class are almost same except default access!

// 🔥 2. UNION (union) — Detailed
// ✅ Definition
// A union is a data structure where all members share the same memory location.

union Data {
    int x;
    float y;
    char z;
};

// 🧠 Memory Concept (VERY IMPORTANT)
// 👉 Only one memory block is used.
// | shared memory |
// Size = largest member
// 👉 Example:


union A {
    int x;   // 4 bytes
    char y;  // 1 byte
};

// 👉 Total size = 4 bytes

// ⚡ Behavior
// Data d;
// d.x = 10;
// d.y = 3.14; // overwrites x

// 👉 Only last assigned value is valid
// 🔑 Key Features
// Memory efficient ✅
// Only one member usable at a time ❌
// Default access = public (C++)
// 📌 Use Case
// 👉 When variable can have multiple forms but only one at a time

// File formats
// Embedded systems
// Variant data
// ⚠️ Interview Trap

// 👉 Accessing inactive member = undefined behavior

// 🔥 3. CLASS (class) — Detailed
// ✅ Definition
// A class is a blueprint for objects, combining:

// Data (variables)
// Behavior (functions)
class Car {
private:
    int speed;

public:
    void setSpeed(int s) {
        speed = s;
    }
};
// 🧠 Memory Concept
// Same as struct:

// Each member has separate memory
// Includes:
// Data members
// (Functions stored separately, not inside object)
// 🔑 Key Features
// Supports Encapsulation 🔥
// Supports Inheritance
// Supports Polymorphism
// Default access = private
// 📌 Use Case
// 👉 Full OOP design

// Systems
// Applications
// Frameworks
// ⚠️ Interview Trap
// 👉 Functions do NOT increase object size

// ⚡ FULL COMPARISON (VERY IMPORTANT 🔥)
// Feature	         struct	                                         union	                                         class
// Memory	           Separate	                                       Shared	                                         Separate
// Size	            Sum + padding	                                   Max member	                                     Sum + padding
// Access	          All members	                                     One at a time	                                 All members
// Default access	  Public	                                         Public	                                         Private
// Functions	      Allowed (C++)	                                   Allowed (C++)	                                 Allowed

// OOP features	Limited	No	Full OOP
// Inheritance	Yes	No	Yes
// 🧠 MEMORY VISUALIZATION (INTERVIEW GOLD)
// STRUCT
// x → [data]
// y → [data]
// z → [data]
// UNION
// x → [same memory]
// y → [same memory]
// z → [same memory]
// 🔥 ADVANCED INTERVIEW POINTS
// 1. Struct vs Class (C++)
struct A {
    int x; // public
};

class B {
    int x; // private
};

// 👉 ONLY difference:

// struct → public default
// class → private default
// 2. Can struct have functions? ✅ YES
struct A {
    void fun() {
        cout << "Hello";
    }
};
// 3. Union with Constructor (C++)
union A {
    int x;
    float y;

    A() { x = 0; }
};
// 4. Anonymous Union
struct Test {
    union {
        int x;
        float y;
    };
};
// 5. Real-world tricky question
// 👉 What happens here?

union A {
    int x;
    char arr[4];
};

// A a;
// a.x = 65;
// cout << a.arr[0];

// 👉 Answer:
// Prints 'A' (ASCII 65)
// Because memory is shared
// 🎯 INTERVIEW ONE-LINERS

// 👉 Struct:
// “Groups related data with public access by default.”

// 👉 Union:
// “Shares memory among members; only one active at a time.”

// 👉 Class:
// “Encapsulates data and behavior with private access by default.”

// 🔥 MOST ASKED INTERVIEW QUESTIONS
// ❓ Q1: Why use union?
// 👉 Memory optimization

// ❓ Q2: Struct vs Class?
// 👉 Only default access + inheritance difference

// ❓ Q3: Can union have multiple active members?
// 👉 ❌ No

// ❓ Q4: Which is faster?
// 👉 Same (depends on usage)

// 🚀 FINAL TIP (VERY IMPORTANT)
// 👉 If interviewer asks:

// “Difference in ONE LINE?”
// Answer:

// ✔ Struct → Data grouping (public)
// ✔ Union → Memory sharing
// ✔ Class → OOP + encapsulation